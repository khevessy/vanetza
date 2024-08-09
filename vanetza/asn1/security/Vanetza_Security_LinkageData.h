/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2"
 * 	found in "asn1/IEEE1609dot2.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security_ -R`
 */

#ifndef	_Vanetza_Security_LinkageData_H_
#define	_Vanetza_Security_LinkageData_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Vanetza_Security_IValue.h"
#include "Vanetza_Security_LinkageValue.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Vanetza_Security_GroupLinkageValue;

/* Vanetza_Security_LinkageData */
typedef struct Vanetza_Security_LinkageData {
	Vanetza_Security_IValue_t	 iCert;
	Vanetza_Security_LinkageValue_t	 linkage_value;
	struct Vanetza_Security_GroupLinkageValue	*group_linkage_value;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security_LinkageData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_LinkageData;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_Security_LinkageData_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_Security_LinkageData_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Vanetza_Security_GroupLinkageValue.h"

#endif	/* _Vanetza_Security_LinkageData_H_ */
#include "asn_internal.h"