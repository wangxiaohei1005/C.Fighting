#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//部分指针和数组笔试题练习
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));
//	//所求为数组的大小（特殊形式），具体应该为 sizeof(*&a)
//	printf("%d\n", sizeof(a+0));
//	//a为其第一个字符地址，加0仍为地址，地址类型大小为4字节
//	printf("%d\n", sizeof(*a));
//	//对a解应用为第一个字符。因为为int类型，所以大小为4
//	printf("%d\n", sizeof(a+1));
//	//如上，加一即为第二个字符的地址
//	printf("%d\n", sizeof(a[1]));
//	//为下表为1的字符的大小，int类型所以为4字节
//	printf("%d\n", sizeof(&a));
//	//对a解应用为其首元素本身
//	printf("%d\n", sizeof(*&a));
//	//整个数组的指针
//	printf("%d\n", sizeof(&a+1));
//	//下标为1的字符的指针大小
//	printf("%d\n", sizeof(&a[0]));
//	//所求类型为指针
//	printf("%d\n", sizeof(&a[0]+1));
//	//所求类型为指针
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(arr));
//	//数组大小
//	printf("%d\n", sizeof(arr + 0));
//	//下标为1的字符的指针
//	printf("%d\n", sizeof(*arr));
//	//第一个字符
//	printf("%d\n", sizeof(arr[1]));
//	//下标为1的字符
//	printf("%d\n", sizeof(&arr));
//	//指针
//	printf("%d\n", sizeof(&arr + 1));
//	//指针
//	printf("%d\n", sizeof(&arr[0] + 1));
//	//指针
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", strlen(arr));
//	//数组的长度，但是不能有限结束，需等到随机值有'\0'
//	printf("%d\n", strlen(arr + 0));
//	//数组的长度，但是不能有限结束，需等到随机值有'\0'
//	//printf("%d\n", strlen(*arr));
//	//不能编译，类型不同
//	//printf("%d\n", strlen(arr[1]));
//	//不能编译，类型不同
//	//printf("%d\n", strlen(&arr));
//	//不能编译，类型不同
//	//printf("%d\n", strlen(&arr + 1));
//	//不能编译，类型不同
//	printf("%d\n", strlen(&arr[0] + 1));
//	//从下标为1的字符开始计算长度，同第一第二，应为第一第二的值减一
//	return 0;
//}