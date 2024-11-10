/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/release2/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#include "ObjectFace.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_Vanetza_ITS2_ObjectFace_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_Vanetza_ITS2_ObjectFace_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_Vanetza_ITS2_ObjectFace_value2enum_1[] = {
	{ 0,	5,	"front" },
	{ 1,	13,	"sideLeftFront" },
	{ 2,	12,	"sideLeftBack" },
	{ 3,	14,	"sideRightFront" },
	{ 4,	13,	"sideRightBack" },
	{ 5,	4,	"back" }
};
static const unsigned int asn_MAP_Vanetza_ITS2_ObjectFace_enum2value_1[] = {
	5,	/* back(5) */
	0,	/* front(0) */
	2,	/* sideLeftBack(2) */
	1,	/* sideLeftFront(1) */
	4,	/* sideRightBack(4) */
	3	/* sideRightFront(3) */
};
const asn_INTEGER_specifics_t asn_SPC_Vanetza_ITS2_ObjectFace_specs_1 = {
	asn_MAP_Vanetza_ITS2_ObjectFace_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_Vanetza_ITS2_ObjectFace_enum2value_1,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_Vanetza_ITS2_ObjectFace_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_ObjectFace = {
	"ObjectFace",
	"ObjectFace",
	&asn_OP_NativeEnumerated,
	asn_DEF_Vanetza_ITS2_ObjectFace_tags_1,
	sizeof(asn_DEF_Vanetza_ITS2_ObjectFace_tags_1)
		/sizeof(asn_DEF_Vanetza_ITS2_ObjectFace_tags_1[0]), /* 1 */
	asn_DEF_Vanetza_ITS2_ObjectFace_tags_1,	/* Same as above */
	sizeof(asn_DEF_Vanetza_ITS2_ObjectFace_tags_1)
		/sizeof(asn_DEF_Vanetza_ITS2_ObjectFace_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_Vanetza_ITS2_ObjectFace_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_Vanetza_ITS2_ObjectFace_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_Vanetza_ITS2_ObjectFace_specs_1	/* Additional specs */
};

