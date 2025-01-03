/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/release2/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#ifndef	_Vanetza_ITS2_SensorTypes_H_
#define	_Vanetza_ITS2_SensorTypes_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Vanetza_ITS2_SensorTypes {
	Vanetza_ITS2_SensorTypes_undefined	= 0,
	Vanetza_ITS2_SensorTypes_radar	= 1,
	Vanetza_ITS2_SensorTypes_lidar	= 2,
	Vanetza_ITS2_SensorTypes_monovideo	= 3,
	Vanetza_ITS2_SensorTypes_stereovision	= 4,
	Vanetza_ITS2_SensorTypes_nightvision	= 5,
	Vanetza_ITS2_SensorTypes_ultrasonic	= 6,
	Vanetza_ITS2_SensorTypes_pmd	= 7,
	Vanetza_ITS2_SensorTypes_inductionLoop	= 8,
	Vanetza_ITS2_SensorTypes_sphericalCamera	= 9,
	Vanetza_ITS2_SensorTypes_uwb	= 10,
	Vanetza_ITS2_SensorTypes_acoustic	= 11,
	Vanetza_ITS2_SensorTypes_localAggregation	= 12,
	Vanetza_ITS2_SensorTypes_itsAggregation	= 13
} e_Vanetza_ITS2_SensorTypes;

/* Vanetza_ITS2_SensorTypes */
typedef BIT_STRING_t	 Vanetza_ITS2_SensorTypes_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Vanetza_ITS2_SensorTypes_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_SensorTypes;
asn_struct_free_f Vanetza_ITS2_SensorTypes_free;
asn_struct_print_f Vanetza_ITS2_SensorTypes_print;
asn_constr_check_f Vanetza_ITS2_SensorTypes_constraint;
ber_type_decoder_f Vanetza_ITS2_SensorTypes_decode_ber;
der_type_encoder_f Vanetza_ITS2_SensorTypes_encode_der;
xer_type_decoder_f Vanetza_ITS2_SensorTypes_decode_xer;
xer_type_encoder_f Vanetza_ITS2_SensorTypes_encode_xer;
jer_type_encoder_f Vanetza_ITS2_SensorTypes_encode_jer;
oer_type_decoder_f Vanetza_ITS2_SensorTypes_decode_oer;
oer_type_encoder_f Vanetza_ITS2_SensorTypes_encode_oer;
per_type_decoder_f Vanetza_ITS2_SensorTypes_decode_uper;
per_type_encoder_f Vanetza_ITS2_SensorTypes_encode_uper;
per_type_decoder_f Vanetza_ITS2_SensorTypes_decode_aper;
per_type_encoder_f Vanetza_ITS2_SensorTypes_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_ITS2_SensorTypes_H_ */
#include "asn_internal.h"
