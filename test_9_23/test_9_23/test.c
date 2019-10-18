#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//xixi:
//	printf("请注意，您的电脑将在60秒后自动关机！请输入“我是猪”以停止自动关机\n");
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto xixi;
//	}
//	return 0;
//}
//若不适用goto语句可使用while语句进行更改


//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，您的电脑将在60秒后自动关机！请输入“我是猪”以停止自动关机\n");
//		scanf("%s", input);
//		if (0 == strcmp(input, "我是猪"))
//			system("shutdown -a");
//		break;
//	}
//	return 0;
//}

int main()
{ 
	int i = 0;
	char mm[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("Input your numbers\n");
		scanf("%s", mm);
		if (strcmp(mm, "658963") == 0)
			printf("Success!\n");
		else
			printf("Tyr anain!\n");
	}
	if (i == 3)
	{
		printf("退出程序！\n");
	}
	return 0;
}