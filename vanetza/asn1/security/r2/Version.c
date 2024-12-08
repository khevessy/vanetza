/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EtsiTs102941BaseTypes"
 * 	found in "asn1/release2/TS102941v221/BaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security2_ -R`
 */

#include "Version.h"

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_Vanetza_Security2_Version_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Vanetza_Security2_Version = {
	"Version",
	"Version",
	&asn_OP_NativeInteger,
	asn_DEF_Vanetza_Security2_Version_tags_1,
	sizeof(asn_DEF_Vanetza_Security2_Version_tags_1)
		/sizeof(asn_DEF_Vanetza_Security2_Version_tags_1[0]), /* 1 */
	asn_DEF_Vanetza_Security2_Version_tags_1,	/* Same as above */
	sizeof(asn_DEF_Vanetza_Security2_Version_tags_1)
		/sizeof(asn_DEF_Vanetza_Security2_Version_tags_1[0]), /* 1 */
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
		NativeInteger_constraint
	},
	0, 0,	/* Defined elsewhere */
	0	/* No specifics */
};

