/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1AcaRaInterface"
 * 	found in "build.asn1/ieee/IEEE1609dot2dot1AcaRaInterface.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security2_ -R`
 */

#ifndef	_Vanetza_Security2_AcaResponse_H_
#define	_Vanetza_Security2_AcaResponse_H_


#include "asn_application.h"

/* Including external dependencies */
#include "AcaEeCertResponsePlainSpdu.h"
#include "AcaEeCertResponsePrivateSpdu.h"
#include "AcaEeCertResponseCubkSpdu.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Vanetza_Security2_AcaResponse_PR {
	Vanetza_Security2_AcaResponse_PR_NOTHING,	/* No components present */
	Vanetza_Security2_AcaResponse_PR_plain,
	Vanetza_Security2_AcaResponse_PR_private,
	Vanetza_Security2_AcaResponse_PR_cubk
	/* Extensions may appear below */
	
} Vanetza_Security2_AcaResponse_PR;

/* Vanetza_Security2_AcaResponse */
typedef struct Vanetza_Security2_AcaResponse {
	Vanetza_Security2_AcaResponse_PR present;
	union Vanetza_Security2_AcaResponse_u {
		Vanetza_Security2_AcaEeCertResponsePlainSpdu_t	 plain;
		Vanetza_Security2_AcaEeCertResponsePrivateSpdu_t	 Private;
		Vanetza_Security2_AcaEeCertResponseCubkSpdu_t	 cubk;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security2_AcaResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security2_AcaResponse;
extern asn_CHOICE_specifics_t asn_SPC_Vanetza_Security2_AcaResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_Security2_AcaResponse_1[3];
extern asn_per_constraints_t asn_PER_type_Vanetza_Security2_AcaResponse_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_Security2_AcaResponse_H_ */
#include "asn_internal.h"
