#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//实现二分查找
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	scanf("%d", &i);
//	int tmp = 0;
//	while (left <= right)
//	{
//		tmp = (left + right) / 2;
//		if (arr[tmp] > i)
//		{
//			right = tmp - 1;
//		}
//		else if (arr[tmp]<i)
//		{
//			left = tmp + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (left <= right)
//		printf("找到了，其数字的下标为：%d\n", tmp);
//	else
//		printf("对不起，找不到！！！\n");
//	return 0;
//}

//利用函数实现二分查找
//int DoubleSearch(int arr[], int left, int right, int i)
//{
//	int tmp = 0;
//	while (left <= right)
//	{
//		tmp = (left + right) / 2;
//		if (arr[tmp] > i)
//		{
//			right = tmp - 1;
//		}
//		else if (arr[tmp] < i)
//		{
//			left = tmp + 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//		return tmp;
//	else
//		return -1;
//}
//int main()
//{
//	int i = 0;
//	int left = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
//	int right = sizeof(arr) / sizeof(arr[0]);
//	printf("Input:\n");
//	scanf("%d",&i);
//	int rid = DoubleSearch(arr, left, right, i);
//	if (rid == -1)
//	{
//		printf("对不起，找不到！！！\n");
//	}
//	else
//		printf("找到了，对应下标为：%d\n", rid);
//	return 0;
//}

//输入整形，输出其每一位
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int number = 0;
//	scanf("%d", &number);
//	Print(number);
//	return 0;
//}

//利用递归求n的阶乘

//int Njie(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//		return n*Njie(n - 1);
//}

//另外一种方式：
//int Njie(int n)
//{
//	int result = 1;
//	while (n > 1)
//	{
//		result *= n;
//		n -= 1;
//	}
//	//阶乘分解为其乘以它的下一位（正向）
//	return result;
//}
//int main()
//{
//	int a = 0;
//	printf("Input:\n");
//	scanf("%d", &a);
//	int tmp = Njie(a);
//	printf("%d\n", tmp);
//	return 0;
//}

