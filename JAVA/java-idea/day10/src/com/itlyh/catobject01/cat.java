//package com.itlyh.catobject01;
//
//class cat{
//    String name;
//    int age;
//    String color;
//}
//
//public class cat {
//    public static void main(String[] args) {
//        cat cat1 = new cat();
//        cat1.name = "小白";
//        cat1.age = 3;
//        cat1.color = "白色";
//        cat cat2 = new cat();
//        cat2.name = "小花";
//        cat2.age = 100;
//        cat2.color = "花色";
//        System.out.println("cat1.name=" + cat1.name + ", cat1.age=" + cat1.age + ", cat1.color=" + cat1.color);
//        System.out.println("cat2.name=" + cat2.name + ", cat2.age=" + cat2.age + ", cat2.color=" + cat2.color);
//    }
//}




package com.itlyh.catobject01;

class Cat{
    String name;
    int age;
    String color;
}

public class Cat {
    public static void main(String[] args) {
        Cat cat1 = new Cat();
        cat1.name = "小白";
        cat1.age = 3;
        cat1.color = "白色";
        Cat cat2 = new Cat();
        cat2.name = "小花";
        cat2.age = 100;
        cat2.color = "花色";
        System.out.println("cat1.name=" + cat1.name + ", cat1.age=" + cat1.age + ", cat1.color=" + cat1.color);
        System.out.println("cat2.name=" + cat2.name + ", cat2.age=" + cat2.age + ", cat2.color=" + cat2.color);
    }
}