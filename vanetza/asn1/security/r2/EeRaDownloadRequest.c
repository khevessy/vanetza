/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1EeRaInterface"
 * 	found in "build.asn1/ieee/IEEE1609dot2dot1EeRaInterface.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security2_ -R`
 */

#include "EeRaDownloadRequest.h"

static int
memb_Vanetza_Security2_filename_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const UTF8String_t *st = (const UTF8String_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = UTF8String_length(st);
	if((ssize_t)size < 0) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: UTF-8: broken encoding (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if((size <= 255UL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_memb_Vanetza_Security2_filename_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_Vanetza_Security2_filename_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_Vanetza_Security2_EeRaDownloadRequest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_Security2_EeRaDownloadRequest, generationTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_Security2_Time32,
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
		"generationTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_Security2_EeRaDownloadRequest, filename),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTF8String,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			&asn_OER_memb_Vanetza_Security2_filename_constr_3,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_Vanetza_Security2_filename_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_Vanetza_Security2_filename_constraint_1
		},
		0, 0, /* No default value */
		"filename"
		},
};
static const ber_tlv_tag_t asn_DEF_Vanetza_Security2_EeRaDownloadRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Vanetza_Security2_EeRaDownloadRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* generationTime */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* filename */
};
asn_SEQUENCE_specifics_t asn_SPC_Vanetza_Security2_EeRaDownloadRequest_specs_1 = {
	sizeof(struct Vanetza_Security2_EeRaDownloadRequest),
	offsetof(struct Vanetza_Security2_EeRaDownloadRequest, _asn_ctx),
	asn_MAP_Vanetza_Security2_EeRaDownloadRequest_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Vanetza_Security2_EeRaDownloadRequest = {
	"EeRaDownloadRequest",
	"EeRaDownloadRequest",
	&asn_OP_SEQUENCE,
	asn_DEF_Vanetza_Security2_EeRaDownloadRequest_tags_1,
	sizeof(asn_DEF_Vanetza_Security2_EeRaDownloadRequest_tags_1)
		/sizeof(asn_DEF_Vanetza_Security2_EeRaDownloadRequest_tags_1[0]), /* 1 */
	asn_DEF_Vanetza_Security2_EeRaDownloadRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_Vanetza_Security2_EeRaDownloadRequest_tags_1)
		/sizeof(asn_DEF_Vanetza_Security2_EeRaDownloadRequest_tags_1[0]), /* 1 */
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
	asn_MBR_Vanetza_Security2_EeRaDownloadRequest_1,
	2,	/* Elements count */
	&asn_SPC_Vanetza_Security2_EeRaDownloadRequest_specs_1	/* Additional specs */
};
