/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/release2/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#include "CenDsrcTollingZoneID.h"

int
Vanetza_ITS2_CenDsrcTollingZoneID_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 134217727L)) {
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
 * This type is implemented using Vanetza_ITS2_ProtectedZoneId,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_Vanetza_ITS2_CenDsrcTollingZoneID_constr_1 CC_NOTUSED = {
	{ 4, 1 }	/* (0..134217727) */,
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_Vanetza_ITS2_CenDsrcTollingZoneID_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 27, -1,  0,  134217727 }	/* (0..134217727) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const ber_tlv_tag_t asn_DEF_Vanetza_ITS2_CenDsrcTollingZoneID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_CenDsrcTollingZoneID = {
	"CenDsrcTollingZoneID",
	"CenDsrcTollingZoneID",
	&asn_OP_NativeInteger,
	asn_DEF_Vanetza_ITS2_CenDsrcTollingZoneID_tags_1,
	sizeof(asn_DEF_Vanetza_ITS2_CenDsrcTollingZoneID_tags_1)
		/sizeof(asn_DEF_Vanetza_ITS2_CenDsrcTollingZoneID_tags_1[0]), /* 1 */
	asn_DEF_Vanetza_ITS2_CenDsrcTollingZoneID_tags_1,	/* Same as above */
	sizeof(asn_DEF_Vanetza_ITS2_CenDsrcTollingZoneID_tags_1)
		/sizeof(asn_DEF_Vanetza_ITS2_CenDsrcTollingZoneID_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_Vanetza_ITS2_CenDsrcTollingZoneID_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_Vanetza_ITS2_CenDsrcTollingZoneID_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		Vanetza_ITS2_CenDsrcTollingZoneID_constraint
	},
	0, 0,	/* No members */
	0	/* No specifics */
};
