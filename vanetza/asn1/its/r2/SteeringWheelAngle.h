/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/release2/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#ifndef	_Vanetza_ITS2_SteeringWheelAngle_H_
#define	_Vanetza_ITS2_SteeringWheelAngle_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SteeringWheelAngleValue.h"
#include "SteeringWheelAngleConfidence.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Vanetza_ITS2_SteeringWheelAngle */
typedef struct Vanetza_ITS2_SteeringWheelAngle {
	Vanetza_ITS2_SteeringWheelAngleValue_t	 steeringWheelAngleValue;
	Vanetza_ITS2_SteeringWheelAngleConfidence_t	 steeringWheelAngleConfidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_ITS2_SteeringWheelAngle_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_SteeringWheelAngle;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_ITS2_SteeringWheelAngle_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_ITS2_SteeringWheelAngle_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_ITS2_SteeringWheelAngle_H_ */
#include "asn_internal.h"