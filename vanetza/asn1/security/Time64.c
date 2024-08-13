/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "asn1/IEEE1609dot2BaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security_ -R`
 */

#include "Time64.h"

int
Vanetza_Security_Time64_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const Vanetza_Security_Uint64_t *st = (const Vanetza_Security_Uint64_t *)sptr;
	uintmax_t value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(asn_INTEGER2umax(st, &value)) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value too large (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if((value >= 0UL && value <= 18446744073709551615UL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using Vanetza_Security_Uint64,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_Vanetza_Security_Time64_constr_1 CC_NOTUSED = {
	{ 8, 1 }	/* (0..18446744073709551615) */,
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_Vanetza_Security_Time64_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 64, -1,  0,  18446744073709551615ul }	/* (0..18446744073709551615) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
const asn_INTEGER_specifics_t asn_SPC_Vanetza_Security_Time64_specs_1 = {
	0,	0,	0,	0,	0,
	0,	/* Native long size */
	1	/* Unsigned representation */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const ber_tlv_tag_t asn_DEF_Vanetza_Security_Time64_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_Time64 = {
	"Time64",
	"Time64",
	&asn_OP_INTEGER,
	asn_DEF_Vanetza_Security_Time64_tags_1,
	sizeof(asn_DEF_Vanetza_Security_Time64_tags_1)
		/sizeof(asn_DEF_Vanetza_Security_Time64_tags_1[0]), /* 1 */
	asn_DEF_Vanetza_Security_Time64_tags_1,	/* Same as above */
	sizeof(asn_DEF_Vanetza_Security_Time64_tags_1)
		/sizeof(asn_DEF_Vanetza_Security_Time64_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_Vanetza_Security_Time64_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_Vanetza_Security_Time64_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		Vanetza_Security_Time64_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_Vanetza_Security_Time64_specs_1	/* Manually added specifics */
};

