#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

enum day//ö�ٱ�����
{
	MON,
	TUES,
	WED,
	THUR,
	FRI,
	SAT,
	SUN,
};
enum student
{
	NAME,
	TALL,
	WEIGHT,
	NUMBER,
};

//�ṹ��������ʽ
//struct Student
//{
//	char name[128];
//	int age;
//	char tel[20];
//};
//int main()
//{
//	struct Student S;//���Ͷ���ṹ�������ʽ
//	return 0;
//}
//
//typedef struct Student
//{
//	char name[128];
//	int age;
//	char tel[20];
//}S; // S�ǽṹ������
//
//struct Student
//{
//	char name[128];
//	int age;
//	char tel[20];
//}S;//�ṹ�����
//
//struct
//{
//	char name[128];
//	int age;
//	char tel[20];
//}S; // S�����������͵Ľṹ������������ṹ�壩
//
//typedef struct Ret
//{
//	int data;
//	struct Ret* next;
//}Ret;//�ڽṹ���в�����ֱ�ӵ� Ret* next,��ΪRet���ڶ������֮����ж����
//
//
////�ṹ������Ķ���
//struct Point
//{
//	int x;
//	int y;
//};
//
//typedef struct Student
//{
//	char name[128];
//	int  age;
//	char tel[20];
//	struct Point p;
//}Student;
//
//
//int main()
//{
//	struct Point p1;
//	p1.x = 1;
//	p1.x = 2;
//
//	struct Point p2 = {3, 4};//���ֶ��巽ʽ
//
//	Student s1;
//	strcpy(s1.name, "peter");//�ַ������岻��ʹ�ø�ֵ��=    ��Ҫʹ�ÿ�������
//	s1.age = 18;
//	strcpy(s1.tel, "110");
//	s1.p.x = 1;
//	s1.p.y = 2;//���ζ������ֱ�Ӷ���
//
//	Student s2 = { "jack", 5, "112", {2,3} };//���ṹ���д���Ƕ�׽ṹ�壬����{{-----}}������
//	Student copy;
//	memcpy(&copy, &s1, sizeof(Student));//�Խṹ��Ŀ���
//
//	return 0;
//}

struct Student
{
	char name;
	int tall;
	char number;

	int weight;

}s;//�ṹ��ö�ٿ��滻��case�����滻���Ӷ�������������Ŀɶ���
//����ͨѶ¼����Ӧ�ã�
enum OPTION
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MOD,
	SHOW,
	SORT,
	SAVE,
	LOAD,
};

/*void testContact()
{
	int option;
	Contact ct;
	InitContact(&ct);
	do
	{
		menu();
		scanf("%d", &option);
		switch (option)//ͨ��ö�ٱ����Ŀɶ��ԣ���ϵ�����崴���ĺ���
		{
		case EXIT:
			printf("���ã�ϵͳ�˳��ɹ�������\n");
			break;
		case ADD:
			AddContact(&ct);
			break;
		case DEL:
			DelContact(&ct);
			break;
		case SEARCH:
			SearchContact(&ct);
			break;
		case MOD:
			ModifyContact(&ct);
			break;
		case SHOW:
			ShowContact(&ct);
			break;
		case SORT:
			SortContact(&ct);
			break;
		case LOAD:
			LoadContact(&ct);
			break;
		case SAVE:
			SaveContact(&ct);
			break;
		default:
			printf("��ע�⣬�����ѡ�����󣡣������������룡����\n");
		}
	} while (option);

}*/

//void test()
//{
//	int *p = (int*)malloc(sz);//��sz�������ֵΪ�գ������������Ϊ�Կ�ָ�븳ֵ��
//	*p = 20;
//	free(p);
//}
//int main()
//{
//	test();
//	return 0;
//}


//void test()
//{
//	int i = 0;
//	int *p = (int *)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; ++i)
//	{
//
//		*(p + i) = i;//Խ����ʣ�������ڴ�Ϊ10������Խ��
//	}
//	free(p);
//}
//int main()
//{
//	test();
//	return 0;
//}

/*void test()
{
	int a = 10;
	int *p = &a;
	free(p);
}
int main()
{
	test();
	return 0;
}*///�Ƕ�̬�ڴ濪�ٳ��ĵ�ַ�����ͷ�

//�ڴ�й©����
//void test()
//{
//	int *p = (int *)malloc(100*1024*1024*1024**1024);//�����ٹ��ࣺ����	2	error C2100: �Ƿ��ļ��Ѱַ	f:\cccccgeting\c.fighting\test_11_14(�ṹ��)\test_11_14(�ṹ��)\test.c	221	1	test_11_14(�ṹ��)
////�����ʹ�ö�����̬�ڴ治�㿪��
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//	//�˴�û�жԶ�̬���ٵ��ڴ�����ͷţ����ڴ�й©
//}
//
//int main()
//{
//
//	test();
//	return 0;
//}
#include <string.h>
/*void GetMemory(char *p)
{
	p = (char *)malloc(100);
}

void test(void)
{
	char *str = NULL;
	GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
}
int main()
{
	test();
	return 0;
}*/

/*char *GetMemory(void)
{
	char p[] = "hello world";
	return p;
}
void test(void)
{
	char *str = NULL;
	str = GetMemory();
	printf(str);
}

int main()
{
	test();
	return 0;
}*/

void test()
{
	char *str = (char *)malloc(100);
	strcpy(str, "hello");
	free(str);
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
int main()
{
	test();
	return 0;
}