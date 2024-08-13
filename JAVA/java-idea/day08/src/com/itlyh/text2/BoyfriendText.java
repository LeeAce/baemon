package com.itlyh.text2;

public class BoyfriendText {
    public static void main(String[] args) {

        Boyfriend bf =new Boyfriend();
        bf.setName("CHUQUITA");
        bf.setAge(18);
        bf.setGander("男");
        System.out.println(bf.getName());
        System.out.println(bf.getAge());
        System.out.println(bf.getGander());

        bf.playgame();
        bf.watchmovie();
    }
}
