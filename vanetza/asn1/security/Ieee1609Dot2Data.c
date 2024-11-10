/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2"
 * 	found in "asn1/IEEE1609dot2.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security_ -R`
 */

#include "Ieee1609Dot2Data.h"

static int
memb_Vanetza_Security_protocolVersion_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value == 3L)) {
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
static asn_oer_constraints_t asn_OER_memb_Vanetza_Security_protocolVersion_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (3..3) */,
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_Vanetza_Security_protocolVersion_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (3..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_Vanetza_Security_Ieee1609Dot2Data_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_Security_Ieee1609Dot2Data, protocolVersion),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_Security_Uint8,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			&asn_OER_memb_Vanetza_Security_protocolVersion_constr_2,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_Vanetza_Security_protocolVersion_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_Vanetza_Security_protocolVersion_constraint_1
		},
		0, 0, /* No default value */
		"protocolVersion"
		},
	{ ATF_POINTER, 0, offsetof(struct Vanetza_Security_Ieee1609Dot2Data, content),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Vanetza_Security_Ieee1609Dot2Content,
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
		"content"
		},
};
static const ber_tlv_tag_t asn_DEF_Vanetza_Security_Ieee1609Dot2Data_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Vanetza_Security_Ieee1609Dot2Data_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* protocolVersion */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* content */
};
asn_SEQUENCE_specifics_t asn_SPC_Vanetza_Security_Ieee1609Dot2Data_specs_1 = {
	sizeof(struct Vanetza_Security_Ieee1609Dot2Data),
	offsetof(struct Vanetza_Security_Ieee1609Dot2Data, _asn_ctx),
	asn_MAP_Vanetza_Security_Ieee1609Dot2Data_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_Ieee1609Dot2Data = {
	"Ieee1609Dot2Data",
	"Ieee1609Dot2Data",
	&asn_OP_SEQUENCE,
	asn_DEF_Vanetza_Security_Ieee1609Dot2Data_tags_1,
	sizeof(asn_DEF_Vanetza_Security_Ieee1609Dot2Data_tags_1)
		/sizeof(asn_DEF_Vanetza_Security_Ieee1609Dot2Data_tags_1[0]), /* 1 */
	asn_DEF_Vanetza_Security_Ieee1609Dot2Data_tags_1,	/* Same as above */
	sizeof(asn_DEF_Vanetza_Security_Ieee1609Dot2Data_tags_1)
		/sizeof(asn_DEF_Vanetza_Security_Ieee1609Dot2Data_tags_1[0]), /* 1 */
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
	asn_MBR_Vanetza_Security_Ieee1609Dot2Data_1,
	2,	/* Elements count */
	&asn_SPC_Vanetza_Security_Ieee1609Dot2Data_specs_1	/* Additional specs */
};

