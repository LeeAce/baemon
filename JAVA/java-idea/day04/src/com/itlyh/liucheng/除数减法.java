package com.itlyh.liucheng;

public class 除数减法 {
    public static void main(String[] args) {
        int a=5000;
        int b=4;
        int count = 0;

        while(a>=b){
            a = a-b;
            count ++;
//            System.out.println(a);
        }
        System.out.println("yushu"+a);
        System.out.println("shang"+count);
    }
}
