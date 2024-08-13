package com.itlyh.xunhuan;

import java.util.Random;

public class suijijiaohaun {
    public static void main(String[] args) {

        int[] arr={1,2,3,4,5};
        for (int i = 0; i < arr.length-1; i++) {
            Random rand = new Random();
            int randomNum = rand.nextInt(4);
                int temp = arr[i];
//              arr[i] = arr[j];
//              arr[j] = temp;
                arr[i] = arr[randomNum];
                arr[randomNum] = temp;
        }
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+" ");
        }
    }
}
