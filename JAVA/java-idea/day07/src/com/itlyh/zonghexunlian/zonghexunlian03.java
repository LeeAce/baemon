package com.itlyh.zonghexunlian;

import java.util.Random;

public class zonghexunlian03 {
    public static void main(String[] args) {
        char[] chs = new char[52];
        for (int i = 0; i < chs.length; i++) {
            if (i < 26) {
                chs[i] = (char) ('a' + i);
//                System.out.print(chs[i] + " ");
            } else {
                chs[i] = (char) ('A' + i - 26);
//                System.out.print(chs[i] + " ");
            }
        }
//        for (int i = 0; i < chs.length; i++) {
//            System.out.print(chs[i] + " ");
//        }
        String result = "";
        Random r = new Random();
        for (int i = 0; i < 4; i++) {
            int randomindex = r.nextInt(chs.length);
//            System.out.println(chs[randomindex]);
            result = result + chs[randomindex];
        }
//        System.out.println(result);
        int number = r.nextInt(10);
        result = result + number;
        System.out.println(result);
    }
}
