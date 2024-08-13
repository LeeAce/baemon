package com.itlyh.method;

public class copy {
    public static void main(String[] args) {
        int []arr = new int[]{1,2,3,4,56,9,8,7};
        int newarr[] = copyOfRange(arr,0,5);

        for (int i = 0; i < newarr.length; i++) {
            System.out.print(newarr[i]+" ");
        }
    }
    public static int[] copyOfRange(int [] arr, int from, int to) {
        int []newarr = new int[to-from];
        int index = 0;
        for (int i = from; i < to; i++) {
            newarr[index] = arr[i];
            index++;
        }
        return newarr;
    }
}
