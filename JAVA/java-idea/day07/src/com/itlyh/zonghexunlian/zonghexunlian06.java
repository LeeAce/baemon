package com.itlyh.zonghexunlian;

public class zonghexunlian06 {
    public static void main(String[] args) {
        int[] arr = {1, 9, 5, 7};

        for (int i = 0; i < arr.length; i++) {
            arr[i] = (arr[i] + 5) % 10;
        }
        for (int i = 0, j = arr.length - 1; i < j; i++, j--) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        int num = 0;
        for (int i = 0; i < arr.length; i++) {
            num = num * 10 + arr[i];
            System.out.println(num);
        }
        System.out.println(num);
    }
}
