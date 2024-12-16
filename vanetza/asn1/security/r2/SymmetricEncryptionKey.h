/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2BaseTypes"
 * 	found in "build.asn1/ieee/IEEE1609dot2BaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security2_ -R`
 */

#ifndef	_Vanetza_Security2_SymmetricEncryptionKey_H_
#define	_Vanetza_Security2_SymmetricEncryptionKey_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Vanetza_Security2_SymmetricEncryptionKey_PR {
	Vanetza_Security2_SymmetricEncryptionKey_PR_NOTHING,	/* No components present */
	Vanetza_Security2_SymmetricEncryptionKey_PR_aes128Ccm,
	/* Extensions may appear below */
	Vanetza_Security2_SymmetricEncryptionKey_PR_sm4Ccm
} Vanetza_Security2_SymmetricEncryptionKey_PR;

/* Vanetza_Security2_SymmetricEncryptionKey */
typedef struct Vanetza_Security2_SymmetricEncryptionKey {
	Vanetza_Security2_SymmetricEncryptionKey_PR present;
	union Vanetza_Security2_SymmetricEncryptionKey_u {
		OCTET_STRING_t	 aes128Ccm;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		OCTET_STRING_t	 sm4Ccm;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security2_SymmetricEncryptionKey_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security2_SymmetricEncryptionKey;
extern asn_CHOICE_specifics_t asn_SPC_Vanetza_Security2_SymmetricEncryptionKey_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_Security2_SymmetricEncryptionKey_1[2];
extern asn_per_constraints_t asn_PER_type_Vanetza_Security2_SymmetricEncryptionKey_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_Security2_SymmetricEncryptionKey_H_ */
#include "asn_internal.h"
