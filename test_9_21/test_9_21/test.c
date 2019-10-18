#define _CRT_SECURE_NO_WARNINGS 1
////求出给定数字的阶乘
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a = 1;//定义一个值存放每次的结果
//	scanf("%d", &j);
//	for (i = 1; i <= j; i++)
//	{
//		a *= i;
//	}
//	printf("a = %d\n", a);
//
//	return 0;
//}


//求出1！+2！+3！·····+10！
//int main()
//{
//	int n = 0;
//	int i = 0;
//	定义两个变量存在两个循环体中
//	int a = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		a = 1;
//		for (i = 1; i <= n; i++)
//		{
//			a *= i;
//		}
//		sum = sum + a;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//上述程序可以利用循环体精简为：
//int main()
//{
//	int n = 0;
//	int i = 0;
//	//	定义两个变量存在两个循环体中
//	int a = 1;//存放阶乘
//	int sum = 0;//存放阶乘的和
//	for (n = 1; n <= 3; n++)
//	{
//		a *= n;
//	//每次阶乘都为上一次的数乘以这次数字本身
//		sum += a;
//	//每次加上本身的阶乘即为1-10的和
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//求出一到一百之中的奇数并输出
#include <stdio.h>
int main()
{
	//正常结构应为判断其对2取%为1即为奇数
	int a = 0;
	for (a = 1; a <= 100; a += 2)//较为简单循环体课直接简化
		printf("%d  ", a);
	return 0;
}