/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EtsiTs102941TypesLinkCertificate"
 * 	found in "asn1/release2/TS102941v221/TypesLinkCertificate.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security2_ -R`
 */

#ifndef	_Vanetza_Security2_ToBeSignedLinkCertificate_H_
#define	_Vanetza_Security2_ToBeSignedLinkCertificate_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Time32.h"
#include "HashedData.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Vanetza_Security2_ToBeSignedLinkCertificate */
typedef struct Vanetza_Security2_ToBeSignedLinkCertificate {
	Vanetza_Security2_Time32_t	 expiryTime;
	Vanetza_Security2_HashedData_t	 certificateHash;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security2_ToBeSignedLinkCertificate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security2_ToBeSignedLinkCertificate;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_Security2_ToBeSignedLinkCertificate_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_Security2_ToBeSignedLinkCertificate_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_Security2_ToBeSignedLinkCertificate_H_ */
#include "asn_internal.h"
