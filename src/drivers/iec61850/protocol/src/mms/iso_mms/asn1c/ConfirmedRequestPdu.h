/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_ConfirmedRequestPdu_H_
#define	_ConfirmedRequestPdu_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Unsigned32.h"
#include "ConfirmedServiceRequest.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ConfirmedRequestPdu */
typedef struct ConfirmedRequestPdu {
	Unsigned32_t	 invokeID;
	ConfirmedServiceRequest_t	 confirmedServiceRequest;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ConfirmedRequestPdu_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ConfirmedRequestPdu;

#ifdef __cplusplus
}
#endif

#endif	/* _ConfirmedRequestPdu_H_ */
