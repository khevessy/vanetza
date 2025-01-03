/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/release2/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#ifndef	_Vanetza_ITS2_PathDeltaTimeChoice_H_
#define	_Vanetza_ITS2_PathDeltaTimeChoice_H_


#include "asn_application.h"

/* Including external dependencies */
#include "DeltaTimeTenthOfSecond.h"
#include "DeltaTimeTenSeconds.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Vanetza_ITS2_PathDeltaTimeChoice_PR {
	Vanetza_ITS2_PathDeltaTimeChoice_PR_NOTHING,	/* No components present */
	Vanetza_ITS2_PathDeltaTimeChoice_PR_deltaTimeHighPrecision,
	Vanetza_ITS2_PathDeltaTimeChoice_PR_deltaTimeBigRange
	/* Extensions may appear below */
	
} Vanetza_ITS2_PathDeltaTimeChoice_PR;

/* Vanetza_ITS2_PathDeltaTimeChoice */
typedef struct Vanetza_ITS2_PathDeltaTimeChoice {
	Vanetza_ITS2_PathDeltaTimeChoice_PR present;
	union Vanetza_ITS2_PathDeltaTimeChoice_u {
		Vanetza_ITS2_DeltaTimeTenthOfSecond_t	 deltaTimeHighPrecision;
		Vanetza_ITS2_DeltaTimeTenSeconds_t	 deltaTimeBigRange;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_ITS2_PathDeltaTimeChoice_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_PathDeltaTimeChoice;
extern asn_CHOICE_specifics_t asn_SPC_Vanetza_ITS2_PathDeltaTimeChoice_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_ITS2_PathDeltaTimeChoice_1[2];
extern asn_per_constraints_t asn_PER_type_Vanetza_ITS2_PathDeltaTimeChoice_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_ITS2_PathDeltaTimeChoice_H_ */
#include "asn_internal.h"
