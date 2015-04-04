#ifndef _OPENSSL_ANDROID_CONFIG_H_
#define _OPENSSL_ANDROID_CONFIG_H_

// refer to external\openssl\android-config.mk
#define OPENSSL_THREADS
#define _REENTRANT
//#define DSO_DLFCN // replaced by DSO_WIN32
//#define HAVE_DLFCN_H
#define L_ENDIAN

#define DSO_WIN32 // Speicfic to EAGLE_EMU, not in external\openssl\android-config.mk

#define OPENSSL_NO_CAMELLIA
#define OPENSSL_NO_CAPIENG
#define OPENSSL_NO_CAST
#define OPENSSL_NO_CMS
#define OPENSSL_NO_GMP
#define OPENSSL_NO_IDEA
#define OPENSSL_NO_JPAKE
#define OPENSSL_NO_MD2
#define OPENSSL_NO_MDC2
#define OPENSSL_NO_RC5
#define OPENSSL_NO_SHA0
#define OPENSSL_NO_RFC3779
#define OPENSSL_NO_SEED
#define OPENSSL_NO_STORE
#define OPENSSL_NO_WHIRLPOOL

#define OPENSSL_NO_HW
#define OPENSSL_NO_ENGINE
#define ZLIB

#endif // _OPENSSL_ANDROID_CONFIG_H_
