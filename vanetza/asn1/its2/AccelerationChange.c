/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#include "AccelerationChange.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_AccelerationChange_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_AccelerationChange_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_AccelerationChange_value2enum_1[] = {
	{ 0,	10,	"accelerate" },
	{ 1,	10,	"decelerate" }
};
static const unsigned int asn_MAP_AccelerationChange_enum2value_1[] = {
	0,	/* accelerate(0) */
	1	/* decelerate(1) */
};
const asn_INTEGER_specifics_t asn_SPC_AccelerationChange_specs_1 = {
	asn_MAP_AccelerationChange_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_AccelerationChange_enum2value_1,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_AccelerationChange_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_AccelerationChange = {
	"AccelerationChange",
	"AccelerationChange",
	&asn_OP_NativeEnumerated,
	asn_DEF_AccelerationChange_tags_1,
	sizeof(asn_DEF_AccelerationChange_tags_1)
		/sizeof(asn_DEF_AccelerationChange_tags_1[0]), /* 1 */
	asn_DEF_AccelerationChange_tags_1,	/* Same as above */
	sizeof(asn_DEF_AccelerationChange_tags_1)
		/sizeof(asn_DEF_AccelerationChange_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_AccelerationChange_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_AccelerationChange_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_AccelerationChange_specs_1	/* Additional specs */
};

