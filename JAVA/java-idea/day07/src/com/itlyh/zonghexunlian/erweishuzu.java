package com.itlyh.zonghexunlian;

public class erweishuzu {
    public static void main(String[] args) {
        int[][] yeararrarr = {
                {51, 83, 45},
                {56, 95, 76},
                {58, 88, 45},
                {53, 49, 71},
        };
        int yearsum = 0;
        for (int i = 0; i < yeararrarr.length; i++) {
            int[] num = yeararrarr[i];
            int sum = getsum(num);
            System.out.println("第"+(i+1)+"个季度的营业额为："+sum);
            yearsum += sum;
        }
        System.out.println("总营业额为："+yearsum);

    }
    public static int getsum(int[] arr) {
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum = sum + arr[i];
        }
        return sum;
    }
}
