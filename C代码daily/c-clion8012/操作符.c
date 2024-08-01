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