//
// Created by PC on 2024/8/11.
//
#include <stdio.h>
#include <stddef.h>

#pragma once//头文件中使用，功能是：防止头文件被多次引用

//struct S1 {
//    char c1;//1
//    int i;//4
//    char c2;//1
//};
//
//struct S2 {
//    char c1;//1
//    char c2;//1
//    int i;//4
//};
//
//struct S3 {
//    double d;
//    char c;
//    int i;
//};
//
//struct S4 {
//    char c1;
//    struct S3 s3;
//    double d;
//};
//
//int main() {
//    struct S1 s1;
//    struct S2 s2;
//
//    printf("%d\n", sizeof(struct S1));
//    printf("%d\n", sizeof(struct S2));
//    printf("%d\n", sizeof(struct S3));
//    printf("%d\n", sizeof(struct S4));
//
//
//    printf("%d\n", offsetof(struct S1, c1));
//    printf("%d\n", offsetof(struct S1, i));
//    printf("%d\n", offsetof(struct S1, c2));
//
//    printf("%d\n", offsetof(struct S2, c1));
//    printf("%d\n", offsetof(struct S2, c2));
//    printf("%d\n", offsetof(struct S2, i));
//
//    return 0;
//}





//#pragma pack(4)//设置对齐数
//struct S1 {
//    int i;//4 4 4 0~3
//    double d;//8 4 4 4~11
//};
//#pragma pack()//取消
//int main() {
//    printf("%d\n", sizeof(struct S1));
//    return 0;
//}


//struct S{
//    int data[1000];
//    int num;
//};
//
//void print1(struct S ss) {
//    for (int i = 0; i < 3; ++i) {
//        printf("%d ",ss.data[i]);
//    }
//    printf("%d \n",ss.num);
//}
//void print2(const struct S* ss){
//    for (int i = 0; i < 3; ++i) {
//        printf("%d ",ss->data[i]);
//    }
//    printf("%d \n",ss->num);
//}
//
//int main() {
//    struct S s = {{1, 2, 3}, 100};
//    print1(s);
//    print2(&s);
//}
