#include <jni.h>
#include <string.h>
#include <android/log.h>

#define DEBUG_TAG "NDKDevPhaseOne"

void com_eduonix_NDKDevPhaseOne_printLog(JNIEnv * env, jobject this, jstring logString)
{
    jboolean isCopy;
    const char * szLogString = (*env)->GetStringUTFChars(env, logString, &isCopy);

    __android_log_print(ANDROID_LOG_DEBUG, DEBUG_TAG, "NDK: %s", szLogString);

    (*env)->ReleaseStringUTFChars(env, logString, szLogString);
}