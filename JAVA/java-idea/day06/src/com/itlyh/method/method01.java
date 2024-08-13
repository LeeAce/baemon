package com.itlyh.method;

public class method01 {
    public static void main(String[] args) {
        lyh();
        lyh01(36,93);
    }
    public static void lyh() {
        System.out.println("Hello 李远航");
    }
    public static void lyh01(int num1, int num2) {
        int sum = num1 + num2;
        System.out.println("sum = " + sum);
    }
}
