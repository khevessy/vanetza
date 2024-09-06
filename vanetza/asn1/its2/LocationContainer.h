/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DENM-PDU-Description"
 * 	found in "asn1/TS103831v211-DENM.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_LocationContainer_H_
#define	_LocationContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Traces.h"
#include "RoadType.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Speed;
struct Wgs84Angle;

/* LocationContainer */
typedef struct LocationContainer {
	struct Speed	*eventSpeed;	/* OPTIONAL */
	struct Wgs84Angle	*eventPositionHeading;	/* OPTIONAL */
	Traces_t	 traces;
	RoadType_t	*roadType;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LocationContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocationContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_LocationContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_LocationContainer_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Speed.h"
#include "Wgs84Angle.h"

#endif	/* _LocationContainer_H_ */
#include "asn_internal.h"
