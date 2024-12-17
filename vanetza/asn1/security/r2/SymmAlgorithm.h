/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2BaseTypes"
 * 	found in "build.asn1/ieee/IEEE1609dot2BaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security2_ -R`
 */

#ifndef	_Vanetza_Security2_SymmAlgorithm_H_
#define	_Vanetza_Security2_SymmAlgorithm_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Vanetza_Security2_SymmAlgorithm {
	Vanetza_Security2_SymmAlgorithm_aes128Ccm	= 0,
	/*
	 * Enumeration is extensible
	 */
	Vanetza_Security2_SymmAlgorithm_sm4Ccm	= 1
} e_Vanetza_Security2_SymmAlgorithm;

/* Vanetza_Security2_SymmAlgorithm */
typedef long	 Vanetza_Security2_SymmAlgorithm_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Vanetza_Security2_SymmAlgorithm_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security2_SymmAlgorithm;
extern const asn_INTEGER_specifics_t asn_SPC_Vanetza_Security2_SymmAlgorithm_specs_1;
asn_struct_free_f Vanetza_Security2_SymmAlgorithm_free;
asn_struct_print_f Vanetza_Security2_SymmAlgorithm_print;
asn_constr_check_f Vanetza_Security2_SymmAlgorithm_constraint;
ber_type_decoder_f Vanetza_Security2_SymmAlgorithm_decode_ber;
der_type_encoder_f Vanetza_Security2_SymmAlgorithm_encode_der;
xer_type_decoder_f Vanetza_Security2_SymmAlgorithm_decode_xer;
xer_type_encoder_f Vanetza_Security2_SymmAlgorithm_encode_xer;
jer_type_encoder_f Vanetza_Security2_SymmAlgorithm_encode_jer;
oer_type_decoder_f Vanetza_Security2_SymmAlgorithm_decode_oer;
oer_type_encoder_f Vanetza_Security2_SymmAlgorithm_encode_oer;
per_type_decoder_f Vanetza_Security2_SymmAlgorithm_decode_uper;
per_type_encoder_f Vanetza_Security2_SymmAlgorithm_encode_uper;
per_type_decoder_f Vanetza_Security2_SymmAlgorithm_decode_aper;
per_type_encoder_f Vanetza_Security2_SymmAlgorithm_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_Security2_SymmAlgorithm_H_ */
#include "asn_internal.h"
