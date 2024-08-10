//
// Created by PC on 2024/8/3.
//
#include<stdio.h>

//int main() {
//    /*debug报错，release优化可能会让某些代码达到一些效果改变使代码不报错*/
//    int i ;
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("lyh\n");
//    }
//    return 0;
//}

/*判断数据内存是小端字符序存储模式还是大端*/
//int main() {
//    int a = 1;
//    if (*(char *) &a == 1) {
//        printf("小端\n");
//    } else {
//        printf("大端\n");
//    }
//    return 0;
//}



/*将整形数组内的技术放在前面，偶数放在后面*/
//void move_odd_even(int *arr, int len) {
//    int left = 0;
//    int right = len - 1;
//    while (left < right) {
//        while ((left < right) && (arr[left] % 2 != 0)) {
//            left++;
//        }
//        while ((left < right) && (arr[right] % 2 == 0)) {
//            right--;
//        }
//        if (left < right) {
//            int temp = arr[left];
//            arr[left] = arr[right];
//            arr[right] = temp;
//            left++;
//            right--;
//        }
//    }
//}
//int main() {
//    setbuf(stdout, NULL);
//    int arr[10] = {0};
//    int len = sizeof(arr) / sizeof(int);
//    printf("请输入存入到整形数组的数：\n");
//    for (int i = 0; i < len; i++) {
//        scanf("%d", &arr[i]);
//    }
//    move_odd_even(arr, len);
//    printf("调整后的数组：\n");
//    for (int i = 0; i < len; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}



/*两个有序序列合并为一个有序序列并输出*/
//int main() {
//    setbuf(stdout, NULL);
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[n];/*c99可以使用*/
//    int arr2[m];
//    for (int i = 0; i < n; ++i) {
//        scanf("%d", &arr1[i]);
//    }
//    for (int i = 0; i < m; ++i) {
//        scanf("%d", &arr2[i]);
//    }
//    int j = 0, k = 0;  // 初始化 j 和 k
//    while (j < n && k < m) {
//        if (arr1[j] < arr2[k]) {
//            printf("%d ", arr1[j]);
//            j++;
//        } else {
//            printf("%d ", arr2[k]);
//            k++;
//        }
//    }
//    if (j < n) {
//        for (; j < n; j++) {
//            printf("%d ", arr1[j]);
//        }
//    }
//    if (k < m) {
//        for (; k < m; k++) {
//            printf("%d ", arr2[k]);
//        }
//    }
//    printf("\n");
//    return 0;
//}
