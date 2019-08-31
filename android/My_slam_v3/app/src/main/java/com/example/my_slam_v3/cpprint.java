package com.example.my_slam_v3;

public class cpprint {
    static {
        System.loadLibrary("cpprint");
    }



    public void ppc(){
        System.out.println(sayhi());
    }

    public native String sayhi();

}
