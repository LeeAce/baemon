//
// Created by PC on 2024/8/12.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main() {
//    //静态
//    int arr[10]={0};
//    //动态内存开辟
//    int *p = (int *) malloc(40);
//    if (p == NULL) {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//    for (int i = 0; i < 10; ++i) {
//        *(p + i) = i;
//    }
//    for (int i = 0; i < 10; ++i) {
//        printf("%d ", *(p + i));
//    }
//    //释放-防止内存泄露
//    free(p);
//    //防止野指针
//    p = NULL;
//    return 0;
//}




//int main() {
//    //calloc动态内存开辟
//    int *p = (int *) calloc(10,sizeof(int));
//    if (p == NULL) {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//    for (int i = 0; i < 10; ++i) {
//        printf("%d ", *(p + i));//初始化为0
//    }
//    free(p);
//    p = NULL;
//    return 0;
//}





//int main() {
//    //realloc动态内存开辟
//    int *p = (int *) malloc(40);
//    if (p == NULL) {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//    //使用
//    for (int i = 0; i < 10; ++i) {
//        *(p + i) = i + 1;
//    }
//    //扩容
//    int *pp = (int *) realloc(p, 80);
//    if (pp != NULL) {
//        p = pp;
//    }
//    //打印使用
//    for (int i = 0; i < 10; ++i) {
//        printf("%d ", *(p + i));
//    }
//    free(p);
//    p = NULL;
//    return 0;
//}


//int main() {
//    int *p = (int *) realloc(NULL, 40);
//    //等价于
//    int *pp = (int *) malloc(40);
//    return 0;
//}

/*文件*/
//int main(){
//    FILE* pf = fopen("test.txt","r");
//    if(pf == NULL){
//        printf("%s\n",strerror(errno));
//        return 1;
//    }
//    fclose(pf);
//    pf =NULL;
//    return 0;
//}




