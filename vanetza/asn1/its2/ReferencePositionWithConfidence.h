/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_ReferencePositionWithConfidence_H_
#define	_ReferencePositionWithConfidence_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Latitude.h"
#include "Longitude.h"
#include "PositionConfidenceEllipse.h"
#include "Altitude.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ReferencePositionWithConfidence */
typedef struct ReferencePositionWithConfidence {
	Latitude_t	 latitude;
	Longitude_t	 longitude;
	PositionConfidenceEllipse_t	 positionConfidenceEllipse;
	Altitude_t	 altitude;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReferencePositionWithConfidence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReferencePositionWithConfidence;
extern asn_SEQUENCE_specifics_t asn_SPC_ReferencePositionWithConfidence_specs_1;
extern asn_TYPE_member_t asn_MBR_ReferencePositionWithConfidence_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _ReferencePositionWithConfidence_H_ */
#include "asn_internal.h"