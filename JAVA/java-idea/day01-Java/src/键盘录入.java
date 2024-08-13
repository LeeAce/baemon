//        导包，找到scanner这个类在哪里
import java.util.Scanner;
public class 键盘录入 {
    public static void main(String[] args) {
//     创建对象；使用scanner类；sc是变量名，可以更改
//        Scanner sc = new Scanner(System.in);
//      提示输入
//        System.out.println("请输入一个整数");
//      输出;接受数据
//      变量i记录了键盘录入的数据
//        int i = sc.nextInt();
//        System.out.println(i);
/*
        Scanner lyh = new Scanner (System.in);
        System.out.println("请输入一个整数");
        int i = lyh.nextInt();
        System.out.println(i);*/
//        输入两个数
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入第一个整数");
        int n1 = sc.nextInt();
        System.out.println("请输入第二个整数");
        int n2 = sc.nextInt();
        System.out.println(n1+n2);


    }
}