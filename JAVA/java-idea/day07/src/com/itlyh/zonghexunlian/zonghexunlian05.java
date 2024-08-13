package com.itlyh.zonghexunlian;

import java.util.Scanner;

public class zonghexunlian05 {
    public static void main(String[] args) {
       int []scorearr = getscorearr();
//       for (int i = 0; i < scorearr.length; i++) {
//           System.out.println(scorearr[i]);
//       }

       int max = getmax(scorearr);
       int min = getmin(scorearr);
       int sum = getsum(scorearr);
       double avg = (sum - max - min) / (scorearr.length - 2);
        System.out.println("最终得分为：" + avg);
    }

    public static int getsum(int []scorearr) {
        int sum = 0;
        for (int i = 0; i < scorearr.length; i++) {
            sum += scorearr[i];
        }
        return sum;
    }
    public static int getmax(int []scorearr){
        int max = scorearr[0];
        for (int i = 1; i < scorearr.length; i++) {
            if(scorearr[i] > max){
                max = scorearr[i];
            }
        }
        return max;
    }
    public static int getmin(int []scorearr){
        int min = scorearr[0];
        for (int i = 1; i < scorearr.length; i++) {
            if(scorearr[i] < min){
                min = scorearr[i];
            }
        }
        return min;
    }

    public static int[] getscorearr(){
        int []score = new int[6];
        Scanner sc = new Scanner(System.in);
        for(int i=0;i<score.length;){
            System.out.println("请输入第"+ (i+1) +"个分数");
            int scores = sc.nextInt();
            if(scores > 0 && scores <= 100){
                score[i] = scores;
                i++;
            }else{
                System.out.println("输入的数据不合规定！");
            }
        }
        return score;
    }
}
