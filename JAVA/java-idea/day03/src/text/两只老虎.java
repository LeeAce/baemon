package text;

import java.util.Scanner;

public class 两只老虎 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入第一个老虎的体重：");
        int a = sc.nextInt();
        System.out.println("请输入第二个老虎的体重：");
        int b = sc.nextInt();
        String middle = a==b ?"相同":"不相同";
        System.out.println(middle);
    }
}
