package com.itlyh.yunsuanfu;

public class 运算符01 {
    public static void main(String[] args) {
//        +
        System.out.println(3+2);
//        -
        System.out.println(3-2);
//        *
        System.out.println(3*2);
//      有小数参与运算，结果有可能不精确
        System.out.println(1.1+1.1);//2.2
        System.out.println(1.1+1.01);//2.1100000000000003
        System.out.println(1.1-1.01);//0.09000000000000008
        System.out.println(1.1*1.1);//1.2100000000000002
//      除法
        System.out.println(10/2);//5
//
        System.out.println(10/3);//3
//      有小数参与运算，结果有可能不精确
        System.out.println(10/3.0);//3.3333333333333335
//
        System.out.println(10%2);//0
//
        System.out.println(10%3);//1
        System.out.println('a' + "ture");
    }
}
