/* dsa.h for openSSL */


#ifndef CYASSL_DSA_H_
#define CYASSL_DSA_H_


#include <cyassl/openssl/ssl.h>
#include <cyassl/openssl/bn.h>


#ifdef __cplusplus
    extern "C" {
#endif



struct CYASSL_DSA {
	CYASSL_BIGNUM* p;
	CYASSL_BIGNUM* q;
	CYASSL_BIGNUM* g;
	CYASSL_BIGNUM* pub_key;
	CYASSL_BIGNUM* priv_key;
};


CYASSL_API CYASSL_DSA* CyaSSL_DSA_new(void);
CYASSL_API void        CyaSSL_DSA_free(CYASSL_DSA*);

CYASSL_API int CyaSSL_DSA_generate_key(CYASSL_DSA*);
CYASSL_API int CyaSSL_DSA_generate_parameters_ex(CYASSL_DSA*, int bits,
                   unsigned char* seed, int seedLen, int* counterRet,
                   unsigned long* hRet, void* cb);

#define DSA_new CyaSSL_DSA_new
#define DSA_free CyaSSL_DSA_free

#define DSA_generate_key           CyaSSL_DSA_generate_key
#define DSA_generate_parameters_ex CyaSSL_DSA_generate_parameters_ex


#ifdef __cplusplus
    }  /* extern "C" */ 
#endif

#endif /* header */
