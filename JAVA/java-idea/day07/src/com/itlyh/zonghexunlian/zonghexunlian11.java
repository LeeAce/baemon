package com.itlyh.zonghexunlian;
import java.util.Random;
import java.util.Scanner;
public class zonghexunlian11 {
    public static void main(String[] args) {
        // 1.生成中奖号码
        int[] arr = getarr();

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println(" ");
        //2.用户输入彩票号码（红球 + 蓝球）
        int[] userarr = getuserarr();
        for (int i = 0; i < userarr.length; i++) {
            System.out.print(userarr[i] + " ");
        }
        System.out.println(" ");
        //3.判断用户的中奖情况
        int redcount = 0;
        int bluecount = 0;
        for (int i = 0; i < arr.length-1; i++) {
            int temp = arr[i];
            for (int j = 0; j < userarr.length-1; j++) {
                if (temp == userarr[j]) {
                    redcount++;
                    break;
                }
            }
        }
        if (arr[arr.length-1] == userarr[userarr.length-1]) {
            bluecount++;
        }
        System.out.println(redcount + " " + bluecount);
        //根据红球的个数以及蓝球的个数来判断中奖情况
        if(redcount == 6 && bluecount == 1){
            System.out.println("恭喜你，中奖1000万");
        }else if(redcount == 6 && bluecount == 0){
            System.out.println("恭喜你，中奖500万");
        }else if(redcount == 5 && bluecount == 1){
            System.out.println("恭喜你，中奖3000");
        }else if((redcount == 5 && bluecount == 0) ||  (redcount == 4 && bluecount == 1)){
            System.out.println("恭喜你，中奖200");
        }else if((redcount == 4 && bluecount == 0) ||  (redcount == 3 && bluecount == 1)){
            System.out.println("恭喜你，中奖10");
        }else if((redcount == 2 && bluecount == 1) ||  (redcount == 1 && bluecount == 1)|| (redcount == 0 && bluecount == 1)){
            System.out.println("恭喜你，中奖5");
        }else{
            System.out.println("谢谢参与，谢谢惠顾");
        }
    }
    public static int[] getuserarr() {
        int[] arr = new int[7];
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < arr.length-1; ) {
            System.out.println("请输入第" + (i + 1) + "个红球号码(1~33)：");
            int number = sc.nextInt();
            if (number >= 1 && number <= 33) {
                boolean flag = contions(arr, number);
                if (!flag) {
                    arr[i] = number;
                    i++;
                } else {
                    System.out.println("当前号码已存在，请重请输入！");
                }
            } else {
                System.out.println("当前号码不合规定！");
            }
        }
        while (true) {
            System.out.println("请输入蓝球号码(1~16)：");
            int number = sc.nextInt();
            if (number >= 1 && number <= 16) {
                arr[arr.length - 1] = number;
                break;
            } else {
                System.out.println("当前蓝球号码不合规定！");
            }
        }
        return arr;
    }
    public static int[] getarr() {
        int[] arr = new int[7];
        Random r = new Random();
        for (int i = 0; i < arr.length-1; ) {
            int index1 = r.nextInt(33) + 1;
            boolean flag = contions(arr, index1);
            if (!flag) {
                arr[i] = index1;
                i++;
            }
        }
        int index2 = r.nextInt(16) + 1;
        arr[arr.length - 1] = index2;
        return arr;
    }
    public static boolean contions(int arr[], int number) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == number) {
                return true;
            }
        }
        return false;
    }
}