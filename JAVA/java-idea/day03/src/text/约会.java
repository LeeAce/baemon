package text;

import java.util.Scanner;

public class 约会 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入我的时髦值（1~10）：");
        int a = sc.nextInt();
        System.out.println("请输入相亲对象的时髦值（1~10）：");
        int b = sc.nextInt();
        boolean i = a>b;
        System.out.println(i);
//        boolean j = a<=b;
//        System.out.println(j);
    }
}
