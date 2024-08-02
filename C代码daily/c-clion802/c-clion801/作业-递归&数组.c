#include<stdio.h>

/*递归*/
/*将一个数组内的元素逆序*/

/*题意要求不使用strlen库函数*/
//int my_strlen(char* str) {
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

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


/*走n阶台阶，每一步可以走一阶也可以走两阶，有多少种走法，输入n,输出方法数*/
//int fib(int n) {
//	if (n <= 2) {
//		return n;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int num = fib(n);
//	printf("%d\n", num);
//	return 0;
//}



/*数组*/
/*有一个整数序列（可能有重复的整数），现删除指定的某一个整数。*/
/*输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。*/
/*第一行输入一个整数(0≤N≤50)。*/
/*第二行输入N个整数，输入用空格分隔的N个整数。*/
/*第三行输入想要进行删除的一个整数。*/
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[6] = {0};
//	int len = sizeof(arr) / sizeof(int);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] != del) {
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	for (int i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}


/*数组*/
/*输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。*/
/*两行，第一行为n，表示n个成绩，不会大于10000。*/
/*第二行为n个成绩（整数表示，范围0~100），以空格隔开。*/
/*一行，输出n个成绩中最高分数和最低分数的差。*/
/*第一种*/
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[6] = {0};
//	int len = sizeof(arr) / sizeof(int);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	int min = arr[0];
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//		if (arr[i] < min) {
//			min = arr[i];
//		}
//	}
//	printf("%d\n", max-min);
//}
/*第二种*/
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[6] = { 0 };
//	int len = sizeof(arr) / sizeof(int);
//	int max = 0;
//	int min = 100;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//		if (arr[i] < min) {
//			min = arr[i];
//		}
//	}
//	printf("%d\n", max - min);
//}



//分支控制
/*实现字母的大小写转换。多组输入输出。*/
/*多组输入，每一行输入大写字母。*/
/*针对每组输入输出对应的小写字母。*/
/*第一种*/
//int main() {
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z') {
//			printf("%c\n", ch - 32);
//		}
//		else{
//			printf("%c\n", ch + 32);
//		}
//		getchar();
//	}
//	return 0;
//}
/*第二种*/
//int main() {
//	char ch = 0;
//scanf读取成功的时候，返回值为读取的数据的个数
//scanf读取失败的时候，返回值为EOF
//	while (scanf("%c", &ch)==1)
//	/*while (scanf("%c", &ch)!=EOF)*/
//	{
//		if (ch >= 'a' && ch <= 'z') {
//			printf("%c\n", ch - 32);
//		}
//		else if (ch >= 'A' && ch <= 'Z') {
//			printf("%c\n", ch + 32);
//		}
//	}
//	return 0;
//}
/*第三种*/
//int main() {
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (islower(ch)) {
//			printf("%c\n",toupper(ch));
//		}
//		else if (isupper(ch)) {
//			printf("%c\n",tolower(ch));
//		}
//	}
//	return 0;
//}



//分支控制
/*判断输入的字符是不是字母*/
/*多组输入，每一行输入一个字符。*/
/*针对每组输入，输出单独占一行*/
/*第一种*/
//int main() {
//	char ch = 0;
//	while (scanf("%c", &ch) == 1) {
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
//			printf("%c is an alphabet.\n", ch);
//		}
//		else {
//			printf("%c is not an alphabet.\n", ch);
//		}
//		getchar();
//	}
//}
/*第二种*/
//int main() {
//	char ch = 0;
//	/*在%c前面加一个空格。表示跳过下一个字符前的所有空白字符*/
//	while (scanf(" %c", &ch) == 1) {
//		/*if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))*/ 
//		/*库函数isalpha(ch)*/
//		if(isalpha(ch))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else {
//			printf("%c is not an alphabet.\n", ch);
//		}
//	}
//}


//分支控制
/*找到最大的分数*/
/*3个分数（0-100），用空格分开*/
//int main() {
//	int i = 0;
//	int scores = 0;
//	int max = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &scores);
//		if (scores > max) {
//			max = scores;
//		}
//	}
//	printf("%d\n", max);
//}


/*循环*/
/*变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字*/
/*比如1461 可以拆分成（1和461）,（14和61）,（146和1)*/
/*如果所有拆分后的乘积之和等于自身，则是一个Lily Number*/
/*求出5位数中的所有 Lily Number*/
//#include<math.h>
//int main() {
//	int i = 0;
//	for (int i = 10000; i <= 99999; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (int j = 1; j <= 4; j++)
//		{
//			int cnum = (double)pow(10, j);
//			sum += (i / cnum)*(i % cnum);
//		}
//		if (sum == i) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}