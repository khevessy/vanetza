/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1CertManagement"
 * 	found in "build.asn1/ieee/IEEE1609dot2dot1CertManagement.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security2_ -R`
 */

#ifndef	_Vanetza_Security2_CertificateManagementInfoStatus_H_
#define	_Vanetza_Security2_CertificateManagementInfoStatus_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SequenceOfCrlInfoStatus.h"
#include "SequenceOfCtlInfoStatus.h"
#include "Time32.h"
#include "SequenceOfMaInfoStatus.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Vanetza_Security2_CertificateManagementInfoStatus */
typedef struct Vanetza_Security2_CertificateManagementInfoStatus {
	Vanetza_Security2_SequenceOfCrlInfoStatus_t	 crl;
	Vanetza_Security2_SequenceOfCtlInfoStatus_t	 ctl;
	Vanetza_Security2_Time32_t	 caCcf;
	Vanetza_Security2_SequenceOfMaInfoStatus_t	 ma;
	Vanetza_Security2_Time32_t	*ra;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security2_CertificateManagementInfoStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security2_CertificateManagementInfoStatus;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_Security2_CertificateManagementInfoStatus_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_Security2_CertificateManagementInfoStatus_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_Security2_CertificateManagementInfoStatus_H_ */
#include "asn_internal.h"
