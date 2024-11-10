/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "asn1/release2/TS103324v211/CPM-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#ifndef	_Vanetza_ITS2_MessageRateRange_H_
#define	_Vanetza_ITS2_MessageRateRange_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MessageRateHz.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Vanetza_ITS2_MessageRateRange */
typedef struct Vanetza_ITS2_MessageRateRange {
	Vanetza_ITS2_MessageRateHz_t	 messageRateMin;
	Vanetza_ITS2_MessageRateHz_t	 messageRateMax;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_ITS2_MessageRateRange_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_MessageRateRange;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_ITS2_MessageRateRange_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_ITS2_MessageRateRange_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_ITS2_MessageRateRange_H_ */
#include "asn_internal.h"
