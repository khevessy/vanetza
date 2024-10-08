/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "asn1/IEEE1609dot2BaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security_ -R`
 */

#ifndef	_Vanetza_Security_ThreeDLocation_H_
#define	_Vanetza_Security_ThreeDLocation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Latitude.h"
#include "Longitude.h"
#include "Elevation.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Vanetza_Security_ThreeDLocation */
typedef struct Vanetza_Security_ThreeDLocation {
	Vanetza_Security_Latitude_t	 latitude;
	Vanetza_Security_Longitude_t	 longitude;
	Vanetza_Security_Elevation_t	 elevation;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security_ThreeDLocation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_ThreeDLocation;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_Security_ThreeDLocation_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_Security_ThreeDLocation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_Security_ThreeDLocation_H_ */
#include "asn_internal.h"
