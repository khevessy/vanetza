/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "VAM-PDU-Descriptions"
 * 	found in "asn1/TS103300-3v221-VAM.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_VruAwareness_H_
#define	_VruAwareness_H_


#include "asn_application.h"

/* Including external dependencies */
#include "GenerationDeltaTime.h"
#include "VamParameters.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VruAwareness */
typedef struct VruAwareness {
	GenerationDeltaTime_t	 generationDeltaTime;
	VamParameters_t	 vamParameters;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VruAwareness_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VruAwareness;
extern asn_SEQUENCE_specifics_t asn_SPC_VruAwareness_specs_1;
extern asn_TYPE_member_t asn_MBR_VruAwareness_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _VruAwareness_H_ */
#include "asn_internal.h"
