#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

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

