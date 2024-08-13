package com.itlyh.zonghexunlian;

import java.util.Scanner;

public class zonghexunlian07 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入一个数：（大于0）：");
        int num = sc.nextInt();
        int temp = num;
        int count = 0;
        while (num != 0) {
            num = num / 10;
            count++;
        }
//        System.out.println(count);

        int[] arr = new int[count];
        int index = arr.length - 1;
        for (int i = 0; i < count; i++) {
            int ge = temp % 10;
            temp = temp / 10;
            arr[index] = ge;
            index--;
        }
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
