/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "ACSE1"
 * 	found in "../isoAcseLayer.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_Myexternal_H_
#define	_Myexternal_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OBJECT_IDENTIFIER.h>
#include <NativeInteger.h>
#include <ANY.h>
#include <OCTET_STRING.h>
#include <BIT_STRING.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum encoding_PR {
	encoding_PR_NOTHING,	/* No components present */
	encoding_PR_singleASN1type,
	encoding_PR_octetaligned,
	encoding_PR_arbitrary
} encoding_PR;

/* Myexternal */
typedef struct Myexternal {
	OBJECT_IDENTIFIER_t	*directreference	/* OPTIONAL */;
	long	*indirectreference	/* OPTIONAL */;
	struct encoding {
		encoding_PR present;
		union Myexternal__encoding_u {
			ANY_t	 singleASN1type;
			OCTET_STRING_t	 octetaligned;
			BIT_STRING_t	 arbitrary;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} encoding;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Myexternal_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Myexternal;

#ifdef __cplusplus
}
#endif

#endif	/* _Myexternal_H_ */
