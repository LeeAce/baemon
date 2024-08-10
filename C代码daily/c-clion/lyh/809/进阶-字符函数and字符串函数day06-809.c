////
//// Created by PC on 2024/8/9.
////
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <ctype.h>
//
//size_t my_strlen(char *arr) {
//    size_t count;
//    assert(arr);
//    while (*arr != '\0') {
//        count++;
//        arr++;
//    }
//    return count;
//}
//
//char *my_strcpy(char *dest, const char *src) {
//    assert(dest && src);
//    char *ret = dest;
//    while (*dest++ = *src++);
//    return ret;
//}
//
//char *my_strcat(char *dest, const char *src) {
//    char *ret;
//    assert(dest && src);
//    while (*dest != '\0') {
//        dest++;
//    }
//    while (*dest++ = *src++);
//    return ret;
//}
//
//int my_strcmp(const char *arr1, const char *arr2) {
//    assert(arr1 && arr2);
//    while (*arr1 == *arr2) {
//        if (*arr1 == '\0') {
//            return 0;
//        }
//        *arr1++;
//        *arr2++;
//    }
//    return (*arr1 - *arr2);
//}
//
///*重点理解难点*/
//char *my_strstr(const char *str1, const char *str2) {
//    assert(str1 && str2);
//    const char *s1 = str1;
//    const char *s2 = str2;
//    const char *p = str1;
//
//    while (*p) {
//        s1 = p;
//        s2 = str2;
//        while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
//            s1++;
//            s2++;
//        }
//        if (*s2 == '\0') {
//            return (char *) p;
//        }
//        p++;
//    }
//    return NULL;
//}
//
//void *my_memcpy(void *dest, const void *src, size_t num) {
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
//int main() {
//    /*strlen长度函数*/
//    char arr1[] = "lyhcmy";
//    char arr2[] = {'l', 'y', 'h', 'c', 'm', 'y'};
//    int len1 = strlen(arr1);
//    int len2 = strlen(arr2);
//    int len3 = my_strlen(arr1);
//    int len4 = my_strlen(arr2);
//    printf("%d\n", len1);
//    printf("%d\n", len2);
//    printf("%d\n", len3);
//    printf("%d\n", len4);
//
//    /*strcpy复制函数*/
//    char arr3[20] = "";
//    char arr4[] = "lyhcmy";
////    strcpy(arr3,arr4);
//    my_strcpy(arr3, arr4);
//    printf("%s\n", arr3);
//
//    /*strcat追加函数*/
//    char arr5[20] = "hello ";
////    strcat(arr5,"world!");
//    my_strcat(arr5, "world!");
//    printf("%s\n", arr5);
//
//    /*strcmp比较函数*/
//    char arr6[] = "abcdef";
//    char arr7[] = "abp";
////    int num=strcmp(arr6,arr7);
//    int num = my_strcmp(arr6, arr7);
//    if (num < 0) {
//        printf("<\n");
//    } else if (num == 0) {
//        printf("==\n");
//    } else {
//        printf(">\n");
//    }
//
///*长度受限制*/
///*strncpy*/
///*strncmp*/
///*strncat*/
//
//    /*strstr函数*/
//    char str1[] = "lyhcmylll";
//    char str2[] = "cmy";
////    char* ret = strstr(str1,str2);
//    char *ret = my_strstr(str1, str2);
//    if (ret == NULL) {
//        printf("子串不存在！");
//    } else {
//        printf("%s\n", ret);
//    }
//
//    /*strtok切断函数*/
//    char str3[] = "lyh@cmy.com";
//    const char *sep = "@.";
//    char str4[30] = {0};
//    strcpy(str4, str3);
//    for (char *ret2 = strtok(str4, sep); ret2 != NULL; ret2 = strtok(NULL, sep)) {
//        printf("%s\n", ret2);
//    }
//    /*
//    char* ret2 = strtok(str4,sep);
//    if(ret2 != NULL)
//    printf("%s\n",ret2);
//    ret2 = strtok(NULL,sep);
//    if(ret2 != NULL)
//    printf("%s\n",ret2);
//    ret2 = strtok(NULL,sep);
//    if(ret2 != NULL)
//    printf("%s\n",ret2);
//    */
//
//    /*strerror函数*/
//    printf("%s\n", strerror(0));
//    printf("%s\n", strerror(1));
//    printf("%s\n", strerror(2));
//    printf("%s\n", strerror(3));
//    printf("%s\n", strerror(4));
//    printf("%s\n", strerror(5));
//    /*
//    FILE *p = fopen("text.txt", "r");
//    printf("%s\n", strerror(errno));
//    if (p == NULL) {
//        printf("%s\n", strerror(errno));
//        return 1;
//    } else {
//
//    }
//    */
//
//    /*字符分类函数*/
//    int a = isspace('l');
//    printf("%d\n", a);
//    int a1 = isspace(' ');
//    printf("%d\n", a1);
//    int a2 = isdigit('x');
//    printf("%d\n", a2);
//
//    /*字符转化函数*/
//    printf("%c\n", tolower('W'));
//    printf("%c\n", toupper('w'));
//    printf("%c\n", tolower('@'));
//    printf("%c\n", toupper('@'));
//
//    /*memcpy内存拷贝函数*/
//    int arr8[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int arr9[10] = {0};
////    memcpy(arr9, arr8, 28);
//    my_memcpy(arr9, arr8, 28);
//    int length = sizeof(arr9) / sizeof(arr9[0]);
//    for (int i = 0; i < length; i++) {
//        printf("%d ", arr9[i]); // 打印数组元素
//    }
//    printf("\n");
//    float arr10[5] = {1.0, 2.5, 3.0, 5.0, 6.0};
//    float arr11[10] = {0.0};
//    memcpy(arr11, arr10, 20);
//    int length1 = sizeof(arr10) / sizeof(arr10[0]);
//    for (int i = 0; i < length1; i++) {
//        printf("%.2f ", arr11[i]); // 打印数组元素
//    }
//    return 0;
//}
