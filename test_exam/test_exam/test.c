#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()//
//{
//	char arr[100] = { 0 };
//	while (gets(arr) != NULL)
//	{
//		int sz = strlen(arr);
//		int i = sz - 1;
//		while (i>=0)
//		{
//			printf("%c", arr[i]);
//			i--;
//		}
//		printf("\n");
//	}
//		return 0;
//}

int Max(int m, int n)//最大公约数函数
{
	if (m%n == 0)
		return n;
	return Max(n, m%n);
}
int Min(int m, int n)//最小公倍数函数
{
	return m*n / Max(m, n);//两数之积除以它们的最大公约数等于最小公倍
}
int main()
{
	int a = 0;
	int b = 0;
	int tmp = 0;
	scanf("%d%d",&a,&b);
	a = (a > b ? a : b);
	b = (a + b) - a;
    tmp = Min(a, b);
	printf("最小公倍数为：%d\n", tmp);
	return 0;
}