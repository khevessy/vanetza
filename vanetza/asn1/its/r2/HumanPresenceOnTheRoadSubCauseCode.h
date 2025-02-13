/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/release2/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#ifndef	_Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_H_
#define	_Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode {
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_unavailable	= 0,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_childrenOnRoadway	= 1,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_cyclistOnRoadway	= 2,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_motorcyclistOnRoadway	= 3,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_pedestrian	= 4,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_ordinary_pedestrian	= 5,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_road_worker	= 6,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_first_responder	= 7,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_lightVruVehicle	= 8,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_bicyclist	= 9,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_wheelchair_user	= 10,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_horse_and_rider	= 11,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_rollerskater	= 12,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_e_scooter	= 13,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_personal_transporter	= 14,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_pedelec	= 15,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_speed_pedelec	= 16,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_ptw	= 17,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_moped	= 18,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_motorcycle	= 19,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_motorcycle_and_sidecar_right	= 20,
	Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_motorcycle_and_sidecar_left	= 21
} e_Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode;

/* Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode */
typedef long	 Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode;
asn_struct_free_f Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_free;
asn_struct_print_f Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_print;
asn_constr_check_f Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_constraint;
ber_type_decoder_f Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_decode_ber;
der_type_encoder_f Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_encode_der;
xer_type_decoder_f Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_decode_xer;
xer_type_encoder_f Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_encode_xer;
jer_type_encoder_f Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_encode_jer;
oer_type_decoder_f Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_decode_oer;
oer_type_encoder_f Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_encode_oer;
per_type_decoder_f Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_decode_uper;
per_type_encoder_f Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_encode_uper;
per_type_decoder_f Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_decode_aper;
per_type_encoder_f Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_ITS2_HumanPresenceOnTheRoadSubCauseCode_H_ */
#include "asn_internal.h"
