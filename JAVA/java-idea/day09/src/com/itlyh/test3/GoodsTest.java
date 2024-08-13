package com.itlyh.test3;

public class GoodsTest {
    public static void main(String[] args) {
        Goods[] arr = new Goods[3];

        Goods g1 = new Goods("001", "华为p40", 5999.0, 100);
        Goods g2 = new Goods("002", "金子", 729.0, 50);
        Goods g3 = new Goods("002", "爱马仕", 29999.0, 5);

        arr[0] = g1;
        arr[1] = g2;
        arr[2] = g3;

        for (int i = 0; i < arr.length; i++) {
            Goods goods = arr[i];
            System.out.println(goods.getId() + " " + goods.getName() + " " + goods.getPrice() + " " + goods.getPrice());
        }
    }
}
