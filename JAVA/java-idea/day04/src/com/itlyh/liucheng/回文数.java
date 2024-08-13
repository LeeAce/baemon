package com.itlyh.liucheng;

public class 回文数 {
    public static void main(String[] args) {
        int num = 12155;
        int temp = num ;

        int x = 0;

        while (num!=0) {
            int i = num%10;
            num = num/10;
            x = x*10 + i;
        }
        if (temp == x){
            System.out.println("是回文数");
        }else{
            System.out.println("不是回文数");
        }
    }

}
