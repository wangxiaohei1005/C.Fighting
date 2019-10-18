#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//void menu()
//{
//	printf("******************\n");
//	printf("***** 1.Come *****\n");
//	printf("***** 0.Out ******\n");
//	printf("******************\n");
//
//}
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100+1;
//	while (1)
//	{
//		printf("请输入数字\n");
//		scanf("%d",&guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("Nice,猜对了！\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//		return 0;
//}


//int main()
//{
//	int arr[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 };
//	int left = 0;
//	int i = 0; 
//	int right = sizeof (arr)/sizeof(arr[0])-1;
//	int number = 0;
//	printf("请输入20及20以内的偶数\n");
//	scanf("%d", &number);
//	while (left <= right)
//	{
//		i = (left + right) / 2;
//		if (arr[i] > number)
//		{
//			right = i - 1;
//		}
//		else if (arr[i]<number)
//		{
//			left = i + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (left <= right)
//	{
//		printf("找到了，下标为%d\n",i);
//
//	}
//	else
//	{
//		printf("-1\n");
//	}
//	return 0;
//
//}
