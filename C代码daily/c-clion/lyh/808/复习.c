////
//// Created by PC on 2024/8/8.
////
//#include<stdio.h>
//#include <string.h>
//
//int main() {
//    /*
//    int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(&a + 1));
//	printf("%d\n", sizeof(&a[0]));
//	printf("%d\n", sizeof(&a[0] + 1));
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a + 0));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a + 1));
//	printf("%d\n", sizeof(a[1]));
//	printf("%d\n", sizeof(&a));
//	printf("%d\n", sizeof(*&a));
//     */
//    printf("*******************************************\n");
//    /*
//    char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr + 0));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr + 1));
//	printf("%d\n", sizeof(&arr[0] + 1));
//     */
//    printf("*******************************************\n");
//    /*
//    printf("%d\n", strlen(arr));//随机值
//	printf("%d\n", strlen(arr + 0));//随机值
////	printf("%d\n", strlen(*arr));//--> strlen('a');-->strlen(97);//野指针
////	printf("%d\n", strlen(arr[1]));//-->strlen('b')-->strlen(98);
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr + 1));//随机值-6
//	printf("%d\n", strlen(&arr[0] + 1));
//    */
//    printf("*******************************************\n");
//    /*
////	//strlen是求字符串长度的，关注的是字符串中的\0，计算的是\0之前出现的字符的个数
////	//strlen是库函数，只针对字符串
////	//sizeof只关注占用内存空间的大小，不在乎内存中放的是什么
////	//sizeof是操作符
//    char arr[] = "abcdef";
//    printf("%d\n", strlen(arr));//6
//    printf("%d\n", strlen(arr + 0));//6
//    //printf("%d\n", strlen(*arr));//err
//    //printf("%d\n", strlen(arr[1]));//err
//    printf("%d\n", strlen(&arr));//6
//    printf("%d\n", strlen(&arr + 1));//随机值
//    printf("%d\n", strlen(&arr[0] + 1));//5
//     */
//    printf("*******************************************\n");
//    /*
//    printf("%d\n", sizeof(arr));//7
//    printf("%d\n", sizeof(arr + 0));//4/8
//    printf("%d\n", sizeof(*arr));//1
//    printf("%d\n", sizeof(arr[1]));//1
//    printf("%d\n", sizeof(&arr));//4/8
//    printf("%d\n", sizeof(&arr + 1));//4/8
//    printf("%d\n", sizeof(&arr[0] + 1));//4/8
//    */
//    printf("*******************************************\n");
//    /*
//    char* p = "abcdef";
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(p + 1));
//	printf("%d\n", sizeof(*p));
//	printf("%d\n", sizeof(p[0]));
//	printf("%d\n", sizeof(&p));
//	printf("%d\n", sizeof(&p + 1));
//	printf("%d\n", sizeof(&p[0] + 1));
//     */
//    printf("*******************************************\n");
//    /*
//	printf("%d\n", strlen(p));
//	printf("%d\n", strlen(p + 1));
////	printf("%d\n", strlen(*p));
////	printf("%d\n", strlen(p[0]));
//	printf("%d\n", strlen(&p));
//	printf("%d\n", strlen(&p + 1));
//	printf("%d\n", strlen(&p[0] + 1));
//    */
//    /*
//    int a[3][4] = { 0 };
//    printf("%d\n", sizeof(a));
//    printf("%d\n", sizeof(a[0][0]));
//    printf("%d\n", sizeof(a[0]));
//    //a[0]是第一行这个一维数组的数组名，单独放在sizeof内部，a[0]表示第一个整个这个一维数组
//    //sizeof(a[0])计算的就是第一行的大小
//    printf("%d\n", sizeof(a[0] + 1));
//    //a[0]并没有单独放在sizeof内部，也没取地址，a[0]就表示首元素的地址
//    //就是第一行这个一维数组的第一个元素的地址，a[0] + 1就是第一行第二个元素的地址
//    printf("%d\n", sizeof(*(a[0] + 1)));
//    //a[0] + 1就是第一行第二个元素的地址
//    //*(a[0] + 1))就是第一行第二个元素
//    printf("%d\n", sizeof(a + 1));//4/8
//    //a虽然是二维数组的地址，但是并没有单独放在sizeof内部，也没取地址
//    //a表示首元素的地址，二维数组的首元素是它的第一行，a就是第一行的地址
//    //a+1就是跳过第一行，表示第二行的地址
//    printf("%d\n", sizeof(*(a + 1)));//16
//    //*(a + 1)是对第二行地址的解引用，拿到的是第二行
//    //*(a+1)-->a[1]
//    //sizeof(*(a+1))-->sizeof(a[1])
//    //
//    printf("%d\n", sizeof(&a[0] + 1));//4/8
//    //&a[0] - 对第一行的数组名取地址，拿出的是第一行的地址
//    //&a[0]+1 - 得到的是第二行的地址
//    //
//    printf("%d\n", sizeof(*(&a[0] + 1)));//16
//    printf("%d\n", sizeof(*a));//16
//    //a表示首元素的地址，就是第一行的地址
//    //*a就是对第一行地址的解引用，拿到的就是第一行
//    //
//    printf("%d\n", sizeof(a[3]));//16
//    printf("%d\n", sizeof(a[0]));//16
//    */
//    return 0;
//}