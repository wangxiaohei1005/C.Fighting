#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//递归和非递归分别实现求第n个斐波那契数
//非递归
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int sum = 0;
//	int i = 0;
//	if (n<=2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i=3; i <= n; i++)
//		{
//			sum = a + b;
//			a = b;
//			b = sum;
//		}
//		return sum;
//	}
//}
//
//int main()
//{
//	int n;
//	printf("Input:\n");
//	scanf("%d", &n);
//	int tmp = fib(n);
//	printf("%d\n", tmp);
//	return 0;
//}

//递归
//int fib(int n)
//{
//	if (n<=2)
//	{
//		return 1;
//	}
//	return fib(n - 1) + fib(n - 2);//进入递归
//}
//
//int main()
//{
//	int n;
//	printf("Input:\n");
//	scanf("%d", &n);
//	int tmp = fib(n);
//	printf("%d\n", tmp);
//	return 0;
//}



//编写一个函数实现n^k，使用递归实现
//int xxx(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n*xxx(n, k - 1);
//	}
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("Input:\n");
//	scanf("%d%d", &i, &j);
//	int a = xxx(i, j);
//	printf("%d\n", a);
//	return 0;
//}


//编写一个函数 reverse_string(char * string)（递归实现） 
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//void Reverse_string(char *str)
//{
//	if (*(++str) != '\0')
//	{
//		Reverse_string(str);
//	}
//	printf("%c", *(str - 1));
//}
//int main()
//{
//	char arr[] = "qwertyuiop";
//	Reverse_string(arr);
//	printf("\n");
//	return 0;
//}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//int DigitSum(int j)
//{
//	int sum = 0;
//	int i = 0;
//	if (j != 0)
//	{
//		i = j % 10;//个位数
//		j = j / 10;//出去个位数的数字
//		sum = i + DigitSum(j);//做出递归
//	}
//	return sum;
//}
//int main()
//{
//	int a;
//	printf("输入一个整数:\n");
//	scanf("%d", &a);
//	printf("Sum= %d\n", DigitSum(a));
//	return 0;
//}



//递归和非递归分别实现求n的阶乘
//递归
//int jiecheng(int n)
//{
//	if (n == 1) 
//	{
//		return 1;
//	}
//	return n*jiecheng(n - 1);//开始阶乘
//}
//int main() 
//{
//	int i = 0;
//	printf("Input:\n");
//	scanf("%d", &i);
//	int tmp = jiecheng(i);
//	printf("%d\n", tmp);
//	return 0;
//}
//非递归
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int k = 1;
//	printf("Input:\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		k = k * i;
//	}
//	printf("%d\n", k);
//	return 0;
//}


//递归和非递归分别实现strlen 
//递归
//int Strlen(char*ch)//利用strlen会蹦出良性定义
//{
//	if (*ch == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return (1 + Strlen(ch + 1));
//	}
//}
//int main()
//{
//	char arr[10] = "qwertyop";
//	printf("%d\n", Strlen(arr));
//	return 0;
//}  
//非递归
//int Strlen(char*ch)
//{
//	int count = 0;
//	while (*ch)
//	{
//		ch++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[10] = "qweiop";
//	printf("%d\n", Strlen(arr));
//	return 0;
//}



//递归方式实现打印一个整数的每一位
//int pri(int n)
//{
//	int i = 0;//存放单个数字
//	if (n != 0)
//	{
//		i = n % 10;
//		n = n / 10;
//		printf("%d  ", i);
//		n = pri(n);
//	}
//	return i;
//}
//int main()
//{
//	int a;
//	printf("输入一个整数:\n");
//	scanf("%d", &a);
//	pri(a);
//	printf("\n");
//	return 0;
//}