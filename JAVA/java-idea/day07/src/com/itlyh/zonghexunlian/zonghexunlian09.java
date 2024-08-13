package com.itlyh.zonghexunlian;

import java.util.Random;

public class zonghexunlian09 {
    public static void main(String[] args) {
        int [] arr = new int[]{88,288,2888,8888,28888};
        int []newarr = new int[arr.length];
        Random r = new Random();
        for (int i = 0; i < 5; ) {
            int index = r.nextInt(arr.length);
            int prize = arr[index];
            boolean flag = contions(newarr,prize);
            if(!flag){
                newarr[i] = prize;
                i++;
            }
        }
        for (int i = 0; i < newarr.length; i++) {
            System.out.println(newarr[i]);
        }
    }
    public static boolean contions(int[] arr,int prize) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == prize){
                return true;
            }
        }
        return false;
    }
}
