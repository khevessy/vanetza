/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_HeadingChangeIndication_H_
#define	_HeadingChangeIndication_H_


#include "asn_application.h"

/* Including external dependencies */
#include "TurningDirection.h"
#include "DeltaTimeTenthOfSecond.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* HeadingChangeIndication */
typedef struct HeadingChangeIndication {
	TurningDirection_t	 direction;
	DeltaTimeTenthOfSecond_t	 actionDeltaTime;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HeadingChangeIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HeadingChangeIndication;
extern asn_SEQUENCE_specifics_t asn_SPC_HeadingChangeIndication_specs_1;
extern asn_TYPE_member_t asn_MBR_HeadingChangeIndication_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _HeadingChangeIndication_H_ */
#include "asn_internal.h"
