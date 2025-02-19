/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "VRU-Motorcyclist-Special-Container"
 * 	found in "asn1/release2/TS103300v221/motorcyclist-special-container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#include "MotorcylistSpecialContainer.h"

static asn_TYPE_member_t asn_MBR_Vanetza_ITS2_MotorcylistSpecialContainer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_ITS2_MotorcylistSpecialContainer, motorcyclist),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_ITS2_VruSubProfileMotorcyclist,
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
		"motorcyclist"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_ITS2_MotorcylistSpecialContainer, sizeClass),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_ITS2_VruSizeClass,
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
		"sizeClass"
		},
	{ ATF_POINTER, 5, offsetof(struct Vanetza_ITS2_MotorcylistSpecialContainer, rollAngle),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_ITS2_CartesianAngle,
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
		"rollAngle"
		},
	{ ATF_POINTER, 4, offsetof(struct Vanetza_ITS2_MotorcylistSpecialContainer, orientation),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_ITS2_Wgs84Angle,
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
		"orientation"
		},
	{ ATF_POINTER, 3, offsetof(struct Vanetza_ITS2_MotorcylistSpecialContainer, safeDistance),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_ITS2_SequenceOfSafeDistanceIndication,
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
		"safeDistance"
		},
	{ ATF_POINTER, 2, offsetof(struct Vanetza_ITS2_MotorcylistSpecialContainer, pathPrediction),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_ITS2_PathPredicted,
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
		"pathPrediction"
		},
	{ ATF_POINTER, 1, offsetof(struct Vanetza_ITS2_MotorcylistSpecialContainer, stabilityChangeIndication),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_ITS2_StabilityChangeIndication,
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
		"stabilityChangeIndication"
		},
};
static const int asn_MAP_Vanetza_ITS2_MotorcylistSpecialContainer_oms_1[] = { 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_Vanetza_ITS2_MotorcylistSpecialContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Vanetza_ITS2_MotorcylistSpecialContainer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* motorcyclist */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sizeClass */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rollAngle */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* orientation */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* safeDistance */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* pathPrediction */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* stabilityChangeIndication */
};
static asn_SEQUENCE_specifics_t asn_SPC_Vanetza_ITS2_MotorcylistSpecialContainer_specs_1 = {
	sizeof(struct Vanetza_ITS2_MotorcylistSpecialContainer),
	offsetof(struct Vanetza_ITS2_MotorcylistSpecialContainer, _asn_ctx),
	asn_MAP_Vanetza_ITS2_MotorcylistSpecialContainer_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_Vanetza_ITS2_MotorcylistSpecialContainer_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_MotorcylistSpecialContainer = {
	"MotorcylistSpecialContainer",
	"MotorcylistSpecialContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_Vanetza_ITS2_MotorcylistSpecialContainer_tags_1,
	sizeof(asn_DEF_Vanetza_ITS2_MotorcylistSpecialContainer_tags_1)
		/sizeof(asn_DEF_Vanetza_ITS2_MotorcylistSpecialContainer_tags_1[0]), /* 1 */
	asn_DEF_Vanetza_ITS2_MotorcylistSpecialContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_Vanetza_ITS2_MotorcylistSpecialContainer_tags_1)
		/sizeof(asn_DEF_Vanetza_ITS2_MotorcylistSpecialContainer_tags_1[0]), /* 1 */
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
	asn_MBR_Vanetza_ITS2_MotorcylistSpecialContainer_1,
	7,	/* Elements count */
	&asn_SPC_Vanetza_ITS2_MotorcylistSpecialContainer_specs_1	/* Additional specs */
};

