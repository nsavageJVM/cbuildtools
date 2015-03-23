#include <jni.h>
#include <string.h>
#include <stdio.h>
#include "../src/include/com_eduonix_NDKDevPhaseTwo.h


JNIEXPORT void JNICALL Java_com_eduonix_NDKDevPhaseTwo_printLog(JNIEnv * env, jobject thisObj)
{
        printf("Standard JNI code is go \n");

        return;
}