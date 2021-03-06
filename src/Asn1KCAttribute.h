/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "Asn1KC"
 * 	found in "/home/ccpuser/workspace/consecStb/sec_api/src/asn1_kc/asn1/Asn1KC.asn1"
 * 	`asn1c -fincludes-quoted -pdu=all -Werror`
 */

#ifndef	_Asn1KCAttribute_H_
#define	_Asn1KCAttribute_H_


#include "asn_application.h"

/* Including external dependencies */
#include "IA5String.h"
#include "INTEGER.h"
#include "BIT_STRING.h"
#include "OCTET_STRING.h"
#include "NULL.h"
#include "UTCTime.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum value_PR {
	value_PR_NOTHING,	/* No components present */
	value_PR_integer,
	value_PR_bitstring,
	value_PR_octetstring,
	value_PR_null,
	value_PR_ia5string,
	value_PR_utctime
} value_PR;

/* Asn1KCAttribute */
typedef struct Asn1KCAttribute {
	IA5String_t	 key;
	struct value {
		value_PR present;
		union Asn1KCAttribute__value_u {
			INTEGER_t	 integer;
			BIT_STRING_t	 bitstring;
			OCTET_STRING_t	 octetstring;
			NULL_t	 null;
			IA5String_t	 ia5string;
			UTCTime_t	 utctime;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Asn1KCAttribute_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Asn1KCAttribute;

#ifdef __cplusplus
}
#endif

#endif	/* _Asn1KCAttribute_H_ */
#include "asn_internal.h"
