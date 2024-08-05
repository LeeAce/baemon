//
// Created by PC on 2024/8/4.
//
#include <stdio.h>

/*函数指针*/
/*
int add(int x,int y){
    return x+y;
}
int main() {
    setbuf(stdout, NULL);
    int (*pf)(int,int) = &add;
//    int (*pf)(int,int) = add;
    int ret = (*pf)(3,6);
//    int ret = pf(3,6);
    printf("%d \n",ret);

    printf("%d \n",sizeof(&add));
    printf("%d \n",sizeof(pf));

    (*(void(*)())0)();
    return 0;
}
*/


/*计算器*/
/*第一种*/
/*
void menu() {
    printf("*****************************\n");
    printf("****         菜单         ****\n");
    printf("****        1.加法        ****\n");
    printf("****        2.减法        ****\n");
    printf("****        3.乘法        ****\n");
    printf("****        4.除法        ****\n");
    printf("****        0.退出        ****\n");
    printf("*****************************\n");
}
int Add(int x,int y){
    return x+y;
}
int Sub(int x,int y){
    return x-y;
}
int Mul(int x,int y){
    return x*y;
}
int Div(int x,int y){
    return x/y;
}
int main() {
    setbuf(stdout, NULL);
    int input = 0;
    int x = 0;
    int y = 0;
    int ret = 0;
    do {
        menu();
        printf("请输入选择->");
        scanf("%d", &input);
        if(input>0 && input<=4){
            printf("请输入两个操作数->");
            scanf("%d %d", &x,&y);
        }
        switch(input){
            case 1:
                ret = Add(x,y);
                printf("%d\n",ret);
                break;
            case 2:
                ret = Sub(x,y);
                printf("%d\n",ret);
                break;
            case 3:
                ret = Mul(x,y);
                printf("%d\n",ret);
                break;
            case 4:
                ret = Div(x,y);
                printf("%d\n",ret);
                break;
            case 0:
                printf("退出程序！");
                break;
            default:
                printf("选择不合理，请重新选择！\n");
                break;
        }
    } while (input);
}
*/
/*第二种——在case1.2.3.4中出现代码冗余*/
/*
void menu() {
    printf("*****************************\n");
    printf("****         菜单         ****\n");
    printf("****        1.加法        ****\n");
    printf("****        2.减法        ****\n");
    printf("****        3.乘法        ****\n");
    printf("****        4.除法        ****\n");
    printf("****        0.退出        ****\n");
    printf("*****************************\n");
}
int Add(int x,int y){
    return x+y;
}
int Sub(int x,int y){
    return x-y;
}
int Mul(int x,int y){
    return x*y;
}
int Div(int x,int y){
    return x/y;
}
int main() {
    setbuf(stdout, NULL);
    int input = 0;
    int x = 0;
    int y = 0;
    int ret = 0;
    do {
        menu();
        printf("请输入选择->");
        scanf("%d", &input);
        switch(input){
            case 1:
                printf("请输入两个操作数->");
                scanf("%d %d", &x,&y);
                ret = Add(x,y);
                printf("%d\n",ret);
                break;
            case 2:
                printf("请输入两个操作数->");
                scanf("%d %d", &x,&y);
                ret = Sub(x,y);
                printf("%d\n",ret);
                break;
            case 3:
                printf("请输入两个操作数->");
                scanf("%d %d", &x,&y);
                ret = Mul(x,y);
                printf("%d\n",ret);
                break;
            case 4:
                printf("请输入两个操作数->");
                scanf("%d %d", &x,&y);
                ret = Div(x,y);
                printf("%d\n",ret);
                break;
            case 0:
                printf("退出程序！");
                break;
            default:
                printf("选择不合理，请重新选择！\n");
                break;
        }
    } while (input);
}
*/
/*第三种，使用函数指针将case1.2.3.4中冗余代码封装*/
/*
void menu() {
    printf("*****************************\n");
    printf("****         菜单         ****\n");
    printf("****        1.加法        ****\n");
    printf("****        2.减法        ****\n");
    printf("****        3.乘法        ****\n");
    printf("****        4.除法        ****\n");
    printf("****        0.退出        ****\n");
    printf("*****************************\n");
}
int Add(int x,int y){
    return x+y;
}
int Sub(int x,int y){
    return x-y;
}
int Mul(int x,int y){
    return x*y;
}
int Div(int x,int y){
    return x/y;
}
void calc(int (*pf)(int,int)){
    int x = 0;
    int y = 0;
    int ret;
    printf("请输入两个操作数->");
    scanf("%d %d", &x,&y);
    ret = pf(x,y);
    printf("%d\n",ret);
}
int main() {
    setbuf(stdout, NULL);
    int input = 0;
    do {
        menu();
        printf("请输入选择->");
        scanf("%d", &input);
        switch(input){
            case 1:
                calc(Add);
                break;
            case 2:
                calc(Sub);
                break;
            case 3:
                calc(Mul);
                break;
            case 4:
                calc(Div);
                break;
            case 0:
                printf("退出程序！");
                break;
            default:
                printf("选择不合理，请重新选择！\n");
                break;
        }
    } while (input);
}
*/

/*函数指针数组*/
/*
void menu() {
    printf("*****************************\n");
    printf("****         菜单         ****\n");
    printf("****        1.加法        ****\n");
    printf("****        2.减法        ****\n");
    printf("****        3.乘法        ****\n");
    printf("****        4.除法        ****\n");
    printf("****        0.退出        ****\n");
    printf("*****************************\n");
}

int Add(int x, int y) {
    return x + y;
}

int Sub(int x, int y) {
    return x - y;
}

int Mul(int x, int y) {
    return x * y;
}

int Div(int x, int y) {
    return x / y;
}

int main() {
    setbuf(stdout, NULL);
    int input, x, y, ret;
    do {
        menu();
        printf("请输入选择->");
        scanf("%d", &input);
        int (*pfArr[5])(int, int) ={0, Add, Sub, Mul, Div};
        if (input == 0) {
            printf("退出程序！");
        } else if (input >= 1 && input <= 4) {
            printf("请输入两个操作数->");
            scanf("%d %d", &x, &y);
            ret = pfArr[input](x, y);
            printf("%d\n", ret);
        } else {
            printf("选择不合理，请重新选择！\n");
        }
    } while (input);
}
*/
/*函数指针数组将else if的内容还原成函数封装*/
/*
void menu() {
    printf("*****************************\n");
    printf("****         菜单         ****\n");
    printf("****        1.加法        ****\n");
    printf("****        2.减法        ****\n");
    printf("****        3.乘法        ****\n");
    printf("****        4.除法        ****\n");
    printf("****        0.退出        ****\n");
    printf("*****************************\n");
}

int Add(int x, int y) {
    return x + y;
}

int Sub(int x, int y) {
    return x - y;
}

int Mul(int x, int y) {
    return x * y;
}

int Div(int x, int y) {
    return x / y;
}
void calc(int (*pf)(int,int)){
    int x, y, ret;
    printf("请输入两个操作数->");
    scanf("%d %d", &x, &y);
    ret = pf(x, y);
    printf("%d\n", ret);
}
int main() {
    setbuf(stdout, NULL);
    int input, x, y, ret;
    do {
        menu();
        printf("请输入选择->");
        scanf("%d", &input);
        int (*pfArr[5])(int, int) ={0, Add, Sub, Mul, Div};
        if (input == 0) {
            printf("退出程序！");
        } else if (input >= 1 && input <= 4) {
            calc(pfArr[input]);
        } else {
            printf("选择不合理，请重新选择！\n");
        }
    } while (input);
}
*/

/*函数&指针*/
/*函数名-> int arr(int,int) */
/*函数指针-> int (*pf)(int,int) */
/*函数指针数组-> int (*pfArr[5])(int,int) */
/*函数指针数组指针-> int (*(*ppfArr)[5])(int,int) */
































































