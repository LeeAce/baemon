package com.itlyh.text2;

public class Boyfriend {

    private String name;
    private int age;
    private String gander;

    public void setName(String name){
        this.name = name;
    }
    public String getName(){
        return name;
    }

    public void setAge(int age){
        if(age >= 18 && age < 28){
            this.age = age;
        }else{
            System.out.println("非法参数");
        }
    }
    public int getAge(){
        return age;
    }

    public void setGander(String gander){
        this.gander = gander;
    }
    public String getGander(){
        return gander;
    }



    public void playgame() {
        System.out.println("Boyfriend is playing a game");
    }

    public void watchmovie() {
        System.out.println("Boyfriend is watching a movie");
    }
}
