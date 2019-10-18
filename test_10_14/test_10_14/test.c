#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//结构体——复杂类型
//struct Stu// 类型
//{
//	char name[20];
//	short age;
//	char sex[5];
//};//结构体语言结构    后可加 s1........其为全局变量

//typedef struct Stu// 对创建的类型进行重命名
//{
//	char name[20];
//	short age;
//	char sex[5];
//}Stu;
//int main()
//{
//	struct Stu s = { "小黑", "20", "男" };//此处s为局部变量
//	Stu ss = { 0 };//由于typedef的存在使其可以直接创建
//	return 0;
//}


//struct S
//{
//	char arr[];
//};
//struct S2
//{
//	double d;
//	int *p;
//	struct S s;
//};
//int main()
//{
//	int a = 10;
//	//初始化为分别对其结构体项目进行定义
//	//对结构体内部变量进行打印是利用 .
//	return 0;
//}  在对结构体进行传参时候优先选择传结构体地址
//struct S
//{
//	int data[20];
//	int num;
//};
//struct  S s = { { 1, 2, 3, 4 }, 1000 };
//void print1(struct S s)
//{
//	printf("%d\n",s.num);
//}
//void print2(struct S* ps)
//
//{
//	printf("%d\n",ps->num);
//}
//int main()
//{
//	print(s);
//	print1(&s);
//	return 0;
//}

//结构体完
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int N = 0;
//	int i = 0;
//	scanf("%d", &N);
//	for (n = 1; n <= N; n++)
//	{
//		int ret = 1;
//		for (i =1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//		int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};
//		for (i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
//		{
//			arr[i] = 0;
//			printf("hehe!\n");
//		}
//		return 0;
//}
