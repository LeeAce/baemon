package text;

import java.util.Scanner;

public class 三个和尚 {
    public static void main(String[] args) {
        int a1=150;
        int a2=210;
        int a3=165;
        int temp = a1>a2?a1:a2;
        int temp2 = temp>a3?temp:a3;
        System.out.println(temp2);
    }
}
