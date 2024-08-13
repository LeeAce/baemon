package com.itlyh.xunhuan;

public class maxshuzu {
    public static void main(String[] args) {
        int[] a = new int[]{35,26,33,21,20,80};
        int max = a[0];
        for (int i = 1; i < a.length; i++) {
            if (a[i] > max) {
                max = a[i];
            }
        }
        System.out.println(max);
    }
}
