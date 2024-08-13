package com.itlyh.method;

public class qiumax {
    public static void main(String[] args) {
        int []arr = new int[]{87,65,29,32,68,54,18,156};
        int maxvalue = max(arr);
        System.out.println(maxvalue);
    }
    public static int max(int []arr) {
        int max = arr[0];
        for(int i = 1; i < arr.length; i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }
}
