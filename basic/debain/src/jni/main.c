#include <jni.h>
#include <string.h>
#include <stdio.h>
#include <com_eduonix_NDKDevPhaseTwo.h>


JNIEXPORT void JNICALL Java_com_eduonix_NDKDevPhaseTwo_printLog(JNIEnv * env, jobject thisObj, jstring jstr)
{
        const char * ptr__jstr = (*env)-> GetStringUTFChars (env, jstr, 0);//Convert from unicode
        printf(ptr__jstr);

        return;
}


