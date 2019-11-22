#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

enum day//枚举变量名
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

//结构体声明方式
//struct Student
//{
//	char name[128];
//	int age;
//	char tel[20];
//};
//int main()
//{
//	struct Student S;//典型定义结构体变量方式
//	return 0;
//}
//
//typedef struct Student
//{
//	char name[128];
//	int age;
//	char tel[20];
//}S; // S是结构体类型
//
//struct Student
//{
//	char name[128];
//	int age;
//	char tel[20];
//}S;//结构体变量
//
//struct
//{
//	char name[128];
//	int age;
//	char tel[20];
//}S; // S是无类型类型的结构体变量（匿名结构体）
//
//typedef struct Ret
//{
//	int data;
//	struct Ret* next;
//}Ret;//在结构体中不可用直接的 Ret* next,因为Ret是在定义完成之后才有定义的
//
//
////结构体变量的定义
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
//	struct Point p2 = {3, 4};//两种定义方式
//
//	Student s1;
//	strcpy(s1.name, "peter");//字符串定义不可使用赋值：=    需要使用拷贝函数
//	s1.age = 18;
//	strcpy(s1.tel, "110");
//	s1.p.x = 1;
//	s1.p.y = 2;//整形定义可以直接定义
//
//	Student s2 = { "jack", 5, "112", {2,3} };//若结构体中存在嵌套结构体，可以{{-----}}来定义
//	Student copy;
//	memcpy(&copy, &s1, sizeof(Student));//对结构体的拷贝
//
//	return 0;
//}

struct Student
{
	char name;
	int tall;
	char number;

	int weight;

}s;//结构体枚举课替换对case语句的替换，从而明显提升代码的可读性
//例如通讯录具体应用：
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
		switch (option)//通过枚举变量的可读性，联系所具体创建的函数
		{
		case EXIT:
			printf("您好，系统退出成功！！！\n");
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
			printf("请注意，输入的选项有误！！！请重新输入！！！\n");
		}
	} while (option);

}*/

//void test()
//{
//	int *p = (int*)malloc(sz);//若sz所代表的值为空，程序崩溃（型为对空指针赋值）
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
//		*(p + i) = i;//越界访问，申请的内存为10，访问越界
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
}*///非动态内存开辟出的地址不能释放

//内存泄漏问题
//void test()
//{
//	int *p = (int *)malloc(100*1024*1024*1024**1024);//当开辟过多：错误	2	error C2100: 非法的间接寻址	f:\cccccgeting\c.fighting\test_11_14(结构体)\test_11_14(结构体)\test.c	221	1	test_11_14(结构体)
////会出现使得堆区动态内存不足开辟
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//	//此处没有对动态开辟的内存进行释放，即内存泄漏
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
struct _iobuf {
	char *_ptr;
	int   _cnt;
	char *_base;
	int   _flag;
	int   _file;
	int   _charbuf;
	int   _bufsiz;
	char *_tmpfname;
};
typedef struct _iobuf FILE;

int main()
{
	FILE * pFile;
	pFile = fopen("myfile.txt", "w");
	if (pFile != NULL)
	{
		fputs("fopen example", pFile);
		fclose(pFile);
	}
	return 0;
}

int main()
{
	FILE * pFile;
	long size;
	pFile = fopen("myfile.txt", "rb");
	if (pFile == NULL) perror("Error opening file");
	else
	{
		fseek(pFile, 0, SEEK_END);
		size = ftell(pFile);
		fclose(pFile);
		printf("Size of myfile.txt: %ld bytes.\n", size);
	}
	return 0;
}