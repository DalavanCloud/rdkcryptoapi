/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "Asn1KC"
 * 	found in "/home/ccpuser/workspace/consecStb/sec_api/src/asn1_kc/asn1/Asn1KC.asn1"
 * 	`asn1c -fincludes-quoted -pdu=all -Werror`
 */

#include "Asn1KCAttribute.h"

static asn_TYPE_member_t asn_MBR_value_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct value, choice.integer),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"integer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct value, choice.bitstring),
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_BIT_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"bitstring"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct value, choice.octetstring),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"octetstring"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct value, choice.null),
		(ASN_TAG_CLASS_UNIVERSAL | (5 << 2)),
		0,
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"null"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct value, choice.ia5string),
		(ASN_TAG_CLASS_UNIVERSAL | (22 << 2)),
		0,
		&asn_DEF_IA5String,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"ia5string"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct value, choice.utctime),
		(ASN_TAG_CLASS_UNIVERSAL | (23 << 2)),
		0,
		&asn_DEF_UTCTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"utctime"
		},
};
static asn_TYPE_tag2member_t asn_MAP_value_tag2el_3[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* integer at 7 */
    { (ASN_TAG_CLASS_UNIVERSAL | (3 << 2)), 1, 0, 0 }, /* bitstring at 8 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 2, 0, 0 }, /* octetstring at 9 */
    { (ASN_TAG_CLASS_UNIVERSAL | (5 << 2)), 3, 0, 0 }, /* null at 10 */
    { (ASN_TAG_CLASS_UNIVERSAL | (22 << 2)), 4, 0, 0 }, /* ia5string at 11 */
    { (ASN_TAG_CLASS_UNIVERSAL | (23 << 2)), 5, 0, 0 } /* utctime at 12 */
};
static asn_CHOICE_specifics_t asn_SPC_value_specs_3 = {
	sizeof(struct value),
	offsetof(struct value, _asn_ctx),
	offsetof(struct value, present),
	sizeof(((struct value *)0)->present),
	asn_MAP_value_tag2el_3,
	6,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_value_3 = {
	"value",
	"value",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_value_3,
	6,	/* Elements count */
	&asn_SPC_value_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Asn1KCAttribute_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Asn1KCAttribute, key),
		(ASN_TAG_CLASS_UNIVERSAL | (22 << 2)),
		0,
		&asn_DEF_IA5String,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"key"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Asn1KCAttribute, value),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_value_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"value"
		},
};
static ber_tlv_tag_t asn_DEF_Asn1KCAttribute_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Asn1KCAttribute_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 0 }, /* integer at 7 */
    { (ASN_TAG_CLASS_UNIVERSAL | (3 << 2)), 1, 0, 0 }, /* bitstring at 8 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 1, 0, 0 }, /* octetstring at 9 */
    { (ASN_TAG_CLASS_UNIVERSAL | (5 << 2)), 1, 0, 0 }, /* null at 10 */
    { (ASN_TAG_CLASS_UNIVERSAL | (22 << 2)), 0, 0, 1 }, /* key at 5 */
    { (ASN_TAG_CLASS_UNIVERSAL | (22 << 2)), 1, -1, 0 }, /* ia5string at 11 */
    { (ASN_TAG_CLASS_UNIVERSAL | (23 << 2)), 1, 0, 0 } /* utctime at 12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Asn1KCAttribute_specs_1 = {
	sizeof(struct Asn1KCAttribute),
	offsetof(struct Asn1KCAttribute, _asn_ctx),
	asn_MAP_Asn1KCAttribute_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Asn1KCAttribute = {
	"Asn1KCAttribute",
	"Asn1KCAttribute",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Asn1KCAttribute_tags_1,
	sizeof(asn_DEF_Asn1KCAttribute_tags_1)
		/sizeof(asn_DEF_Asn1KCAttribute_tags_1[0]), /* 1 */
	asn_DEF_Asn1KCAttribute_tags_1,	/* Same as above */
	sizeof(asn_DEF_Asn1KCAttribute_tags_1)
		/sizeof(asn_DEF_Asn1KCAttribute_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Asn1KCAttribute_1,
	2,	/* Elements count */
	&asn_SPC_Asn1KCAttribute_specs_1	/* Additional specs */
};
