#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////一维数组传参
//void test1(int arr[])
//{
//
//}
//void test2(int arr[10])
//{
//
//}
//void test3(int *arr)
//{
//
//}
//void test4(int arr[20])//传参穿的是地址而不是数组
//{
//
//}
//void test5(int **arr)//传参类型不同
//{
//
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test1(arr);
//	test2(arr);
//	test3(arr);
//	test4(arr);
//	test5(arr);
//	return 0;
//}
//void Print1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d  ", arr[i][j]);  
//		}
//		printf("\n");
//	}
//}
//
//void Print2(int (*arr)[5], int row, int col)//如此二维数组传参可以利用 *arr
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d  ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
//	Print1(arr, 3, 5);
//	Print2(arr, 3, 5);
//	return 0;
//}

//指针和数组笔试题训练
//int main()
//{
//	char p[] = "abcdef";
//	printf("%d\n", sizeof(p));//7
//	printf("%d\n", sizeof(p + 1));//4
//	printf("%d\n", sizeof(*p));//1
//	printf("%d\n", sizeof(p[0]));//1
//	printf("%d\n", sizeof(&p));//4
//	printf("%d\n", sizeof(&p + 1));//4
//	printf("%d\n", sizeof(&p[0] + 1));//4
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//无法编译
//	//printf("%d\n", strlen(arr[1]));//无法编译
//	//printf("%d\n", strlen(&arr));//无法编译
//	//printf("%d\n", strlen(&arr + 1));//无法编译
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}

int main()
{
	char *p = "abcdef";
	//printf("%d\n", sizeof(p));//4
	//printf("%d\n", sizeof(p + 1));//4
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(p[0]));//1
	//printf("%d\n", sizeof(&p));//4
	//printf("%d\n", sizeof(&p + 1));//4
	//printf("%d\n", sizeof(&p[0] + 1));//4
	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	printf("%d\n", strlen(*p));//无法编译
	printf("%d\n", strlen(p[0]));//无法编译
	printf("%d\n", strlen(&p));//无法编译
	printf("%d\n", strlen(&p + 1));//无法编译
	printf("%d\n", strlen(&p[0] + 1));//5
	return 0;
}