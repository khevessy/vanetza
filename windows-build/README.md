## Introduction
This is a [Vanetza](https://github.com/khevessy/vanetza/tree/windows_build) library ready to build for Windows. There are only necessary files to generate Visual Studio project and compile the library to dynamic libraried. Output folders:

* In `shared/bin/Release`, there are `.dll` dynamic libraries

* In `shared/lib/static/Release`, there are `.lib` export libraries to be used with the DLLs

Vanetza repository was [downloaded](https://github.com/riebl/vanetza/commit/74d75e0c4f92e60448c08e19b76186645d88f0ae) 2024-12-06, later changes are not reflected here.

## Building Vanetza
### Prerequisities:
* [Boost](https://www.boost.org/users/history/version_1_80_0.html)
* [CryptoPP](https://www.cryptopp.com/downloads.html)
* [GeographicLib](https://geographiclib.sourceforge.io/)

I recommend to put those libraries in the folder `vanetza-deps` for easier linking.
 1. Boost
	* Tested with Boost 1.78, 1.80 and 1.83
	* Download and unpack
	* Build command:
 	```
	bootstrap
	.\b2
	.\b2 --with-date_time link=shared
	(other libraries if needed - e.g. system)
	```
 2. GeographicLib
	* Tested with GeographicLib 1.52
	* Versions 1.47, 2.1.1 and 2.3 100% do not work (as of 2023-08 not detected by the Vanetza CMake command). Later commit may have fixed that.
	* Download and install .exe installer
 3. CryptoPP
	* Tested with CryptoPP 8.70 and 8.80
	* Download and unpack
	* Install according to its `README.txt` (open Visual Studio project, build) with one exception: change static runtime library to dynamic (right-click on project -> Properties -> C/C++ -> Code Generation -> Runtime Library -> change Multi-threaded (/MT) to Multi-threaded DLL (/MD); now you can build
	* Note that path must end with `...\CryptoPP\cryptopp\` (default is `...\CryptoPP\cryptopp870`) for the vanetza cmake to work properly!

### Generate Visual Studio project
Open Visual Studio Developer PowerShell, change to Vanetza directory. Issue those commands (change directories accordingly):
```
mkdir shared
cd shared
cmake .. -DBOOST_ROOT="C:\vanetza-windows\vanetza-master\vanetza-deps\Boost\boost_1_78_0" \
			-DCryptoPP_INCLUDE_DIR="C:\vanetza-windows\vanetza-master\vanetza-deps\CryptoPP" \
			-DCryptoPP_LIBRARY="C:\vanetza-windows\vanetza-master\vanetza-deps\CryptoPP\cryptopp\x64\Output\Release\cryptlib.lib" \
			-DBUILD_SHARED_LIBS=ON -DCMAKE_WINDOWS_EXPORT_ALL_SYMBOLS=TRUE
```
Note 1: [credit for the last flag](https://www.kitware.com/create-dlls-on-windows-without-declspec-using-new-cmake-export-all-feature/)

Note 2: command for static libraries:
```
mkdir build
cd build
cmake .. -DBOOST_ROOT="C:\vanetza-windows\vanetza-master\vanetza-deps\Boost\boost_1_78_0" \
			-DCryptoPP_INCLUDE_DIR="C:\vanetza-windows\vanetza-master\vanetza-deps\CryptoPP" \
			-DCryptoPP_LIBRARY="C:\vanetza-windows\vanetza-master\vanetza-deps\CryptoPP\cryptopp\x64\Output\Release\cryptopp.lib"
```
Note 3: For `Debug` build, you must add `-DCMAKE_BUILD_TYPE=Debug` to the CMake command line.

Note 4: For `Debug` build, reference to `Debug` `CryptoPP` binary must be added (instead of the `Release` one) (else you will get error about \_ITERATOR_DEBUG_LEVEL mismatch).

Now the project should be generated.

### Project changes
In order for the project to be build, some changes must be made (everytime the project is generated).

1. `security` module does not work with C++14 for some reason. Change compiler to C++17. I am using C++17 for all the projects just to be consistent with the compilation.
2. Define `_USE_MATH_DEFINES` in the IDE for `asn1_support` module (it needs `M_E` and `M_PI` identifiers which are not in C standard `math.h`).
3. If you encounter errors `'(': illegal token on right side of '::'` and more (C2589, C2062, C2737, C2059), add `NOMINMAX` to the project defines (`Properties -> C/C++ -> Preprocessor Definitions`) (`security`, `geonet`).
4. `CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS` has a bug where it exports some standard library symbols that it shouldn't. Because of that, project cannot be built as there are multiple definitions. This has two possible solutions. First is deleting the symbols' exporting manually from the `.def` file. Second solution is simpler, you can just enable force output of the linker (it generates DLL/EXE even if it thinks there is some problem). Location of this setting: `Properties -> Linker -> General -> Force File Output = Enabled (/FORCE)`. Note that when this is enabled, you **MUST** watch for the linker warnings/errors in the console as there can possibly be some problems, you won't notice them and then the run will fail horribly.
5. If symbols containing `ActionId` and/or `StationId` are missing, it may be needed to manually add `vanetza/asn1/its/r2/ActionId.c` and/or `vanetza/asn1/its/r2/StationId.c` to the build.

**Please see folder `windows-build` in the Vanetza library root - there is a Python script that automates most of these changes.**

### Source code changes
In the source code, some changes must be made (those changes are done only one time). This is already done in this branch.

1. To `vanetza/asn1/support/GeneralizedTime.c` add following code:
	```
	#if	defined(_WIN32)
	// This is a second possibility
	//#undef GMTOFF
	//#define	GMTOFF(tm)	(_get_timezone)
	#undef	GMTOFF
	static long GMTOFF(struct tm a){
		struct tm *lt;
		time_t local_time, gmt_time;
		long zone;

		tzset();
		gmt_time = time (NULL);

		lt = gmtime(&gmt_time);

		local_time = mktime(lt);
		return (gmt_time - local_time);
	}
	#define timegm _mkgmtime
	#define HAVE_TIMEGM
	#endif
	```
	This code is supposedly not used by Vanetza (see [#128](https://github.com/riebl/vanetza/issues/128)) so the implementation should not matter.
2. This is needed for the dynamic library. Exported symbols' (`__declspec(dllexport)`) addresses cannot be used in a static initializer when imported in another DLL. Namely those structures:
	* __NativeInteger.h__ - asn_DEF_NativeInteger, asn_OP_NativeInteger
	* __OCTET_STRING.h__ - asn_DEF_OCTET_STRING, asn_OP_OCTET_STRING, asn_SPC_OCTET_STRING_specs
	* __constr_SEQUENCE.h__ - asn_OP_SEQUENCE
	* __constr_CHOICE.h__ - asn_OP_CHOICE
	* __NULL.h__ - asn_DEF_NULL
	* __constr_SEQUENCE_OF.h__ - asn_OP_SEQUENCE_OF
	* __NativeEnumerated.h__ - asn_OP_NativeEnumerated
	* __BIT_STRING.h__ - asn_OP_BIT_STRING, asn_SPC_BIT_STRING_specs, asn_DEF_BIT_STRING
	* __UTF8String.h__ - asn_OP_UTF8String
	* __INTEGER.h__ - asn_OP_INTEGER
	* __BOOLEAN.h__ - asn_DEF_BOOLEAN, asn_OP_BOOLEAN
	* __IA5String.h__ - asn_OP_IA5String, asn_DEF_IA5String
	* __VisibleString.h__ - asn_DEF_VisibleString
	* __UTF8String.h__  - asn_DEF_UTF8String
	* __NumericString.h__ - asn_DEF_NumericString, asn_OP_NumericString
	* __OPEN_TYPE.h__ - asn_OP_OPEN_TYPE
	
	So, those symbols must stay `extern` and the solution is in each project that needs those symbols, include directly the C files with definition of those symbols.

	```
	/* asn1_its: itsAsnIncludes.c */

	#include "OCTET_STRING.c"
	#include "BIT_STRING.c"
	#include "UTF8String.c"
	#include "constr_SEQUENCE_OF.c"
	#include "constr_SEQUENCE.c"
	#include "NativeInteger.c"
	#include "NativeEnumerated.c"
	#include "IA5String.c"
	#include "constr_CHOICE.c"
	#include "OPEN_TYPE.c"
	#include "NumericString.c"
	#include "INTEGER.c"
	#include "BOOLEAN.c"
	#include "VisibleString.c"
	#include "NumericString.h"
	#include "NULL.c"
	```

	```
	/* asn1_its_r2: itsAsnR2Includes.c */

	#include "OCTET_STRING.c"
	#include "BIT_STRING.c"
	#include "UTF8String.c"
	#include "constr_SEQUENCE_OF.c"
	#include "constr_SEQUENCE.c"
	#include "NativeInteger.c"
	#include "NativeEnumerated.c"
	#include "IA5String.c"
	#include "constr_CHOICE.c"
	#include "OPEN_TYPE.c"
	#include "NumericString.c"
	#include "INTEGER.c"
	#include "BOOLEAN.c"
	#include "VisibleString.c"
	#include "NumericString.h"
	#include "NULL.c"
	```

	```
	/* asn1_security: securityAsnIncludes.c */

	#include "OCTET_STRING.c"
	#include "constr_SEQUENCE.c"
	#include "constr_CHOICE.c"
	#include "NULL.c"
	#include "NativeEnumerated.c"
	#include "BIT_STRING.c"
	#include "UTF8String.c"
	#include "constr_SEQUENCE_OF.c"
	#include "NativeInteger.c"
	#include "INTEGER.c"
	#include "IA5String.c"
	#include "BOOLEAN.c"
	```

3. Same problem as in previous, but in C++ module. Change the following line in `vanetza/net/mac_address.hpp`:
	* `extern const MacAddress cBroadcastMacAddress;` ->
	
	```
	#undef NET_EXPORT
	#ifdef net_EXPORTS
	#define NET_EXPORT __declspec(dllexport)
	#else
	#define NET_EXPORT __declspec(dllimport)
	#endif
	NET_EXPORT extern const MacAddress cBroadcastMacAddress;
	```

4. If you see en error `_snprintf: is not a member of 'std'`, go to `asn1/support/asn_system.h` and change `#define snprintf _snprintf` to
	```
	#if _MSC_VER < 1900
	#  define snprintf _snprintf
	#endif
	```

	(see [here](https://stackoverflow.com/questions/51897245/visual-studio-macro-definition-of-snprintf-conflict)). This seems to appear since Boost 1.83.
5. Since integrating newer security, those changes are needed:
	```
	/* asn1_security/EtsTs103097Data.h */
	/* change extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_EtsiTs103097Data to */

	#ifdef asn1_security_EXPORTS
	#define ASN1_SECURITY_EXPORT __declspec(dllexport)
	#else
	#define ASN1_SECURITY_EXPORT __declspec(dllimport)
	#endif

	ASN1_SECURITY_EXPORT asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_EtsiTs103097Data;
	```

	```
	/* asn1_security/EtsiTs103097Certificate.h */
	/* change extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_EtsiTs103097Certificate; to */

	#ifdef asn1_security_EXPORTS
	#define ASN1_SECURITY_EXPORT __declspec(dllexport)
	#else
	#define ASN1_SECURITY_EXPORT __declspec(dllimport)
	#endif

	ASN1_SECURITY_EXPORT asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_EtsiTs103097Certificate;
	```

	```
	/* asn1_security/Certificate.h */
	/* change extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_Certificate; to */

	#ifdef asn1_security_EXPORTS
	#define ASN1_SECURITY_EXPORT __declspec(dllexport)
	#else
	#define ASN1_SECURITY_EXPORT __declspec(dllimport)
	#endif

	ASN1_SECURITY_EXPORT asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_Certificate;
	```

	```
	/* asn1_security/ToBeSignedData.h */
	/* change extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_ToBeSignedData; to */

	#ifdef asn1_security_EXPORTS
	#define ASN1_SECURITY_EXPORT __declspec(dllexport)
	#else
	#define ASN1_SECURITY_EXPORT __declspec(dllimport)
	#endif

	/* Implementation */
	ASN1_SECURITY_EXPORT asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_ToBeSignedData;
	```

	```
	/* asn1_security/SignerIdentifier.h */
	/* change extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_SignerIdentifier; to */

	#ifdef asn1_security_EXPORTS
	#define ASN1_SECURITY_EXPORT __declspec(dllexport)
	#else
	#define ASN1_SECURITY_EXPORT __declspec(dllimport)
	#endif

	/* Implementation */
	ASN1_SECURITY_EXPORT asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_SignerIdentifier;
	```

	```
	/* asn1_security/Signature.h */
	/* change extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_Signature; to */

	#ifdef asn1_security_EXPORTS
	#define ASN1_SECURITY_EXPORT __declspec(dllexport)
	#else
	#define ASN1_SECURITY_EXPORT __declspec(dllimport)
	#endif

	/* Implementation */
	ASN1_SECURITY_EXPORT asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_Signature;
	```

	```
	/* asn1_security/SequenceOfHashedId3.h */
	/* change extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_SequenceOfHashedId3; to */

	#ifdef asn1_security_EXPORTS
	#define ASN1_SECURITY_EXPORT __declspec(dllexport)
	#else
	#define ASN1_SECURITY_EXPORT __declspec(dllimport)
	#endif

	/* Implementation */
	ASN1_SECURITY_EXPORT asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_SequenceOfHashedId3;
	```

	```
	/* asn1_security/HashedId3.h */
	/* change extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_HashedId3; to */

	#ifdef asn1_security_EXPORTS
	#define ASN1_SECURITY_EXPORT __declspec(dllexport)
	#else
	#define ASN1_SECURITY_EXPORT __declspec(dllimport)
	#endif

	ASN1_SECURITY_EXPORT asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_HashedId3;
	```
6. Changes needed for C++/CLI wrapper:
	```
	/* asn1_its/CAM.h */
	/* change extern asn_TYPE_descriptor_t asn_DEF_CAM; to */
	#undef ASN1_ITS_EXPORT
	#ifdef asn1_its_EXPORTS
	#define ASN1_ITS_EXPORT extern __declspec(dllexport)
	#else
	#define ASN1_ITS_EXPORT extern __declspec(dllimport)
	#endif

	ASN1_ITS_EXPORT asn_TYPE_descriptor_t asn_DEF_CAM;
	```

	```
	/* asn1_its_r2/CAM.h */
	/* change extern asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_CAM; to */
	#undef ASN1_ITS_R2_EXPORT
	#ifdef asn1_its_r2_EXPORTS
	#define ASN1_ITS_R2_EXPORT extern __declspec(dllexport)
	#else
	#define ASN1_ITS_R2_EXPORT extern __declspec(dllimport)
	#endif

	ASN1_ITS_R2_EXPORT asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_CAM;
	```
7. `constr_CHOICE_xer.c`, `constr_CHOICE_jer.c`, `RELATIVE-OID_xer.c` - remove `__attribute__((unused))` to solve build error.

Now you can select the Release configuration and build the project.

### Other resources
* [Cross-platform timegm](https://stackoverflow.com/questions/16647819/timegm-cross-platform)
* [CMake multiple exports](https://gitlab.kitware.com/cmake/cmake/-/issues/23116)
* [Same as previous [stackoveflow]](https://stackoverflow.com/questions/52287888/linking-error-while-in-c-cli-project-while-wrapping-c-shared-library)
* [Alternative to DLLExport: Exporting from a DLL Using DEF Files](https://learn.microsoft.com/en-us/cpp/build/exporting-from-a-dll-using-def-files)
