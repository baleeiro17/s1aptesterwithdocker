/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "S1AP_Global-RAN-NODE-ID.h"

#include "S1AP_GNB.h"
#include "S1AP_NG-eNB.h"
static asn_oer_constraints_t asn_OER_type_S1AP_Global_RAN_NODE_ID_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_S1AP_Global_RAN_NODE_ID_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_S1AP_Global_RAN_NODE_ID_1[] = {
	{ ATF_POINTER, 0, offsetof(struct S1AP_Global_RAN_NODE_ID, choice.gNB),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_GNB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gNB"
		},
	{ ATF_POINTER, 0, offsetof(struct S1AP_Global_RAN_NODE_ID, choice.ng_eNB),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_NG_eNB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ng-eNB"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_Global_RAN_NODE_ID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gNB */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ng-eNB */
};
asn_CHOICE_specifics_t asn_SPC_S1AP_Global_RAN_NODE_ID_specs_1 = {
	sizeof(struct S1AP_Global_RAN_NODE_ID),
	offsetof(struct S1AP_Global_RAN_NODE_ID, _asn_ctx),
	offsetof(struct S1AP_Global_RAN_NODE_ID, present),
	sizeof(((struct S1AP_Global_RAN_NODE_ID *)0)->present),
	asn_MAP_S1AP_Global_RAN_NODE_ID_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_Global_RAN_NODE_ID = {
	"Global-RAN-NODE-ID",
	"Global-RAN-NODE-ID",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_S1AP_Global_RAN_NODE_ID_constr_1, &asn_PER_type_S1AP_Global_RAN_NODE_ID_constr_1, CHOICE_constraint },
	asn_MBR_S1AP_Global_RAN_NODE_ID_1,
	2,	/* Elements count */
	&asn_SPC_S1AP_Global_RAN_NODE_ID_specs_1	/* Additional specs */
};

