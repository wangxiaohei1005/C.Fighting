#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int line = 0;
//	int i = 0;
//	printf("Please Input line`s number: \n");
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//for (i = 0; i < line - 1; i++)
//{
//	int j = 0;
//	for (j = 0; j < i + 1; j++)
//	{
//		printf(" ");
//	}
//	for (j = 0; j < 2*(line-1-i)-1; j++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1;  i <= 10000000; i++)
//	{
//		//判断i的位数
//		//计算每一位的N次方和
//		//比较
//		int n = 0;
//		int tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			n++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

int main()
{
	int a = 0;
	int i = 0;
	int n = 0;
	int sum = 0;
	int k = 0;
	scanf("%d%d", &a, &n);
	for (i = 0; i < n; i++)
	{
		k = k * 10 + a;
		sum += k;
	}
	printf("sum=%d\n", sum);
	return 0;
}