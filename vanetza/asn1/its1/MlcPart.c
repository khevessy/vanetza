/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "build.asn1/iso/ISO19321.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#include "MlcPart.h"

asn_TYPE_member_t asn_MBR_MlcPart_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MlcPart, zoneId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Zid,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"zoneId"
		},
	{ ATF_POINTER, 1, offsetof(struct MlcPart, laneIds),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneIds,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"laneIds"
		},
};
static const int asn_MAP_MlcPart_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_MlcPart_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MlcPart_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* zoneId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* laneIds */
};
asn_SEQUENCE_specifics_t asn_SPC_MlcPart_specs_1 = {
	sizeof(struct MlcPart),
	offsetof(struct MlcPart, _asn_ctx),
	asn_MAP_MlcPart_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MlcPart_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MlcPart = {
	"MlcPart",
	"MlcPart",
	&asn_OP_SEQUENCE,
	asn_DEF_MlcPart_tags_1,
	sizeof(asn_DEF_MlcPart_tags_1)
		/sizeof(asn_DEF_MlcPart_tags_1[0]), /* 1 */
	asn_DEF_MlcPart_tags_1,	/* Same as above */
	sizeof(asn_DEF_MlcPart_tags_1)
		/sizeof(asn_DEF_MlcPart_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_MlcPart_1,
	2,	/* Elements count */
	&asn_SPC_MlcPart_specs_1	/* Additional specs */
};

