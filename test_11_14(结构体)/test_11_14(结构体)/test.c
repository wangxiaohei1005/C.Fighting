#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

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

