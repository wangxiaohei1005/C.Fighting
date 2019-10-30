#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//指针和数组笔试题
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	//数组大小，附带\0因此为7
//	printf("%d\n", sizeof(arr + 0));
//	//指针
//	printf("%d\n", sizeof(*arr));
//	//首个字符 为一个字节
//	printf("%d\n", sizeof(arr[1]));
//	//下标为1的字符
//	printf("%d\n", sizeof(&arr));
//	//指针
//	printf("%d\n", sizeof(&arr + 1));
//	//同上
//	printf("%d\n", sizeof(&arr[0] + 1));
//	//仍为一个指针的大小
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));
//	//字符串长度 因此为6
//	printf("%d\n", strlen(arr + 0));
//	//同上
//	//printf("%d\n", strlen(*arr));
//	//无法对指针求长度
//	//printf("%d\n", strlen(arr[1]));
//	//同上
//	//printf("%d\n", strlen(&arr));
//	//无法编译
//	//printf("%d\n", strlen(&arr + 1));
//	//同上
//	printf("%d\n", strlen(&arr[0] + 1));
//	//从字符为一开始计算长度应该比一二少1
//	return 0;
//}

int main()
{
	char*p = "abcdef";
	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(p + 1));//4
	printf("%d\n", sizeof(*p));//1为第一个字符
	printf("%d\n", sizeof(p[0]));//1下表为1的字符
	printf("%d\n", sizeof(&p));//4
	printf("%d\n", sizeof(&p + 1));//4
	printf("%d\n", sizeof(&p[0] + 1));//4
	return 0;
}