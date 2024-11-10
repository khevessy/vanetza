/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/release2/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#include "EventPoint.h"

asn_TYPE_member_t asn_MBR_Vanetza_ITS2_EventPoint_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_ITS2_EventPoint, eventPosition),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_ITS2_DeltaReferencePosition,
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
		"eventPosition"
		},
	{ ATF_POINTER, 1, offsetof(struct Vanetza_ITS2_EventPoint, eventDeltaTime),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_ITS2_PathDeltaTime,
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
		"eventDeltaTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_ITS2_EventPoint, informationQuality),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_ITS2_InformationQuality,
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
		"informationQuality"
		},
};
static const int asn_MAP_Vanetza_ITS2_EventPoint_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_Vanetza_ITS2_EventPoint_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Vanetza_ITS2_EventPoint_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventPosition */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eventDeltaTime */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* informationQuality */
};
asn_SEQUENCE_specifics_t asn_SPC_Vanetza_ITS2_EventPoint_specs_1 = {
	sizeof(struct Vanetza_ITS2_EventPoint),
	offsetof(struct Vanetza_ITS2_EventPoint, _asn_ctx),
	asn_MAP_Vanetza_ITS2_EventPoint_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_Vanetza_ITS2_EventPoint_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_EventPoint = {
	"EventPoint",
	"EventPoint",
	&asn_OP_SEQUENCE,
	asn_DEF_Vanetza_ITS2_EventPoint_tags_1,
	sizeof(asn_DEF_Vanetza_ITS2_EventPoint_tags_1)
		/sizeof(asn_DEF_Vanetza_ITS2_EventPoint_tags_1[0]), /* 1 */
	asn_DEF_Vanetza_ITS2_EventPoint_tags_1,	/* Same as above */
	sizeof(asn_DEF_Vanetza_ITS2_EventPoint_tags_1)
		/sizeof(asn_DEF_Vanetza_ITS2_EventPoint_tags_1[0]), /* 1 */
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
	asn_MBR_Vanetza_ITS2_EventPoint_1,
	3,	/* Elements count */
	&asn_SPC_Vanetza_ITS2_EventPoint_specs_1	/* Additional specs */
};

