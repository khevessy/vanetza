/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "asn1/release2/TS103324v211/CPM-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#ifndef	_Vanetza_ITS2_CPM_PDU_Descriptions_ManagementContainer_H_
#define	_Vanetza_ITS2_CPM_PDU_Descriptions_ManagementContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "TimestampIts.h"
#include "ReferencePosition.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Vanetza_ITS2_MessageSegmentationInfo;
struct Vanetza_ITS2_MessageRateRange;

/* Vanetza_ITS2_CPM-PDU-Descriptions_ManagementContainer */
typedef struct Vanetza_ITS2_CPM_PDU_Descriptions_ManagementContainer {
	Vanetza_ITS2_TimestampIts_t	 referenceTime;
	Vanetza_ITS2_ReferencePosition_t	 referencePosition;
	struct Vanetza_ITS2_MessageSegmentationInfo	*segmentationInfo;	/* OPTIONAL */
	struct Vanetza_ITS2_MessageRateRange	*messageRateRange;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_ITS2_CPM_PDU_Descriptions_ManagementContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_CPM_PDU_Descriptions_ManagementContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_ITS2_CPM_PDU_Descriptions_ManagementContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_ITS2_CPM_PDU_Descriptions_ManagementContainer_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MessageSegmentationInfo.h"
#include "MessageRateRange.h"

#endif	/* _Vanetza_ITS2_CPM_PDU_Descriptions_ManagementContainer_H_ */
#include "asn_internal.h"
