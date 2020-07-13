/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-CommonDataTypes"
 * 	found in "../support/r14.4.0/38413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_NGAP_TriggeringMessage_H_
#define	_NGAP_TriggeringMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_TriggeringMessage {
	NGAP_TriggeringMessage_initiating_message	= 0,
	NGAP_TriggeringMessage_successful_outcome	= 1,
	NGAP_TriggeringMessage_unsuccessfull_outcome	= 2
} e_NGAP_TriggeringMessage;

/* NGAP_TriggeringMessage */
typedef long	 NGAP_TriggeringMessage_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_TriggeringMessage_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_TriggeringMessage;
extern const asn_INTEGER_specifics_t asn_SPC_TriggeringMessage_specs_1;
asn_struct_free_f TriggeringMessage_free;
asn_struct_print_f TriggeringMessage_print;
asn_constr_check_f TriggeringMessage_constraint;
ber_type_decoder_f TriggeringMessage_decode_ber;
der_type_encoder_f TriggeringMessage_encode_der;
xer_type_decoder_f TriggeringMessage_decode_xer;
xer_type_encoder_f TriggeringMessage_encode_xer;
oer_type_decoder_f TriggeringMessage_decode_oer;
oer_type_encoder_f TriggeringMessage_encode_oer;
per_type_decoder_f TriggeringMessage_decode_uper;
per_type_encoder_f TriggeringMessage_encode_uper;
per_type_decoder_f TriggeringMessage_decode_aper;
per_type_encoder_f TriggeringMessage_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_TriggeringMessage_H_ */
#include <asn_internal.h>
