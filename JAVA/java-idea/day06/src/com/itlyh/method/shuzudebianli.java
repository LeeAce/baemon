package com.itlyh.method;

public class shuzudebianli {
    public static void main(String[] args) {
        lyh(11,22,33,44,55);
    }
    public static void lyh(int num1,int num2,int num3,int num4,int num5) {
        int []arr = new int[]{num1,num2,num3,num4,num5};
        System.out.print("[");
        for (int i = 0; i < arr.length; i++) {
            if(i == arr.length-1) {
                System.out.print(arr[i]);
            }else{
                System.out.print(arr[i] + ",");
            }
        }
        System.out.print("]");
    }
}
