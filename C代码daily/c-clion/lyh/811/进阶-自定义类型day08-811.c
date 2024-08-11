//
// Created by PC on 2024/8/11.
//
#include <stdio.h>

//struct Stu{
//    char str[20];
//    int age;
//};

//struct Stu{
//    char str[20];
//    int age;
//}s1,s2;
//int main(){
//    struct Stu s3;
//    return 0;
//}





//struct {
//    char str[20];
//    int age;
//}s4;

//struct {
//    int a;
//    char b;
//    float c;
//} x;
//struct {
//    int a;
//    char b;
//    float c;
//} a[20], *p;
//int main(){
//    p = &x;//为不同结构体类型
//    return 0;
//}





/*结构体自引用-包含同类型的结构体类型指针*/
/*error*/
//struct node{
//    int data;
//    struct node next;
//};
//int main(){
//    printf("%d\n",sizeof(struct node));
//    return 0;
//}
/*right*/
//struct node{
//    int data;
//    struct node* next;
//};
//int main(){
//    printf("%d\n",sizeof(struct node));
//    return 0;
//}
/*结构体自引用不能写匿名结构体类型*/
/*error*/
//typedef struct{
//    int data;
//    node* next;
//}node;
/*right*/
//typedef struct node{
//    int data;
//    struct node* next;
//}node;





/*指针类型*/
/*第一种*/
//typedef struct node{
//    int data;
//    struct node* next;
//}* linklist;
/*第二种*/
//struct node{
//    int data;
//    struct node* next;
//};
//typedef struct node* linklist;





/*定义&初始化*/
//struct stu {
//    char name[20];
//    int age;
//} s1 = {"lyh", 21};
//struct stu s2 = {"cmy", 20};

//struct score {
//    int math;
//    int ranking;
//};
//struct stu{
//    char name[20];
//    int age;
//    struct score s1;
//};
//int main() {
//    struct stu p1={"lyh",21,{100,1}};
//    printf("%s %d %d %d",p1.name,p1.age,p1.s1.math,p1.s1.ranking);
//    return 0;
//}
