package com.itlyh.liucheng;

import java.util.Scanner;

public class eat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入身上还有多少钱：");
        int temp = sc.nextInt();

        if (temp > 100 ) {
            System.out.println("去肯德基");
        }else{
            System.out.println("去沙县小吃");
        }

    }
}
