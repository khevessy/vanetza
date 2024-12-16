/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EtsiTs102941TrustLists"
 * 	found in "asn1/release2/TS102941v221/TrustLists.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security2_ -R`
 */

#ifndef	_Vanetza_Security2_CtlDelete_H_
#define	_Vanetza_Security2_CtlDelete_H_


#include "asn_application.h"

/* Including external dependencies */
#include "HashedId8.h"
#include "DcDelete.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Vanetza_Security2_CtlDelete_PR {
	Vanetza_Security2_CtlDelete_PR_NOTHING,	/* No components present */
	Vanetza_Security2_CtlDelete_PR_cert,
	Vanetza_Security2_CtlDelete_PR_dc
	/* Extensions may appear below */
	
} Vanetza_Security2_CtlDelete_PR;

/* Vanetza_Security2_CtlDelete */
typedef struct Vanetza_Security2_CtlDelete {
	Vanetza_Security2_CtlDelete_PR present;
	union Vanetza_Security2_CtlDelete_u {
		Vanetza_Security2_HashedId8_t	 cert;
		Vanetza_Security2_DcDelete_t	 dc;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security2_CtlDelete_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security2_CtlDelete;
extern asn_CHOICE_specifics_t asn_SPC_Vanetza_Security2_CtlDelete_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_Security2_CtlDelete_1[2];
extern asn_per_constraints_t asn_PER_type_Vanetza_Security2_CtlDelete_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_Security2_CtlDelete_H_ */
#include "asn_internal.h"
