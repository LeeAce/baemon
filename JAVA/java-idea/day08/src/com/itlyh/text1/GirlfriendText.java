package com.itlyh.text1;

public class GirlfriendText {
    public static void main(String[] args) {
        //创建女朋友的对象
        Girlfriend gf1 = new Girlfriend();

        gf1.name = "CHIQUITA";
        gf1.age = 18;
        gf1.gender ="女";

        System.out.println(gf1.name);
        System.out.println(gf1.age);
        System.out.println(gf1.gender);


        gf1.eat();
        gf1.sleep();
        System.out.println("============================================================================");
        Girlfriend gf2 = new Girlfriend();

        gf2.name = "CHIQUITA";
        gf2.age = 18;
        gf2.gender ="女";

        System.out.println(gf2.name);
        System.out.println(gf2.age);
        System.out.println(gf2.gender);


        gf2.eat();
        gf2.sleep();
    }
}
