#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//函数的递归
//void printf(int n)
//{
//	if (n > 9)
//	{
//		printf( n / 10 );
//	}
//	printf("%d", n % 10);
//}
//int main()
//{
//	int num = 1234;
//	printf(num);
//	return 0;
//}

//int strlen(const char*str)
//{
//	if (*str == '\0')
//		return 0;
//	else return 1 + strlen(str + 1);
//}
//int main()
//{
//	char *p = "abcdef";
//	int len = strlen(p);
//	printf("%d\n", len);
//	return 0;
//}

//求第n个斐波那契数


//int fib(int n)
//{
//	int result;
//	int pre_result;
//	int next_older_result;
//	result = pre_result = 1;
//	while (n > 2)
//	{
//		n -= 1;
//		next_older_result = pre_result;
//		pre_result = result;
//		result = pre_result + next_older_result;
//	}
//	return result;
//}

int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}