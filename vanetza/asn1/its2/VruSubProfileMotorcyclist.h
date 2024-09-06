/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_VruSubProfileMotorcyclist_H_
#define	_VruSubProfileMotorcyclist_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VruSubProfileMotorcyclist {
	VruSubProfileMotorcyclist_unavailable	= 0,
	VruSubProfileMotorcyclist_moped	= 1,
	VruSubProfileMotorcyclist_motorcycle	= 2,
	VruSubProfileMotorcyclist_motorcycle_and_sidecar_right	= 3,
	VruSubProfileMotorcyclist_motorcycle_and_sidecar_left	= 4
} e_VruSubProfileMotorcyclist;

/* VruSubProfileMotorcyclist */
typedef long	 VruSubProfileMotorcyclist_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_VruSubProfileMotorcyclist_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_VruSubProfileMotorcyclist;
asn_struct_free_f VruSubProfileMotorcyclist_free;
asn_struct_print_f VruSubProfileMotorcyclist_print;
asn_constr_check_f VruSubProfileMotorcyclist_constraint;
ber_type_decoder_f VruSubProfileMotorcyclist_decode_ber;
der_type_encoder_f VruSubProfileMotorcyclist_encode_der;
xer_type_decoder_f VruSubProfileMotorcyclist_decode_xer;
xer_type_encoder_f VruSubProfileMotorcyclist_encode_xer;
jer_type_encoder_f VruSubProfileMotorcyclist_encode_jer;
oer_type_decoder_f VruSubProfileMotorcyclist_decode_oer;
oer_type_encoder_f VruSubProfileMotorcyclist_encode_oer;
per_type_decoder_f VruSubProfileMotorcyclist_decode_uper;
per_type_encoder_f VruSubProfileMotorcyclist_encode_uper;
per_type_decoder_f VruSubProfileMotorcyclist_decode_aper;
per_type_encoder_f VruSubProfileMotorcyclist_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _VruSubProfileMotorcyclist_H_ */
#include "asn_internal.h"
