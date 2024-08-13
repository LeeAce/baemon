package com.itlyh.xunhuan;

import java.util.Random;
import java.util.Scanner;

public class suijishu {
    public static void main(String[] args) {
        Random r = new Random();
        int num = r.nextInt(100)+1;
        Scanner sc = new Scanner(System.in);
        int count=0;
        while (true) {
        System.out.println("请输入一个猜测的数：");
        int num1 = sc.nextInt();
        count++;
        if (count == 3){
            System.out.println("猜中了");
            break;
        }
            if (num<num1){
                System.out.println("猜大了");
            } else if (num>num1) {
                System.out.println("猜小了");
            } else if(num ==num1) {
                System.out.println("猜中了");
                break;
            }
        }



    }
}
