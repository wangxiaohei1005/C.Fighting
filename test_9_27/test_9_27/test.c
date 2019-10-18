#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int count = 0;
//	int i, j, n;
//	for (i = 101; i < 200; i++)
//	{
//		for (j = 2; j < sqrt(i); j++)
//		{
//			n = i%j;
//			if (n == 0)
//			{
//				break;
//			}
//			if (n != 0)
//			{
//				printf("%d ", i);//输出101  输出103 
//				count++;//（101-299加50次）
//				break;
//			}
//			break;//代码每两次进入（n!=0）一次    因此输出全奇数   同时最后输出一次50
//		}
//	}
//	printf("%d\n ", count);
//	return 0;
//
//}

//int main()//打印输入数字行数的金字塔
//{
//	int i, j;
//	int x;
//	printf("请输入要打印的星号塔的行数\n");
//	scanf("%d", &x);
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j <= x - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int i = 0;
//	char input[] = { 0 };
//	for (i = 0; i < 10;i++)
//	{
//		printf("快说！谁是猪！！！\n");
//		scanf("%s", input);
//		 if (0 == strcmp(input, "我是猪"))
//		{
//			printf("你是猪，你是猪，你才是猪！！！");
//		}
//		else if (0 == strcmp(input, "***是猪"))
//		{
//			printf("***拒绝当猪！！！\n");
//			break;
//		}
//		else
//		{
//			printf("哈哈！！！");
//		}
//	}
//	return 0;
//}//    不知道为啥   输入***是猪之后程序总是会崩溃！！！