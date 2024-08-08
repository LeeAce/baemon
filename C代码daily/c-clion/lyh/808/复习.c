//
// Created by PC on 2024/8/8.
//
#include<stdio.h>

int main() {
    int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(&a + 1));//4/8
	printf("%d\n", sizeof(&a[0]));//4/8
	printf("%d\n", sizeof(&a[0] + 1));//4/8

	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a + 0));//4
	printf("%d\n", sizeof(*a));//4
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(a[1]));//4
	printf("%d\n", sizeof(&a));//4/8
	printf("%d\n", sizeof(*&a));//16









    return 0;
}