#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void kass(int n)
//{
//	int left,right;
//	for (left = 1; left <= n; left++)
//	{
//		for (right = 1; right <= left; right++)
//		{
//			printf("%-2d * %-2d = %-3d ", left, right, left*right);//%-nd 为格式控制符
//	    }
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入乘法口诀表行数：\n");
//	scanf("%d", &n);
//	kass(n);
//
//	return 0;
//}


//void change(int n1,int n2)
//{
//	int a;
//	a = n1;
//	n1 = n2;
//	n2 = a;
//	printf("n1=%d   n2=%d", n1, n2);
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	printf("Input:\n");
//	scanf("%d%d", &n1, &n2);
//	change(n1, n2);
//	return 0;
//}

//创建函数 判断是不是闰年
//int judge(int n)
//{
//	int count = 0;
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//}
//int main()
//{
//	int year=0;
//	printf("请输入需要判断的年份：\n");
//	scanf("%d", &year);
//	judge(year);
//}
//#include <math.h>
//int judge(int n)
//{
//	int i = 0;//定义循环变量
//	for (i = 2; i <n; i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//		}
//	}
//	if (n >= i)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int ret = 0;
//	int i = 0;
//	printf("Input;\n");
//	scanf("%d", &i);
//	ret = judge(i);
//	if (ret == 1)
//	{
//		printf("是素数！\n");
//	}
//	else
//	{
//		printf("不是素数！\n");
//	}
//	return 0;
//}

//void menu()
//{
//	printf("***********************************\n");
//	printf("************1.初始化 数组**********\n");
//	printf("************2.清 空 数 组**********\n");
//	printf("************3.数 组 逆 置**********\n");
//	printf("************4.结 束 进 程**********\n");
//	printf("***********************************\n");
//}
//void init(int a[])
//{
//	int i = 0;
//    printf("请输入十个字符:\n");
//for (i = 0; i < 10; i++)
//{
//	scanf("%d", &a[i]);
//}
//    printf("初始化后的数组为：\n");
//for (i = 0; i < 10; i++)
//{
//	printf("%d", a[i]);
//}
//    printf("数组初始化成功！\n");
//    printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int num = 0;
//	while (1)
//		{
//			menu();
//			printf("请输入选项:\n");
//			scanf("%d", &num);
//			if (num = 1)
//			{
//				init(arr);//实现一个函数init（）初始化数组、
//			}
//			if (num = 3)
//			{
//				empty(arr);//实现empty()清空数组、
//			}
//			if (num = 3)
//			{
//				reverse(arr);//实现empty()清空数组、
//			}
//			if (num = 4)
//			{
//				break;
//			}
//			else
//			{
//				printf("输入错误，请重新输入！\n");
//			}
//		}
//	return 0;
//}

int fib(int n)
{
	int result;
	int pre_result;
	int next_older_result;
	result = pre_result = 1;
	while (n > 2)
	{
		n -= 1;
		next_older_result = pre_result;
		pre_result = result;
		result = pre_result + next_older_result;
	}
	return result;
}