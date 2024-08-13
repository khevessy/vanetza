/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2"
 * 	found in "asn1/IEEE1609dot2.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security_ -R`
 */

#ifndef	_Vanetza_Security_SignedData_H_
#define	_Vanetza_Security_SignedData_H_


#include "asn_application.h"

/* Including external dependencies */
#include "HashAlgorithm.h"
#include "SignerIdentifier.h"
#include "Signature.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Vanetza_Security_ToBeSignedData;

/* Vanetza_Security_SignedData */
typedef struct Vanetza_Security_SignedData {
	Vanetza_Security_HashAlgorithm_t	 hashId;
	struct Vanetza_Security_ToBeSignedData	*tbsData;
	Vanetza_Security_SignerIdentifier_t	 signer;
	Vanetza_Security_Signature_t	 signature;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security_SignedData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_SignedData;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_Security_SignedData_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_Security_SignedData_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ToBeSignedData.h"

#endif	/* _Vanetza_Security_SignedData_H_ */
#include "asn_internal.h"
