//
// Created by PC on 2024/8/4.
//
#include <stdio.h>

/*函数指针*/
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
    return 0;
}