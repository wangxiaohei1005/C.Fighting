#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int arr[5]; //int 数组
//	int *par1[10]; //指针数组
//	int(*par2)[10];//数组指针
//	int(*par3[10])[5];//指针数组
//	int a1p[5];
//	par3[0] = a1p;//存储数组指针的数组
//	return 0;
//} 

//void test()
//{
//	printf("hehe\n");
//}
//int func(int a)
//{
//	printf("heheda\n");
//	return a;
//}
//int main()
//{
//	printf("%p\n", test);//函数指针
//	printf("%p\n", &test);
//	void(*pf)() = test;
//	test();
//	(*pf)();
//	pf();
//	int(*pfunc)(int);//相似于数组定义
//	pfunc = func;
//	pfunc(10);
//	return 0;
//}

//typedef void(*P_FUNC)(int);
//
//void f1(int a)
//{
//	printf("我来了；%d\n", a);
//}
//
//P_FUNC signal(int, P_FUNC);
//
//int main()
//{
//	void(*pf1)(int) = f1;
//	P_FUNC pf2 = f1;
//	pf1(1);
//	pf2(2);
//	(*pf1)(3);
//	(*pf2)(4);
//	return 0;
//}

//计算器
//int add(int a, int b) 
//{
//	return a + b;
//}
//int sub(int a, int b) 
//{
//	return a - b;
//}
//int mul(int a, int b) 
//{
//	return a*b;
//}
//int div(int a, int b) 
//{
//	return a / b;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	do
//	{
//		printf("*************************\n");
//		printf(" 1:add     2:sub \n");
//		printf(" 3:mul     4:div \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		/*switch (input)
//		{
//		case 1:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}*/
//
//	} while (input);
//	return 0;
//}
//利用函数指针优化
//int add(int a, int b) 
//{
//	return a + b;
//}
//int sub(int a, int b) 
//{
//	return a - b;
//}
//int mul(int a, int b) 
//{
//	return a*b;
//}
//int div(int a, int b) 
//{
//	return a / b;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //转移表
//	while (input)
//	{
//		printf("*************************\n");
//		printf(" 1:add        2:sub \n");
//		printf(" 3:mul        4:div \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		if ((input <= 4 && input >= 1))
//		{
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//			printf("输入有误\n");
//		printf("ret = %d\n", ret);
//	}
//	return 0;
//}


