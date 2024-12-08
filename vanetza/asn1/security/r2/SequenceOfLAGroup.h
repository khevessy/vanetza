/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2CrlBaseTypes"
 * 	found in "build.asn1/ieee/IEEE1609dot2crlBaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security2_ -R`
 */

#ifndef	_Vanetza_Security2_SequenceOfLAGroup_H_
#define	_Vanetza_Security2_SequenceOfLAGroup_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Vanetza_Security2_LAGroup;

/* Vanetza_Security2_SequenceOfLAGroup */
typedef struct Vanetza_Security2_SequenceOfLAGroup {
	A_SEQUENCE_OF(struct Vanetza_Security2_LAGroup) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security2_SequenceOfLAGroup_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security2_SequenceOfLAGroup;
extern asn_SET_OF_specifics_t asn_SPC_Vanetza_Security2_SequenceOfLAGroup_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_Security2_SequenceOfLAGroup_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LAGroup.h"

#endif	/* _Vanetza_Security2_SequenceOfLAGroup_H_ */
#include "asn_internal.h"
