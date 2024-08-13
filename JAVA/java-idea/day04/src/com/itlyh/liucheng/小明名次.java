package com.itlyh.liucheng;

import java.util.Scanner;

public class 小明名次 {
    public static void main(String[] args) {
        Scanner grade = new Scanner(System.in);
        System.out.println("请输入小明的名次：");
        int temp1 = grade.nextInt();
        if (temp1 == 1) {
            System.out.println("小红同意小明了");
        }

    }
}
