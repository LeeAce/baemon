package com.itlyh.xunhuan;

import java.util.Random;

public class suijishuzu {
    public static void main(String[] args) {
        int arr[] = new int[10];
        int sum=0;
        for (int i = 0; i < 10; i++) {
            Random r = new Random();
            arr[i] = r.nextInt(100)+1;
            System.out.print(arr[i]+" ");
            sum +=arr[i];
        }
        System.out.println(sum);
        double avg = sum/10;
        System.out.println(avg);
        int count=0;
        for (int i = 0; i < 10; i++) {
            if (arr[i]<avg){
                count ++;
            }
        }
        System.out.println(count);
    }
}
