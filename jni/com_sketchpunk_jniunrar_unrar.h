/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_sketchpunk_jniunrar_unrar */

#ifndef _Included_com_sketchpunk_jniunrar_unrar
#define _Included_com_sketchpunk_jniunrar_unrar
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_sketchpunk_jniunrar_unrar
 * Method:    getVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_sketchpunk_jniunrar_unrar_getVersion
  (JNIEnv * env, jclass cls);

/*
 * Class:     com_sketchpunk_jniunrar_unrar
 * Method:    getEntries
 * Signature: (Ljava/lang/String;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_sketchpunk_jniunrar_unrar_getEntries
  (JNIEnv * env, jclass cls, jstring jArcPath,jstring jExtList);

/*
 * Class:     com_sketchpunk_jniunrar_unrar
 * Method:    extractEntryToArray
 * Signature: (Ljava/lang/String;Ljava/lang/String;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_sketchpunk_jniunrar_unrar_extractEntryToArray
  (JNIEnv * env, jclass cls, jstring jArcPath, jstring jEntryName);

#ifdef __cplusplus
}
#endif
#endif
