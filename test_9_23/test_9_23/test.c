#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//xixi:
//	printf("��ע�⣬���ĵ��Խ���60����Զ��ػ��������롰��������ֹͣ�Զ��ػ�\n");
//	scanf("%s", input);
//	if (0 == strcmp(input, "������"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto xixi;
//	}
//	return 0;
//}
//��������goto����ʹ��while�����и���


//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬���ĵ��Խ���60����Զ��ػ��������롰��������ֹͣ�Զ��ػ�\n");
//		scanf("%s", input);
//		if (0 == strcmp(input, "������"))
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
		printf("�˳�����\n");
	}
	return 0;
}