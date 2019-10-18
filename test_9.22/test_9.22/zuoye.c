//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	输出菱形，因为共有13行，所以利用for循环，第一行为一个*，左右各四个空格
//	int i = 0;//循环次数
//	int j = 0;//空格
//	int k = 0;//*
//	for (i = 0; i < 7; i++)//上半部分有7行
//	{
//		for (j = 0; j <7-i-1 ; j++)
//		{
//			printf(" ");//空格，1:6   2:4 
//		}
//		for (k = 0; k < 2 * i + 1; k++)
//		{
//			printf("*"); 



//		}
//		printf("\n");
//	}
//    for (i = 0; i < 7 - 1; i++)//下半部分循环6行
//	{
//		for (j = 0; j < i + 1; j++)//倒数第6行为6个。所以空格个数等于行数
//		{
//			printf(" ");
//		}
//		for (k = 11 - 2 * i ; k>0; k--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;//0-1000的数字
//	int i1 = 0;//个位数
//	int i2 = 0;//十位数
//	int i3 = 0;//百位数
//	for (i = 0; i < 1000; i++)
//	{
//		i1 = i % 10;
//		i2 = (i /10) % 10;
//		i3 = i / 100;
//		if (i1*i1*i1 + i2*i2*i2 + i3*i3*i3 == i)//个位数十位数百位数立方和等于其本身判断
//			printf("%d\n", i);
//	}
//	return 0;
//}
//
//int main()
//{
//	int sn = 0;//存放和
//	int a = 0;//定义键盘输入的数
//	int i = 0;//定义循环次数
//	int b = 0;//存放每次循环（2   22   222等）
//	printf("Input: \n");
//	scanf("%d", &a);
//	for (i = 1; i < 6; i++)
//		{
//			b = a + 10 * b;
//			sn = sn + b;
//		}
//	printf("sn = %d\n", sn);
//	return 0;
//}