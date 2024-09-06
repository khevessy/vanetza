/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_VruMovementControl_H_
#define	_VruMovementControl_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VruMovementControl {
	VruMovementControl_unavailable	= 0,
	VruMovementControl_braking	= 1,
	VruMovementControl_hardBraking	= 2,
	VruMovementControl_stopPedaling	= 3,
	VruMovementControl_brakingAndStopPedaling	= 4,
	VruMovementControl_hardBrakingAndStopPedaling	= 5,
	VruMovementControl_noReaction	= 6
} e_VruMovementControl;

/* VruMovementControl */
typedef long	 VruMovementControl_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_VruMovementControl_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_VruMovementControl;
asn_struct_free_f VruMovementControl_free;
asn_struct_print_f VruMovementControl_print;
asn_constr_check_f VruMovementControl_constraint;
ber_type_decoder_f VruMovementControl_decode_ber;
der_type_encoder_f VruMovementControl_encode_der;
xer_type_decoder_f VruMovementControl_decode_xer;
xer_type_encoder_f VruMovementControl_encode_xer;
jer_type_encoder_f VruMovementControl_encode_jer;
oer_type_decoder_f VruMovementControl_decode_oer;
oer_type_encoder_f VruMovementControl_encode_oer;
per_type_decoder_f VruMovementControl_decode_uper;
per_type_encoder_f VruMovementControl_encode_uper;
per_type_decoder_f VruMovementControl_decode_aper;
per_type_encoder_f VruMovementControl_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _VruMovementControl_H_ */
#include "asn_internal.h"
