/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "ACSE1"
 * 	found in "../isoAcseLayer.asn"
 * 	`asn1c -fskeletons-copy`
 */

#include <asn_internal.h>

#include "ACSEapdu.h"

static asn_TYPE_member_t asn_MBR_ACSEapdu_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ACSEapdu, choice.aarq),
		(ASN_TAG_CLASS_APPLICATION | (0 << 2)),
		0,
		&asn_DEF_AARQapdu,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"aarq"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ACSEapdu, choice.aare),
		(ASN_TAG_CLASS_APPLICATION | (1 << 2)),
		0,
		&asn_DEF_AAREapdu,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"aare"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ACSEapdu, choice.rlrq),
		(ASN_TAG_CLASS_APPLICATION | (2 << 2)),
		0,
		&asn_DEF_RLRQapdu,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"rlrq"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ACSEapdu, choice.rlre),
		(ASN_TAG_CLASS_APPLICATION | (3 << 2)),
		0,
		&asn_DEF_RLREapdu,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"rlre"
		},
};
static asn_TYPE_tag2member_t asn_MAP_ACSEapdu_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (0 << 2)), 0, 0, 0 }, /* aarq at 30 */
    { (ASN_TAG_CLASS_APPLICATION | (1 << 2)), 1, 0, 0 }, /* aare at 31 */
    { (ASN_TAG_CLASS_APPLICATION | (2 << 2)), 2, 0, 0 }, /* rlrq at 32 */
    { (ASN_TAG_CLASS_APPLICATION | (3 << 2)), 3, 0, 0 } /* rlre at 34 */
};
static asn_CHOICE_specifics_t asn_SPC_ACSEapdu_specs_1 = {
	sizeof(struct ACSEapdu),
	offsetof(struct ACSEapdu, _asn_ctx),
	offsetof(struct ACSEapdu, present),
	sizeof(((struct ACSEapdu *)0)->present),
	asn_MAP_ACSEapdu_tag2el_1,
	4,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ACSEapdu = {
	"ACSEapdu",
	"ACSEapdu",
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
	asn_MBR_ACSEapdu_1,
	4,	/* Elements count */
	&asn_SPC_ACSEapdu_specs_1	/* Additional specs */
};

