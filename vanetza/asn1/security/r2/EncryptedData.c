/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2"
 * 	found in "build.asn1/ieee/IEEE1609dot2.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security2_ -R`
 */

#include "EncryptedData.h"

asn_TYPE_member_t asn_MBR_Vanetza_Security2_EncryptedData_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_Security2_EncryptedData, recipients),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_Security2_SequenceOfRecipientInfo,
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
		"recipients"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_Security2_EncryptedData, ciphertext),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Vanetza_Security2_SymmetricCiphertext,
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
		"ciphertext"
		},
};
static const ber_tlv_tag_t asn_DEF_Vanetza_Security2_EncryptedData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Vanetza_Security2_EncryptedData_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* recipients */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ciphertext */
};
asn_SEQUENCE_specifics_t asn_SPC_Vanetza_Security2_EncryptedData_specs_1 = {
	sizeof(struct Vanetza_Security2_EncryptedData),
	offsetof(struct Vanetza_Security2_EncryptedData, _asn_ctx),
	asn_MAP_Vanetza_Security2_EncryptedData_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Vanetza_Security2_EncryptedData = {
	"EncryptedData",
	"EncryptedData",
	&asn_OP_SEQUENCE,
	asn_DEF_Vanetza_Security2_EncryptedData_tags_1,
	sizeof(asn_DEF_Vanetza_Security2_EncryptedData_tags_1)
		/sizeof(asn_DEF_Vanetza_Security2_EncryptedData_tags_1[0]), /* 1 */
	asn_DEF_Vanetza_Security2_EncryptedData_tags_1,	/* Same as above */
	sizeof(asn_DEF_Vanetza_Security2_EncryptedData_tags_1)
		/sizeof(asn_DEF_Vanetza_Security2_EncryptedData_tags_1[0]), /* 1 */
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
	asn_MBR_Vanetza_Security2_EncryptedData_1,
	2,	/* Elements count */
	&asn_SPC_Vanetza_Security2_EncryptedData_specs_1	/* Additional specs */
};

