/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2BaseTypes"
 * 	found in "build.asn1/ieee/IEEE1609dot2BaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security2_ -R`
 */

#ifndef	_Vanetza_Security2_OneEightyDegreeInt_H_
#define	_Vanetza_Security2_OneEightyDegreeInt_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Vanetza_Security2_OneEightyDegreeInt {
	Vanetza_Security2_OneEightyDegreeInt_min	= -1799999999,
	Vanetza_Security2_OneEightyDegreeInt_max	= 1800000000,
	Vanetza_Security2_OneEightyDegreeInt_unknown	= 1800000001
} e_Vanetza_Security2_OneEightyDegreeInt;

/* Vanetza_Security2_OneEightyDegreeInt */
typedef long	 Vanetza_Security2_OneEightyDegreeInt_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Vanetza_Security2_OneEightyDegreeInt_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security2_OneEightyDegreeInt;
asn_struct_free_f Vanetza_Security2_OneEightyDegreeInt_free;
asn_struct_print_f Vanetza_Security2_OneEightyDegreeInt_print;
asn_constr_check_f Vanetza_Security2_OneEightyDegreeInt_constraint;
ber_type_decoder_f Vanetza_Security2_OneEightyDegreeInt_decode_ber;
der_type_encoder_f Vanetza_Security2_OneEightyDegreeInt_encode_der;
xer_type_decoder_f Vanetza_Security2_OneEightyDegreeInt_decode_xer;
xer_type_encoder_f Vanetza_Security2_OneEightyDegreeInt_encode_xer;
jer_type_encoder_f Vanetza_Security2_OneEightyDegreeInt_encode_jer;
oer_type_decoder_f Vanetza_Security2_OneEightyDegreeInt_decode_oer;
oer_type_encoder_f Vanetza_Security2_OneEightyDegreeInt_encode_oer;
per_type_decoder_f Vanetza_Security2_OneEightyDegreeInt_decode_uper;
per_type_encoder_f Vanetza_Security2_OneEightyDegreeInt_encode_uper;
per_type_decoder_f Vanetza_Security2_OneEightyDegreeInt_decode_aper;
per_type_encoder_f Vanetza_Security2_OneEightyDegreeInt_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_Security2_OneEightyDegreeInt_H_ */
#include "asn_internal.h"
