/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "asn1/IEEE1609dot2BaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security_ -R`
 */

#ifndef	_Vanetza_Security_HashedId3_H_
#define	_Vanetza_Security_HashedId3_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Vanetza_Security_HashedId3 */
typedef OCTET_STRING_t	 Vanetza_Security_HashedId3_t;

/* asn1_security/HashedId3.h */
/* change extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_HashedId3; to */
#ifdef asn1_security_EXPORTS
#define ASN1_SECURITY_EXPORT __declspec(dllexport)
#else
#define ASN1_SECURITY_EXPORT __declspec(dllimport)
#endif
ASN1_SECURITY_EXPORT asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_HashedId3;
/* Implementation */
extern asn_per_constraints_t asn_PER_type_Vanetza_Security_HashedId3_constr_1;
//extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_HashedId3;
asn_struct_free_f Vanetza_Security_HashedId3_free;
asn_struct_print_f Vanetza_Security_HashedId3_print;
asn_constr_check_f Vanetza_Security_HashedId3_constraint;
ber_type_decoder_f Vanetza_Security_HashedId3_decode_ber;
der_type_encoder_f Vanetza_Security_HashedId3_encode_der;
xer_type_decoder_f Vanetza_Security_HashedId3_decode_xer;
xer_type_encoder_f Vanetza_Security_HashedId3_encode_xer;
jer_type_encoder_f Vanetza_Security_HashedId3_encode_jer;
oer_type_decoder_f Vanetza_Security_HashedId3_decode_oer;
oer_type_encoder_f Vanetza_Security_HashedId3_encode_oer;
per_type_decoder_f Vanetza_Security_HashedId3_decode_uper;
per_type_encoder_f Vanetza_Security_HashedId3_encode_uper;
per_type_decoder_f Vanetza_Security_HashedId3_decode_aper;
per_type_encoder_f Vanetza_Security_HashedId3_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_Security_HashedId3_H_ */
#include "asn_internal.h"
