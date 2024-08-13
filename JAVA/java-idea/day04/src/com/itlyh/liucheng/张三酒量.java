package com.itlyh.liucheng;

import java.util.Scanner;

public class 张三酒量 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入张三的酒量：");
        int number = sc.nextInt();
        if (number > 2) {
            System.out.println("小伙子，酒量不错");
        }
    }
}