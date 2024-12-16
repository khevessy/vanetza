/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1Protocol"
 * 	found in "build.asn1/ieee/IEEE1609dot2dot1Protocol.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security2_ -R`
 */

#ifndef	_Vanetza_Security2_AcpcSsp_H_
#define	_Vanetza_Security2_AcpcSsp_H_


#include "asn_application.h"

/* Including external dependencies */
#include "CamSsp.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Vanetza_Security2_AcpcSsp_PR {
	Vanetza_Security2_AcpcSsp_PR_NOTHING,	/* No components present */
	Vanetza_Security2_AcpcSsp_PR_cam
	/* Extensions may appear below */
	
} Vanetza_Security2_AcpcSsp_PR;

/* Vanetza_Security2_AcpcSsp */
typedef struct Vanetza_Security2_AcpcSsp {
	Vanetza_Security2_AcpcSsp_PR present;
	union Vanetza_Security2_AcpcSsp_u {
		Vanetza_Security2_CamSsp_t	 cam;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security2_AcpcSsp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security2_AcpcSsp;

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_Security2_AcpcSsp_H_ */
#include "asn_internal.h"
