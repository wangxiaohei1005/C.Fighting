#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ṹ�塪����������
//struct Stu// ����
//{
//	char name[20];
//	short age;
//	char sex[5];
//};//�ṹ�����Խṹ    ��ɼ� s1........��Ϊȫ�ֱ���

//typedef struct Stu// �Դ��������ͽ���������
//{
//	char name[20];
//	short age;
//	char sex[5];
//}Stu;
//int main()
//{
//	struct Stu s = { "С��", "20", "��" };//�˴�sΪ�ֲ�����
//	Stu ss = { 0 };//����typedef�Ĵ���ʹ�����ֱ�Ӵ���
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
//	//��ʼ��Ϊ�ֱ����ṹ����Ŀ���ж���
//	//�Խṹ���ڲ��������д�ӡ������ .
//	return 0;
//}  �ڶԽṹ����д���ʱ������ѡ�񴫽ṹ���ַ
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

//�ṹ����
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
