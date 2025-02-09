/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1AcaRaInterface"
 * 	found in "build.asn1/ieee/IEEE1609dot2dot1AcaRaInterface.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security2_ -R`
 */

#ifndef	_Vanetza_Security2_RaAcaCertRequest_H_
#define	_Vanetza_Security2_RaAcaCertRequest_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Uint8.h"
#include "Time32.h"
#include "CertificateType.h"
#include "RaAcaCertRequestFlags.h"
#include "ToBeSignedCertificate.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Vanetza_Security2_LinkageInfo;
struct Vanetza_Security2_PublicEncryptionKey;

/* Vanetza_Security2_RaAcaCertRequest */
typedef struct Vanetza_Security2_RaAcaCertRequest {
	Vanetza_Security2_Uint8_t	 version;
	Vanetza_Security2_Time32_t	 generationTime;
	Vanetza_Security2_CertificateType_t	 type;
	Vanetza_Security2_RaAcaCertRequestFlags_t	 flags;
	struct Vanetza_Security2_LinkageInfo	*linkageInfo;	/* OPTIONAL */
	struct Vanetza_Security2_PublicEncryptionKey	*certEncKey;	/* OPTIONAL */
	Vanetza_Security2_ToBeSignedCertificate_t	 tbsCert;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security2_RaAcaCertRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security2_RaAcaCertRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_Security2_RaAcaCertRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_Security2_RaAcaCertRequest_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LinkageInfo.h"
#include "PublicEncryptionKey.h"

#endif	/* _Vanetza_Security2_RaAcaCertRequest_H_ */
#include "asn_internal.h"
