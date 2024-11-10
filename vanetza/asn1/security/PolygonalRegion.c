/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "asn1/IEEE1609dot2BaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security_ -R`
 */

#include "PolygonalRegion.h"

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_Vanetza_Security_PolygonalRegion_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(3..MAX)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_Vanetza_Security_PolygonalRegion_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  3,  0 }	/* (SIZE(3..MAX)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_Vanetza_Security_PolygonalRegion_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Vanetza_Security_TwoDLocation,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_Vanetza_Security_PolygonalRegion_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_Vanetza_Security_PolygonalRegion_specs_1 = {
	sizeof(struct Vanetza_Security_PolygonalRegion),
	offsetof(struct Vanetza_Security_PolygonalRegion, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_PolygonalRegion = {
	"PolygonalRegion",
	"PolygonalRegion",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_Vanetza_Security_PolygonalRegion_tags_1,
	sizeof(asn_DEF_Vanetza_Security_PolygonalRegion_tags_1)
		/sizeof(asn_DEF_Vanetza_Security_PolygonalRegion_tags_1[0]), /* 1 */
	asn_DEF_Vanetza_Security_PolygonalRegion_tags_1,	/* Same as above */
	sizeof(asn_DEF_Vanetza_Security_PolygonalRegion_tags_1)
		/sizeof(asn_DEF_Vanetza_Security_PolygonalRegion_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_Vanetza_Security_PolygonalRegion_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_Vanetza_Security_PolygonalRegion_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_Vanetza_Security_PolygonalRegion_1,
	1,	/* Single element */
	&asn_SPC_Vanetza_Security_PolygonalRegion_specs_1	/* Additional specs */
};

