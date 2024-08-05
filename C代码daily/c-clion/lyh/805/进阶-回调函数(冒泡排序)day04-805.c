//
// Created by PC on 2024/8/5.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*冒泡排序*/
/*
void bubble_sort(int* arr,int len){
    for (int i = 0; i < len-1; ++i) {
        for (int j = 0; j < len-1-i; ++j) {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int arr[]={1,2,7,8,9,3,4,5,6,10};
    int len = sizeof(arr)/sizeof(int);
    bubble_sort(arr,len);
    for (int i = 0; i < len; ++i) {
        printf("%d ",arr[i]);
    }
    return 0;
}
 */
/*冒泡排序优化*/
/*
void bubble_sort(int* arr,int len){
    for (int i = 0; i < len-1; ++i) {
        int flag = 1;
        for (int j = 0; j < len-1-i; ++j) {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 0;
            }
        }
        if(flag == 1){
            break;
        }
    }
}
int main() {
    int arr[]={1,2,7,8,9,3,4,5,6,10};
    int len = sizeof(arr)/sizeof(int);
    bubble_sort(arr,len);
    for (int i = 0; i < len; ++i) {
        printf("%d ",arr[i]);
    }
    return 0;
}
*/

/*上面的代码只能用于整形元素排序*/
/*qsort函数,快速排序思想*/
//int cmp_int(const void* e1,const void* e2){
//    /*
//    if(*(int*)e1 > *(int*)e2){
//        return 1;
//    }else if(*(int*)e1 == *(int*)e2){
//        return 0;
//    }else{
//        return -1;
//    }
//     */
//    return (*(int*)e1 - *(int*)e2);
//    /*实现倒序*/
//    /*return (*(int*)e2 - *(int*)e1);*/
//}
//int main() {
//    int arr[]={1,2,7,8,9,3,4,5,6,10};
//    int len = sizeof(arr)/sizeof(int);
//    qsort(arr,len, sizeof(int),cmp_int);
//    for (int i = 0; i < len; ++i) {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}

/*利用qsort函数将结构体中根据name进行排序*/
/*字符串比较是对字符串的字符一个一个进行比较*/
/*
struct Stu{
    char name[20];
    int age;
};
int cmp_stu_by_name(const void* e1,const void* e2){
    return strcmp(((struct Stu*)e1)->name ,((struct Stu*)e2)->name);
}
int main(){
    struct Stu s[]={{"lisi",20},{"zhangsan",19},{"wangwu",22}};
    int len = sizeof(s)/sizeof(struct Stu);
    qsort(s,len,sizeof(struct Stu),cmp_stu_by_name);
    for (int i = 0; i < len; ++i) {
        printf("%s %d\n",s[i].name,s[i].age);
    }
}
 */
/*利用qsort函数将结构体中根据age进行排序*/
/*
struct Stu {
    char name[20];
    int age;
};

int cmp_stu_by_age(const void *e1, const void *e2) {
    return ((struct Stu *) e1)->age - ((struct Stu *) e2)->age;
}

int main() {
    struct Stu s[] = {{"lisi",     20},
                      {"zhangsan", 19},
                      {"wangwu",   22}};
    int len = sizeof(s) / sizeof(struct Stu);
    qsort(s, len, sizeof(struct Stu), cmp_stu_by_age);
    for (int i = 0; i < len; ++i) {
        printf("%-20s %d\n", s[i].name, s[i].age);
    }
}
*/

/*测试使用qsort来排序结构数据*/
/*难点重要理解*/
struct Stu {
    char name[20];
    int age;
};

void Swap(char *buf1, char *buf2, int width) {
    int i = 0;
    for (i = 0; i < width; i++) {
        char tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;
        buf1++;
        buf2++;
    }
}

void bubble_sort(void *base, int sz, int width, int(*cmp)(const void *e1, const void *e2)) {
    int i = 0;
    //趟数
    for (i = 0; i < sz - 1; i++) {
        int flag = 1;//假设数组是排好序
        //一趟冒泡排序的过程
        int j = 0;
        for (j = 0; j < sz - 1 - i; j++) {
            if (cmp((char *) base + j * width, (char *) base + (j + 1) * width) > 0) {
                //交换
                Swap((char *) base + j * width, (char *) base + (j + 1) * width, width);
                flag = 0;
            }
        }
        if (flag == 1) {
            break;
        }
    }
}

int cmp_stu_by_name(const void *e1, const void *e2) {
    //strcmp --> >0 ==0 <0
    return strcmp(((struct Stu *) e1)->name, ((struct Stu *) e2)->name);
}

void test4() {
    //测试使用qsort来排序结构数据
    struct Stu s[] = {{"zhangsan", 15},
                      {"lisi",     30},
                      {"wangwu",   25}};
    int sz = sizeof(s) / sizeof(s[0]);
    bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
    //bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

int main() {
    test4();
    return 0;
}