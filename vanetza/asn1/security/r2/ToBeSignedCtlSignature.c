/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1CertManagement"
 * 	found in "build.asn1/ieee/IEEE1609dot2dot1CertManagement.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security2_ -R`
 */

#include "ToBeSignedCtlSignature.h"

asn_TYPE_member_t asn_MBR_Vanetza_Security2_ToBeSignedCtlSignature_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_Security2_ToBeSignedCtlSignature, ctlSeriesId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_Security2_CtlSeriesId,
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
		"ctlSeriesId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_Security2_ToBeSignedCtlSignature, ctlType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_Security2_Ieee1609dot2dot1MsctlType,
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
		"ctlType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_Security2_ToBeSignedCtlSignature, sequenceNumber),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_Security2_CtlSequenceNumber,
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
		"sequenceNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_Security2_ToBeSignedCtlSignature, tbsCtlHash),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_Security2_HashedId48,
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
		"tbsCtlHash"
		},
};
static const ber_tlv_tag_t asn_DEF_Vanetza_Security2_ToBeSignedCtlSignature_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Vanetza_Security2_ToBeSignedCtlSignature_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ctlSeriesId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ctlType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sequenceNumber */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* tbsCtlHash */
};
asn_SEQUENCE_specifics_t asn_SPC_Vanetza_Security2_ToBeSignedCtlSignature_specs_1 = {
	sizeof(struct Vanetza_Security2_ToBeSignedCtlSignature),
	offsetof(struct Vanetza_Security2_ToBeSignedCtlSignature, _asn_ctx),
	asn_MAP_Vanetza_Security2_ToBeSignedCtlSignature_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Vanetza_Security2_ToBeSignedCtlSignature = {
	"ToBeSignedCtlSignature",
	"ToBeSignedCtlSignature",
	&asn_OP_SEQUENCE,
	asn_DEF_Vanetza_Security2_ToBeSignedCtlSignature_tags_1,
	sizeof(asn_DEF_Vanetza_Security2_ToBeSignedCtlSignature_tags_1)
		/sizeof(asn_DEF_Vanetza_Security2_ToBeSignedCtlSignature_tags_1[0]), /* 1 */
	asn_DEF_Vanetza_Security2_ToBeSignedCtlSignature_tags_1,	/* Same as above */
	sizeof(asn_DEF_Vanetza_Security2_ToBeSignedCtlSignature_tags_1)
		/sizeof(asn_DEF_Vanetza_Security2_ToBeSignedCtlSignature_tags_1[0]), /* 1 */
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
	asn_MBR_Vanetza_Security2_ToBeSignedCtlSignature_1,
	4,	/* Elements count */
	&asn_SPC_Vanetza_Security2_ToBeSignedCtlSignature_specs_1	/* Additional specs */
};
