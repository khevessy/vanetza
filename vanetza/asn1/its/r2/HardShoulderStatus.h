/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/release2/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#ifndef	_Vanetza_ITS2_HardShoulderStatus_H_
#define	_Vanetza_ITS2_HardShoulderStatus_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Vanetza_ITS2_HardShoulderStatus {
	Vanetza_ITS2_HardShoulderStatus_availableForStopping	= 0,
	Vanetza_ITS2_HardShoulderStatus_closed	= 1,
	Vanetza_ITS2_HardShoulderStatus_availableForDriving	= 2
} e_Vanetza_ITS2_HardShoulderStatus;

/* Vanetza_ITS2_HardShoulderStatus */
typedef long	 Vanetza_ITS2_HardShoulderStatus_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Vanetza_ITS2_HardShoulderStatus_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_HardShoulderStatus;
extern const asn_INTEGER_specifics_t asn_SPC_Vanetza_ITS2_HardShoulderStatus_specs_1;
asn_struct_free_f Vanetza_ITS2_HardShoulderStatus_free;
asn_struct_print_f Vanetza_ITS2_HardShoulderStatus_print;
asn_constr_check_f Vanetza_ITS2_HardShoulderStatus_constraint;
ber_type_decoder_f Vanetza_ITS2_HardShoulderStatus_decode_ber;
der_type_encoder_f Vanetza_ITS2_HardShoulderStatus_encode_der;
xer_type_decoder_f Vanetza_ITS2_HardShoulderStatus_decode_xer;
xer_type_encoder_f Vanetza_ITS2_HardShoulderStatus_encode_xer;
jer_type_encoder_f Vanetza_ITS2_HardShoulderStatus_encode_jer;
oer_type_decoder_f Vanetza_ITS2_HardShoulderStatus_decode_oer;
oer_type_encoder_f Vanetza_ITS2_HardShoulderStatus_encode_oer;
per_type_decoder_f Vanetza_ITS2_HardShoulderStatus_decode_uper;
per_type_encoder_f Vanetza_ITS2_HardShoulderStatus_encode_uper;
per_type_decoder_f Vanetza_ITS2_HardShoulderStatus_decode_aper;
per_type_encoder_f Vanetza_ITS2_HardShoulderStatus_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_ITS2_HardShoulderStatus_H_ */
#include "asn_internal.h"
