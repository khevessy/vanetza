/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "build.asn1/iso/ISO14906-0-6.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#include "StationTypeIso.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_StationTypeIso_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_StationTypeIso_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_StationTypeIso_value2enum_1[] = {
	{ 0,	11,	"unspecified" },
	{ 1,	22,	"closedEntryWithPayment" },
	{ 2,	25,	"closedEntryWithoutPayment" },
	{ 3,	13,	"closedTransit" },
	{ 4,	10,	"closedExit" },
	{ 5,	12,	"closedCredit" },
	{ 6,	5,	"mixed" },
	{ 7,	7,	"passage" },
	{ 8,	10,	"checkpoint" },
	{ 9,	6,	"reload" },
	{ 10,	24,	"reservedForFutureCENUse1" },
	{ 11,	24,	"reservedForFutureCENUse2" },
	{ 12,	24,	"reservedForFutureCENUse3" },
	{ 13,	24,	"reservedForFutureCENUse4" },
	{ 14,	11,	"privateUse5" },
	{ 15,	11,	"privateUse6" }
};
static const unsigned int asn_MAP_StationTypeIso_enum2value_1[] = {
	8,	/* checkpoint(8) */
	5,	/* closedCredit(5) */
	1,	/* closedEntryWithPayment(1) */
	2,	/* closedEntryWithoutPayment(2) */
	4,	/* closedExit(4) */
	3,	/* closedTransit(3) */
	6,	/* mixed(6) */
	7,	/* passage(7) */
	14,	/* privateUse5(14) */
	15,	/* privateUse6(15) */
	9,	/* reload(9) */
	10,	/* reservedForFutureCENUse1(10) */
	11,	/* reservedForFutureCENUse2(11) */
	12,	/* reservedForFutureCENUse3(12) */
	13,	/* reservedForFutureCENUse4(13) */
	0	/* unspecified(0) */
};
const asn_INTEGER_specifics_t asn_SPC_StationTypeIso_specs_1 = {
	asn_MAP_StationTypeIso_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_StationTypeIso_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_StationTypeIso_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_StationTypeIso = {
	"StationTypeIso",
	"StationTypeIso",
	&asn_OP_NativeEnumerated,
	asn_DEF_StationTypeIso_tags_1,
	sizeof(asn_DEF_StationTypeIso_tags_1)
		/sizeof(asn_DEF_StationTypeIso_tags_1[0]), /* 1 */
	asn_DEF_StationTypeIso_tags_1,	/* Same as above */
	sizeof(asn_DEF_StationTypeIso_tags_1)
		/sizeof(asn_DEF_StationTypeIso_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_StationTypeIso_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_StationTypeIso_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_StationTypeIso_specs_1	/* Additional specs */
};

