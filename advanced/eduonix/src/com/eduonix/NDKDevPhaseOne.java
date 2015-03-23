package com.eduonix;

public class NDKDevPhaseOne {

    static {
        System.loadLibrary("ndksetup"); // ndksetup is the LOCAL_MODULE string.
    }


    public static void main(String[] args) {

        NDKDevPhaseOne runner = new NDKDevPhaseOne();

        runner.printLog("NDKDevPhaseOne calls back");

    }


    private native void printLog(String logThis);



}