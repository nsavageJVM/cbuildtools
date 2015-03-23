package com.eduonix;

/**
 * Extend JNI development
 */
public class NDKDevPhaseTwo {

    static {
        System.loadLibrary("main");
    }


    public static void main(String[] args) {

        NDKDevPhaseTwo runner = new NDKDevPhaseTwo();

        runner.printLog("NDKDevPhaseTwo calls back\n\n");

    }


    private native void printLog(String logThis);
}
