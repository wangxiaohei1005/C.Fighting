#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//void menu()
//{
//	printf("************************************\n");
//	printf("************ 1.开始游戏 ************\n");
//	printf("************ 0.退出游戏 ************\n");
//	printf("************************************\n");
//}
//
//
//void game()
//{
//	int suijishu = 0;
//	int innumber = 0;
//	suijishu = rand ()% 100 + 1;
//	while (1)
//	{
//		printf("请注意！！！游戏现在开始！！！\n");
//		printf("请输入数字：\n");
//		scanf("%d", &innumber);
//		if (innumber > suijishu)
//		{
//			printf("猜大了!\n");
//		}
//		else if (innumber < suijishu)
//		{
//			printf("猜小了!\n");
//		}
//		else
//		{
//			printf("Nice ！ 猜对了吼 ！");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入选项：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏！\n");
//			break;
//		default:
//			printf("输入错误，请重试！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：\n");
//		scanf("%s", password);
//		if (strcmp(password,"965896331") == 0)
//		{
//			break;
//		}
//		else
//		{
//			printf("输入错误!");
//		}
//	}
//
//	if (i < 3)
//	{
//		printf("登录成功！！！\n");
//	}
//	else
//	{
//		printf("登陆失败！！！\n");
//	}
//	return 0;
//}
