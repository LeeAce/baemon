#include<stdio.h>

/*递归*/
/*将一个数组内的元素逆序*/

/*题意要求不使用strlen库函数*/
int my_strlen(char* str) {
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

/*将一个数组内的元素逆序，无其他形参*/
//void reverse_str(char* str) {
//	char temp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str+1) > 1) {
//		reverse_str(str + 1);
//	}
//	*(str + len - 1) = temp;
//}
//
//int main() {
//	char arr[] = "aeioumonster";
//	reverse_str(arr);
//	printf("%s\n", arr);
//	return 0;
//}



/*将一个数组内的元素逆序，添加其他形参*/
//void reverse_str(char* str,int left,int right) {
//	char temp = str[left];
//	str[left] = str[right];
//	str[right] = temp;
//	if(left<right)
//	{
//		reverse_str(str, left+1, right-1);
//	}
//}
//
//int main() {
//	char arr[] = "aeioumonster";
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	reverse_str(arr,left,right);
//	printf("%s\n", arr);
//	return 0;
//}



/*将一个数组内的元素逆序,无递归*/
//void reverse_str(char* str) {
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while(left < right) {
//		char temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//int main() {
//	char arr[] = "aeioumonster";
//	reverse_str(arr);
//	printf("%s\n", arr);
//	return 0;
//}



/*计算一个数每一位之和，递归*/
//int digitsum(int num) {
//	if (num > 9) {
//		return num % 10 + digitsum(num / 10);
//	}
//	else {
//		return num;
//	}
//}
//
//int main() {
//	int i;
//	scanf("%d", &i);
//	int sum = digitsum(i);
//	printf("%d\n", sum);
//}



/*递归实现n的k次方*/
//double my_pow(int n,int k) {
//	if (k > 0) {
//		return n * my_pow(n,k-1);
//	}
//	else if(k == 0) {
//		return 1;
//	}
//	else if(k < 0) {
//		return 1.0 / my_pow(n, -k);
//	}
//}
//
//int main() {
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n,&k);
//	double num = my_pow(n,k);
//	printf("%.3lf\n", num);
//}



/*将数组A中的内容和B中的内容进行交换。数组一样大*/
//void swep(int* arr1,int* arr2,int len) {
//	int i = 0;
//	for (int i = 0; i < len; i++)
//	{
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//}
//
//int main (){
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int len = sizeof(arr1) / sizeof(int);
//	swep(arr1, arr2, len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//}



/*创建一个整型数组*/
/*实现函数init（）初始化数组为0*/
/*实现print（）打印数组的每一个元素*/
/*实现reverse（）函数完成数组元素的逆置*/
//void init(int* arr, int len) {
//	int i = 0;
//	for (int i = 0; i < len; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int* arr,int len) {
//	int i = 0;
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int* arr,int len) {
//	int left = 0;
//	int right = len - 1;
//	while (left < right) {
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int len = sizeof(arr) / sizeof(int);
//	print(arr,len);
//	reverse(arr,len);
//	print(arr, len);
//	init(arr,len);
//	print(arr, len);
//}
