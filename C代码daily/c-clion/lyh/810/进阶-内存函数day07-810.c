////
//// Created by PC on 2024/8/10.
////
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void *my_memcpy(void *dest, const void *src, size_t num)//1
//{
//    assert(dest && src);
//    void *ret = dest;
//    while (num--) {
//        *(char *) dest = *(char *) src;
//        dest = (char *) dest + 1;
//        src = (char *) src + 1;
//    }
//    return ret;
//}
//
//void *my_memmove(void *dest, const void *src, size_t num) {
//    assert(dest && src);
//    void *ret = dest;
//
//    if (dest < src) {
//        //前->后
//        while (num--) {
//            *(char *) dest = *(char *) src;
//            dest = (char *) dest + 1;
//            src = (char *) src + 1;
//        }
//    } else {
//        //后->前
//        while (num--) {
//            *((char *) dest + num) = *((char *) src + num);
//        }
//    }
//    return ret;
//}
//
//int main() {
//    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int arr2[20] = {0};
//    memcpy(arr2, arr1, 20);
////    memcpy(arr1 + 2, arr1, 20);
////    my_memcpy(arr2, arr1, 20);
////    my_memcpy(arr1+2, arr1, 20);
//    for (int i = 0; i < 5; i++) {
//        printf("%d ", arr2[i]);
//    }
//    printf("\n");
////    memmove(arr1 + 2, arr1, 20);
////    my_memmove(arr1 + 2, arr1, 20);
//    my_memmove(arr1, arr1 + 2, 20);
//    for (int i = 0; i < 10; i++) {
//        printf("%d ", arr1[i]);
//    }
//    printf("\n");
//    int arr3[] = { 1,2,3,4,5 };//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	int arr4[] = { 1,3,2 };    //01 00 00 00 03 00 00 00 02 00 00 00
//	int ret = memcmp(arr3, arr4, 12);
//	printf("%d\n", ret);
//
//    char arr[] = "hello lyh";
////    memset(arr, 'x', 5);
//    memset(arr+6, 'x', 3);
//    printf("%s\n", arr);
//    return 0;
//}
