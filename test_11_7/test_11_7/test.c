#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//操作符sizeof以及数组传参小知识
//void test1(int* arr)
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(char* arr1)
//{
//	printf("%d\n", sizeof(arr1));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char arr1[10] = { 0 };
//	printf("%d\n", sizeof(arr));//当sizeof后+数组名，求得为数组大小，因此为4
//	printf("%d\n", sizeof(arr1));//同上，因为定义char类型，因此大小为10
//	test1(arr);//传参降级为首元素地址
//	test2(arr1);//同上
//	return 0;
//}

//int main()
//{
//	short a = 10;
//	int b = 5;
//	printf("%d\n", sizeof(a = b + 2));//short类型大小为2
//	printf("%d\n", a);//sizeof中的表达式不参与运算
//	printf("%d\n", b);
//	return 0;
//}

// 运算符 ~ 应用
//int main()
//{
//	int a = 10;
//
//	a |= (1 << (3 - 1));//令第三位二进制为1
//
//	a ^= ~(1 << (3 - 1));//~为为了多位二进制位进行与或运算
//	//00000000 00000000 00000000 00001010
//	//11111111 11111111 11111111 11110101   按位取反
//	//11111111 11111111 11111111 11110100   -1为反码
//	//10000000 00000000 00000000 00001011   值为-11
//	printf("%d\n", ~a);
//	return 0;
//}

//运算符 ++ --
//int main()
//{
//	int a = 10;
//	printf("%d\n", a++);//先赋值后运算
//	printf("%d\n", a);
//	printf("%d\n", ++a);//先运算后赋值
//	printf("%d\n", a);
//	return 0;
//}//--同理

//运算符 *
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", *p);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//类型强转(类型)
//int main()
//{
//	//int a = 3.14;//会出现：从“double”转换到“int”，可能丢失数据  的字样
//	int a = (int)3.14;
//	return 0;
//}

//关系操作符：“>”“>=”“<=”“<”“!=”“==” ！！！特注意“==”与“=”的区别
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (arr1 == arr2)//此为两个字符串地址相比较
//	{
//		printf("呵呵！！！\n");
//	}
//	return 0;//无任何结果显示
//}

//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c1 = a && b;//逻辑与
//	int c2 = a || b;//逻辑或
//	printf("%d\n", c1);
//	printf("%d\n", c2);
//	return 0;
//}
//例题：
//int main()
//{
//	int i = 0, j = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//1 2 3 4 因为a先运算后++ 因此第一个&&为假，后面不计算
//	j = a++ || ++b || d++;//前面为真 后面不进行运算
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	return 0;
//}

//条件操作符（三目操作符）exp1 ? exp1 : exp2
//int main()
//{
//	int a = 1;
//	int b;
//	/*if (a > 5)
//	{
//		b = 3;
//	}
//	else
//		b = -3;*/
//	b = (a > 5 ? 3 : -3);
//	printf("%d\n", b);
//	return 0;
//}

