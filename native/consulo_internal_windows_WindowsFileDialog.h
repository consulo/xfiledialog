/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class consulo_internal_windows_WindowsFileDialog */

#ifndef _Included_consulo_internal_windows_WindowsFileDialog
#define _Included_consulo_internal_windows_WindowsFileDialog
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     consulo_internal_windows_WindowsFileDialog
 * Method:    initWithWindowTitle
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_consulo_internal_windows_WindowsFileDialog_initWithWindowTitle
  (JNIEnv *, jobject, jstring);

/*
 * Class:     consulo_internal_windows_WindowsFileDialog
 * Method:    initWithJAWT
 * Signature: (Ljava/awt/Component;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_consulo_internal_windows_WindowsFileDialog_initWithJAWT
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     consulo_internal_windows_WindowsFileDialog
 * Method:    getDirectory2
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_consulo_internal_windows_WindowsFileDialog_getDirectory2
  (JNIEnv *, jobject);

/*
 * Class:     consulo_internal_windows_WindowsFileDialog
 * Method:    setDirectory2
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_consulo_internal_windows_WindowsFileDialog_setDirectory2
  (JNIEnv *, jobject, jstring);

/*
 * Class:     consulo_internal_windows_WindowsFileDialog
 * Method:    getFile2
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_consulo_internal_windows_WindowsFileDialog_getFile2
  (JNIEnv *, jobject);

/*
 * Class:     consulo_internal_windows_WindowsFileDialog
 * Method:    getFolder2
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_consulo_internal_windows_WindowsFileDialog_getFolder2
  (JNIEnv *, jobject);

/*
 * Class:     consulo_internal_windows_WindowsFileDialog
 * Method:    getFolders2
 * Signature: ()[[B
 */
JNIEXPORT jobjectArray JNICALL Java_consulo_internal_windows_WindowsFileDialog_getFolders2
  (JNIEnv *, jobject);

/*
 * Class:     consulo_internal_windows_WindowsFileDialog
 * Method:    setMode2
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_consulo_internal_windows_WindowsFileDialog_setMode2
  (JNIEnv *, jobject, jint);

/*
 * Class:     consulo_internal_windows_WindowsFileDialog
 * Method:    getMode2
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_consulo_internal_windows_WindowsFileDialog_getMode2
  (JNIEnv *, jobject);

/*
 * Class:     consulo_internal_windows_WindowsFileDialog
 * Method:    getFiles2
 * Signature: ()[[B
 */
JNIEXPORT jobjectArray JNICALL Java_consulo_internal_windows_WindowsFileDialog_getFiles2
  (JNIEnv *, jobject);

/*
 * Class:     consulo_internal_windows_WindowsFileDialog
 * Method:    setFilters2
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_consulo_internal_windows_WindowsFileDialog_setFilters2
  (JNIEnv *, jobject, jstring);

/*
 * Class:     consulo_internal_windows_WindowsFileDialog
 * Method:    getTitle2
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_consulo_internal_windows_WindowsFileDialog_getTitle2
  (JNIEnv *, jobject);

/*
 * Class:     consulo_internal_windows_WindowsFileDialog
 * Method:    setTitle2
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_consulo_internal_windows_WindowsFileDialog_setTitle2
  (JNIEnv *, jobject, jstring);

/*
 * Class:     consulo_internal_windows_WindowsFileDialog
 * Method:    setThumbnail2
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_consulo_internal_windows_WindowsFileDialog_setThumbnail2
  (JNIEnv *, jobject, jint);

/*
 * Class:     consulo_internal_windows_WindowsFileDialog
 * Method:    setTraceLevel2
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_consulo_internal_windows_WindowsFileDialog_setTraceLevel2
  (JNIEnv *, jclass, jint);

/*
 * Class:     consulo_internal_windows_WindowsFileDialog
 * Method:    refreshFrame
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_consulo_internal_windows_WindowsFileDialog_refreshFrame
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
