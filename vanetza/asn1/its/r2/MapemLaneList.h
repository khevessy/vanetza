/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/release2/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#ifndef	_Vanetza_ITS2_MapemLaneList_H_
#define	_Vanetza_ITS2_MapemLaneList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Identifier1B.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Vanetza_ITS2_MapemLaneList */
typedef struct Vanetza_ITS2_MapemLaneList {
	A_SEQUENCE_OF(Vanetza_ITS2_Identifier1B_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_ITS2_MapemLaneList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_MapemLaneList;
extern asn_SET_OF_specifics_t asn_SPC_Vanetza_ITS2_MapemLaneList_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_ITS2_MapemLaneList_1[1];
extern asn_per_constraints_t asn_PER_type_Vanetza_ITS2_MapemLaneList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_ITS2_MapemLaneList_H_ */
#include "asn_internal.h"
