#include<stdio.h>

/*操作符*/
//int main() {
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = (++c, c++, ++a, a++);
//	b += a++ + c;
//	printf("a=%d b=%d c=%d\n", a, b, c);
//}

/*求两个数的最小公倍数*/
/*第一种*/
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? a : b);
//	while (1) {
//		if ((m % a == 0) && (m % b == 0))
//		{
//			break;
//		}
//		m++;
//	}
//	printf("%d\n", m);
//}
/*第二种*/
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m=1;
//	while (a * m % b) {
//		m++;
//	}
//	printf("%d\n", a*m);
//}


/*将一句话的单词进行倒置，标点不倒置。*/
/*比如 I like beijing. 经过函数后变为：beijing. like I*/
//#include<string.h>
//void reverse(char* left,char* right) {
//	while (left<right) {
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	char arr[101] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);
//	char* start = arr;
//	while (*start) {
//		char* end = start;
//		while (*end != ' ' && *end != '\0') {
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0') {
//			end++;
//		}
//		start = end;
//	}
//	printf("%s\n", arr);
//}



/*打印数组，不使用下标，使用指针*/
//void print(int* arr, int len) {
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(int);
//	print(arr, len);
//	return 0;
//}


/*逆序字符串*/
//#include<string.h>
//void reverse(char* arr) {
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//	while (left < right) {
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	char arr[] = "lyhlovec";
//	reverse(arr);
//	printf("%s \n", arr);
//}
//#include<string.h>
//void reverse(char* left,char* right) {
//	while (left < right) {
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	char arr[] = "lyh love c";
//	reverse(arr, arr + strlen(arr) - 1);
//	printf("%s \n", arr);
//}



/*打印sum=a+aa+aaa+aaaa+aaaaa+......（a为数字）*/
/*like:sum=5+55+555+5555+55555+......*/
//int main() {
//	int num;
//	int n;
//	scanf("%d %d", &num,&n);
//	int temp = num;
//	int sum = num;
//	int i = 0;
//	for (i = 1; i < n; i++)
//	{
//		sum += num * 10 + temp;
//		num = num * 10 + temp;
//		printf("%d ", sum);
//	}
//	printf("%d\n", sum);
//}
//int main() {
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//}

/*“水仙花数”是指一个三位数，它的各位数字的立方和等于其本身*/
/*比如：153=1^3+5^3+3^3。 现在要求输出所有在1和100000范围内的水仙花数*/
//#include<math.h>
//int main() {
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int count = 0;
//		int num = i;
//		int sum = 0;
//		while (num) {
//			num /= 10;
//			count++;
//		}
//		num = i;
//		while (num) {
//			sum += pow(num % 10, count);
//			num /= 10;
//		}
//		if (sum == i) {
//			printf("%d ", i);
//		}
//	}
//}



/*打印菱形*/
//int main() {
//	int row = 0;
//	scanf("%d", &row);
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < row-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < row-1; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * (row-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int n = 0;
//	while (scanf("%d", &n) != EOF) {
//		for (int i = 0; i < n+1; i++)
//		{
//			for (int j = 0; j < n-i; j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j < i+1; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < i+1; j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j < n-i ; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//}

/*喝汽水，一瓶1元，两个空瓶换一瓶汽水，输入money，可以喝多少瓶*/
//int main() {
//	int money;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2) {
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//}