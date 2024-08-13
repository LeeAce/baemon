package com.itlyh.zonghexunlian;

import java.util.Random;

public class zonghexunlian10 {
    public static void main(String[] args) {
        int [] arr = new int[]{88,288,2888,8888,28888};
        Random r = new Random();
        for (int i = 0; i < arr.length; i++) {
            int index = r.nextInt(arr.length);
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}
