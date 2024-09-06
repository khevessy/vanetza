/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_ClusterJoinInfo_H_
#define	_ClusterJoinInfo_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Identifier1B.h"
#include "DeltaTimeQuarterSecond.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ClusterJoinInfo */
typedef struct ClusterJoinInfo {
	Identifier1B_t	 clusterId;
	DeltaTimeQuarterSecond_t	 joinTime;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ClusterJoinInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ClusterJoinInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_ClusterJoinInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_ClusterJoinInfo_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ClusterJoinInfo_H_ */
#include "asn_internal.h"
