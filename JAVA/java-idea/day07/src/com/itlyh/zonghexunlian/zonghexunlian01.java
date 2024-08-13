package com.itlyh.zonghexunlian;

import java.util.Scanner;

public class zonghexunlian01 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入月份：");
        int mouth = sc.nextInt();
        System.out.println("请输入机票价格：");
        int ticket = sc.nextInt();
        System.out.println("请输入座位类型：");
        int seat = sc.nextInt();

        if (mouth >= 5 && mouth <= 10) {
//            ticket = getTicket(seat, ticket, 0.9, 0.85);
            if (seat == 0) {
                ticket = (int) (ticket * 0.9);
            } else if (seat == 1) {
                ticket = (int) (ticket * 0.85);
            } else {
                System.out.println("输入的座位类型不正确！");
            }
        } else if ((mouth >= 1 && mouth <= 4) || (mouth >= 11 && mouth <= 12)) {
//            ticket = getTicket(seat, ticket, 0.7, 0.65);
            if (seat == 0) {
                ticket = (int) (ticket * 0.7);
            } else if (seat == 1) {
                ticket = (int) (ticket * 0.65);
            } else {
                System.out.println("输入的座位类型不正确！");
            }
        } else {
            System.out.println("输入的月份不合法！");
        }
        System.out.println("ticket = " + ticket);
    }

//    public static int getTicket(int seat, int ticket, double v, double v1) {
//        if (seat == 0) {
//            ticket = (int) (ticket * v);
//        } else if (seat == 1) {
//            ticket = (int) (ticket * v1);
//        } else {
//            System.out.println("输入的座位类型不正确！");
//        }
//        return ticket;
//    }
}
