/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/release2/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#ifndef	_Vanetza_ITS2_StationaryVehicleSubCauseCode_H_
#define	_Vanetza_ITS2_StationaryVehicleSubCauseCode_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Vanetza_ITS2_StationaryVehicleSubCauseCode {
	Vanetza_ITS2_StationaryVehicleSubCauseCode_unavailable	= 0,
	Vanetza_ITS2_StationaryVehicleSubCauseCode_humanProblem	= 1,
	Vanetza_ITS2_StationaryVehicleSubCauseCode_vehicleBreakdown	= 2,
	Vanetza_ITS2_StationaryVehicleSubCauseCode_postCrash	= 3,
	Vanetza_ITS2_StationaryVehicleSubCauseCode_publicTransportStop	= 4,
	Vanetza_ITS2_StationaryVehicleSubCauseCode_carryingDangerousGoods	= 5,
	Vanetza_ITS2_StationaryVehicleSubCauseCode_vehicleOnFire	= 6
} e_Vanetza_ITS2_StationaryVehicleSubCauseCode;

/* Vanetza_ITS2_StationaryVehicleSubCauseCode */
typedef long	 Vanetza_ITS2_StationaryVehicleSubCauseCode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Vanetza_ITS2_StationaryVehicleSubCauseCode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_StationaryVehicleSubCauseCode;
asn_struct_free_f Vanetza_ITS2_StationaryVehicleSubCauseCode_free;
asn_struct_print_f Vanetza_ITS2_StationaryVehicleSubCauseCode_print;
asn_constr_check_f Vanetza_ITS2_StationaryVehicleSubCauseCode_constraint;
ber_type_decoder_f Vanetza_ITS2_StationaryVehicleSubCauseCode_decode_ber;
der_type_encoder_f Vanetza_ITS2_StationaryVehicleSubCauseCode_encode_der;
xer_type_decoder_f Vanetza_ITS2_StationaryVehicleSubCauseCode_decode_xer;
xer_type_encoder_f Vanetza_ITS2_StationaryVehicleSubCauseCode_encode_xer;
jer_type_encoder_f Vanetza_ITS2_StationaryVehicleSubCauseCode_encode_jer;
oer_type_decoder_f Vanetza_ITS2_StationaryVehicleSubCauseCode_decode_oer;
oer_type_encoder_f Vanetza_ITS2_StationaryVehicleSubCauseCode_encode_oer;
per_type_decoder_f Vanetza_ITS2_StationaryVehicleSubCauseCode_decode_uper;
per_type_encoder_f Vanetza_ITS2_StationaryVehicleSubCauseCode_encode_uper;
per_type_decoder_f Vanetza_ITS2_StationaryVehicleSubCauseCode_decode_aper;
per_type_encoder_f Vanetza_ITS2_StationaryVehicleSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_ITS2_StationaryVehicleSubCauseCode_H_ */
#include "asn_internal.h"
