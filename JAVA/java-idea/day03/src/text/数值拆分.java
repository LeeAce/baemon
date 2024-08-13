package text;

import java.util.Scanner;

public class 数值拆分 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入一个三位数整数：");
        int number = sc.nextInt();
        int ge = number%10;
        int shi = number/10%10;
        int bai = number/10/10%10;
//
        System.out.println("个位是：" + ge);
        System.out.println("十位是：" + shi);
        System.out.println("百位是：" + bai);
    }
}
