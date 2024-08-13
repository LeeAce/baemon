package com.itlyh.zonghexunlian;

public class zonghexunlian04 {
    public static void main(String[] args) {
        int [] arr= new int[]{1,2,3,4,5};
        int []newarr = new int[arr.length];
        for (int i=0;i<arr.length;i++){
            newarr[i] = arr[i];
        }
        for (int i=0;i<newarr.length;i++){
            System.out.println(newarr[i]);
        }
    }
}
