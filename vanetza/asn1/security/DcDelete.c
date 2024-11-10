/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EtsiTs102941TrustLists"
 * 	found in "asn1/TS102941v131-TrustLists.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security_ -R`
 */

#include "DcDelete.h"

/*
 * This type is implemented using Vanetza_Security_Url,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_Vanetza_Security_DcDelete_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER character map necessary */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const ber_tlv_tag_t asn_DEF_Vanetza_Security_DcDelete_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (22 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_DcDelete = {
	"DcDelete",
	"DcDelete",
	&asn_OP_IA5String,
	asn_DEF_Vanetza_Security_DcDelete_tags_1,
	sizeof(asn_DEF_Vanetza_Security_DcDelete_tags_1)
		/sizeof(asn_DEF_Vanetza_Security_DcDelete_tags_1[0]), /* 1 */
	asn_DEF_Vanetza_Security_DcDelete_tags_1,	/* Same as above */
	sizeof(asn_DEF_Vanetza_Security_DcDelete_tags_1)
		/sizeof(asn_DEF_Vanetza_Security_DcDelete_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		IA5String_constraint
	},
	0, 0,	/* No members */
	0	/* No specifics */
};

