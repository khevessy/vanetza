/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/release2/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#ifndef	_Vanetza_ITS2_ObjectDimension_H_
#define	_Vanetza_ITS2_ObjectDimension_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ObjectDimensionValue.h"
#include "ObjectDimensionConfidence.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Vanetza_ITS2_ObjectDimension */
typedef struct Vanetza_ITS2_ObjectDimension {
	Vanetza_ITS2_ObjectDimensionValue_t	 value;
	Vanetza_ITS2_ObjectDimensionConfidence_t	 confidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_ITS2_ObjectDimension_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_ObjectDimension;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_ITS2_ObjectDimension_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_ITS2_ObjectDimension_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_ITS2_ObjectDimension_H_ */
#include "asn_internal.h"
