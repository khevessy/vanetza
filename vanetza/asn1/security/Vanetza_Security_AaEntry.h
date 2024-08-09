/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EtsiTs102941TrustLists"
 * 	found in "asn1/TS102941v131-TrustLists.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security_ -R`
 */

#ifndef	_Vanetza_Security_AaEntry_H_
#define	_Vanetza_Security_AaEntry_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Vanetza_Security_EtsiTs103097Certificate.h"
#include "Vanetza_Security_Url.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Vanetza_Security_AaEntry */
typedef struct Vanetza_Security_AaEntry {
	Vanetza_Security_EtsiTs103097Certificate_t	 aaCertificate;
	Vanetza_Security_Url_t	 accessPoint;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security_AaEntry_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_AaEntry;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_Security_AaEntry_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_Security_AaEntry_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_Security_AaEntry_H_ */
#include "asn_internal.h"