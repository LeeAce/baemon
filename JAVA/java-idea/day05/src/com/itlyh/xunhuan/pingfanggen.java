package com.itlyh.xunhuan;

import java.util.Scanner;

public class pingfanggen {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入一个数：");
        int num = sc.nextInt();

        for (int i = 0; i <= num; i++) {
            if (i * i > num) {
                System.out.println(num +"的平方根的整数部分为"+ (i-1));
                break;
            } else if (i*i==num) {
                System.out.println(num +"的平方根为"+i);
                break;
            }
        }
    }
}
