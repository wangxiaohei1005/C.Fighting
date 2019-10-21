#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

//int main()
//{
//	//字符串
//	char arr[] = "asdasfw";
//	char arr1[] = { 'a', 's', 'd','\0' };
//	printf("%s\n", arr);
//	printf("%s\n", arr1);//无'\0'则其需要寻找结束标志'\0'从而出现随机值
//	printf("%d\n", strlen(arr));//strlen为求字符串长度
//	printf("%d\n", strlen(arr1));
//	return 0;
//}


//转义字符
//int main()
//{
//	//printf("(are you ok \?\?)\n"); 
//	//??) 此为三字母词(VS2010)
//	//printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	// /ddd为8进制的一个三位数 8不属于其8进制
//	printf("%c\n", '\070');
//	//其显示为8，为二进制070代表的ASCALL码表所代表的的值
//	printf("%c\n", '\x32');
//
//	return 0;
//
//}

//注释
//int main()
//{
//	
//	//创建整型变量并且初始化为10
//	//c++
//	
//	/*
//	int a = 10;   C的注释方式
//	*/  
//	return 0;
//}


//int main()
//{
//	//int a = 10;
//	////int b = ++a;
//	//int b = a--;
//	////先赋值，后运算   a=9;b=10;
//	//printf("a=%d b=%d", a, b);
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	//此代码为错误
//	printf("%d\n", b);
//	return 0;
//}


//判断素数

//int main()
//{
//	int i = 101;
//	int count = 0;
//	while (i < 200)
//	{
//		//printf("%d\n",i);
//		int j = 2;
//		int flag = 0;
//		while (j <= sqrt(i))
//		{
//			if (i%j == 0)
//			{
//				flag = 1;
//				break;
//			}
//
//				j++;
//		}
//		if (flag==0)
//		{
//			count++;
//			printf("%d ", i);
//		}
//		i+=2;
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

