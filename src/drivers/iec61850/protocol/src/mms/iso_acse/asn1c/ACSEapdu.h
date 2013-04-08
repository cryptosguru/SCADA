/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "ACSE1"
 * 	found in "../isoAcseLayer.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_ACSEapdu_H_
#define	_ACSEapdu_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AARQapdu.h"
#include "AAREapdu.h"
#include "RLRQapdu.h"
#include "RLREapdu.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ACSEapdu_PR {
	ACSEapdu_PR_NOTHING,	/* No components present */
	ACSEapdu_PR_aarq,
	ACSEapdu_PR_aare,
	ACSEapdu_PR_rlrq,
	ACSEapdu_PR_rlre
} ACSEapdu_PR;

/* ACSEapdu */
typedef struct ACSEapdu {
	ACSEapdu_PR present;
	union ACSEapdu_u {
		AARQapdu_t	 aarq;
		AAREapdu_t	 aare;
		RLRQapdu_t	 rlrq;
		RLREapdu_t	 rlre;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ACSEapdu_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ACSEapdu;

#ifdef __cplusplus
}
#endif

#endif	/* _ACSEapdu_H_ */
