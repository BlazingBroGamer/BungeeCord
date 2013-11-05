/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_md_5_bungee_NativeCipherImpl */

#ifndef _Included_net_md_5_bungee_NativeCipherImpl
#define _Included_net_md_5_bungee_NativeCipherImpl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_md_5_bungee_NativeCipherImpl
 * Method:    init
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_net_md_15_bungee_NativeCipherImpl_init
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     net_md_5_bungee_NativeCipherImpl
 * Method:    free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_md_15_bungee_NativeCipherImpl_free
  (JNIEnv *, jobject, jlong);

/*
 * Class:     net_md_5_bungee_NativeCipherImpl
 * Method:    cipher
 * Signature: (ZJ[BJJI)V
 */
JNIEXPORT void JNICALL Java_net_md_15_bungee_NativeCipherImpl_cipher
  (JNIEnv *, jobject, jboolean, jlong, jbyteArray, jlong, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif
