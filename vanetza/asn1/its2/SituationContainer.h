/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DENM-PDU-Description"
 * 	found in "asn1/TS103831v211-DENM.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_SituationContainer_H_
#define	_SituationContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "InformationQuality.h"
#include "CauseCodeV2.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CauseCodeV2;
struct EventZone;

/* SituationContainer */
typedef struct SituationContainer {
	InformationQuality_t	 informationQuality;
	CauseCodeV2_t	 eventType;
	struct CauseCodeV2	*linkedCause;	/* OPTIONAL */
	struct EventZone	*eventZone;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SituationContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SituationContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_SituationContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_SituationContainer_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CauseCodeV2.h"
#include "EventZone.h"

#endif	/* _SituationContainer_H_ */
#include "asn_internal.h"
