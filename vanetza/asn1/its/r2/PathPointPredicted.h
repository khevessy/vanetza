/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/release2/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#ifndef	_Vanetza_ITS2_PathPointPredicted_H_
#define	_Vanetza_ITS2_PathPointPredicted_H_


#include "asn_application.h"

/* Including external dependencies */
#include "DeltaLatitude.h"
#include "DeltaLongitude.h"
#include "DeltaAltitude.h"
#include "AltitudeConfidence.h"
#include "StandardLength9b.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Vanetza_ITS2_PosConfidenceEllipse;
struct Vanetza_ITS2_PathDeltaTimeChoice;

/* Vanetza_ITS2_PathPointPredicted */
typedef struct Vanetza_ITS2_PathPointPredicted {
	Vanetza_ITS2_DeltaLatitude_t	 deltaLatitude;
	Vanetza_ITS2_DeltaLongitude_t	 deltaLongitude;
	struct Vanetza_ITS2_PosConfidenceEllipse	*horizontalPositionConfidence;	/* OPTIONAL */
	Vanetza_ITS2_DeltaAltitude_t	*deltaAltitude;	/* DEFAULT 12800 */
	Vanetza_ITS2_AltitudeConfidence_t	*altitudeConfidence;	/* DEFAULT 15 */
	struct Vanetza_ITS2_PathDeltaTimeChoice	*pathDeltaTime;	/* OPTIONAL */
	Vanetza_ITS2_StandardLength9b_t	*symmetricAreaOffset;	/* OPTIONAL */
	Vanetza_ITS2_StandardLength9b_t	*asymmetricAreaOffset;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_ITS2_PathPointPredicted_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_PathPointPredicted;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_ITS2_PathPointPredicted_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_ITS2_PathPointPredicted_1[8];
extern asn_per_constraints_t asn_PER_type_Vanetza_ITS2_PathPointPredicted_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PosConfidenceEllipse.h"
#include "PathDeltaTimeChoice.h"

#endif	/* _Vanetza_ITS2_PathPointPredicted_H_ */
#include "asn_internal.h"
