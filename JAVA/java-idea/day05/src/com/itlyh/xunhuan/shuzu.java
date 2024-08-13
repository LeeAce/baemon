package com.itlyh.xunhuan;

public class shuzu {
    public static void main(String[] args) {
        int []age = new int[]{18,25,21,19,20};
        int []age1 = {18,25,21,19,20};
        double []height = new double[]{193.2,187.2,178.3,180.8};
        double []height1 = {193.2,187.2,178.3,180.8};
        String []name = new String[]{"李远航","夏之光","郑雅娴"};
        String []name1 = {"李远航","夏之光","郑雅娴"};
//        System.out.println(age[2]);
        age1[3]= 36;
//        System.out.println(age1[3]);
        /*int sum =0;
        for (int i = 0; i < age.length; i++) {

            sum += age[i];
        }
        System.out.println(sum);*/

        /*int count=0;
        for (int i = 0; i < age.length; i++) {
            if (age[i] % 3 == 0) {
                count++;
            }
        }
        System.out.println(count);*/

        int []num={1,2,3,4,5,6,7,8,9,10};
        for (int i = 0; i < num.length; i++) {
            if (num[i]%2==0){
                System.out.println(num[i]/2);

            } else if (num[i]%2!=0) {
                System.out.println(num[i]*2);

            }
        }


    }
}
