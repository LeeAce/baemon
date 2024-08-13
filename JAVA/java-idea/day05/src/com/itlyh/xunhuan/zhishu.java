package com.itlyh.xunhuan;

import java.util.Scanner;

public class zhishu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入一个整数：");
        int n = sc.nextInt();
        boolean flag = true;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                flag = false;
//                System.out.print(n+"不是质数");
                break;
            }/*else{
                System.out.println(n+"是质数");
                break;
            }*/
        }
        if(flag){
            System.out.print(n+"是质数");
        }else {
            System.out.print(n+"不是质数");
        }
    }
}
