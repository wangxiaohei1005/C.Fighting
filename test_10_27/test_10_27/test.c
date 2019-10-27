#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char str1[] = "hello word!";
//	char str2[] = "hello word!";
//	char *str3 = "hello word!";
//	char *str4 = "hello word!";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	//str1 str2两个数组的内存块不同
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n",arr);
//	printf("%p\n", &arr);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("arr = %p\n", arr);
//	printf("&arr = %p\n", &arr);
//
//	printf("arr + 1 = %p\n", arr + 1);
//	printf("&arr + 1 = %p\n", &arr + 1);//跳过整个数组地址
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int(*p)[10] = &arr;
//	return 0;
//}

void PrintArr1(int arr[3][5], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}

void PrintArr2(int (*arr)[5], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	PrintArr1(arr, 3, 5);
	PrintArr2(arr, 3, 5);
	return 0;
}