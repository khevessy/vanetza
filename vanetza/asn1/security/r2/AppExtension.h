/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2"
 * 	found in "build.asn1/ieee/IEEE1609dot2.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security2_ -R`
 */

#ifndef	_Vanetza_Security2_AppExtension_H_
#define	_Vanetza_Security2_AppExtension_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Ieee1609Dot2BaseTypes_ExtId.h"
#include "ANY.h"
#include "asn_ioc.h"
#include "OperatingOrganizationId.h"
#include "NULL.h"
#include "OPEN_TYPE.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Vanetza_Security2_AppExtension__content_PR {
	Vanetza_Security2_AppExtension__content_PR_NOTHING,	/* No components present */
	Vanetza_Security2_AppExtension__content_PR_OperatingOrganizationId
} Vanetza_Security2_AppExtension__content_PR;

/* Vanetza_Security2_AppExtension */
typedef struct Vanetza_Security2_AppExtension {
	Vanetza_Security2_Ieee1609Dot2BaseTypes_ExtId_t	 id;
	struct Vanetza_Security2_AppExtension__content {
		Vanetza_Security2_AppExtension__content_PR present;
		union Vanetza_Security2_AppExtension__Vanetza_Security2_content_u {
			Vanetza_Security2_OperatingOrganizationId_t	 OperatingOrganizationId;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} content;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security2_AppExtension_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security2_AppExtension;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_Security2_AppExtension_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_Security2_AppExtension_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_Security2_AppExtension_H_ */
#include "asn_internal.h"
