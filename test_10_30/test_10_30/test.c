#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//ָ������������
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	//�����С������\0���Ϊ7
//	printf("%d\n", sizeof(arr + 0));
//	//ָ��
//	printf("%d\n", sizeof(*arr));
//	//�׸��ַ� Ϊһ���ֽ�
//	printf("%d\n", sizeof(arr[1]));
//	//�±�Ϊ1���ַ�
//	printf("%d\n", sizeof(&arr));
//	//ָ��
//	printf("%d\n", sizeof(&arr + 1));
//	//ͬ��
//	printf("%d\n", sizeof(&arr[0] + 1));
//	//��Ϊһ��ָ��Ĵ�С
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));
//	//�ַ������� ���Ϊ6
//	printf("%d\n", strlen(arr + 0));
//	//ͬ��
//	//printf("%d\n", strlen(*arr));
//	//�޷���ָ���󳤶�
//	//printf("%d\n", strlen(arr[1]));
//	//ͬ��
//	//printf("%d\n", strlen(&arr));
//	//�޷�����
//	//printf("%d\n", strlen(&arr + 1));
//	//ͬ��
//	printf("%d\n", strlen(&arr[0] + 1));
//	//���ַ�Ϊһ��ʼ���㳤��Ӧ�ñ�һ����1
//	return 0;
//}

int main()
{
	char*p = "abcdef";
	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(p + 1));//4
	printf("%d\n", sizeof(*p));//1Ϊ��һ���ַ�
	printf("%d\n", sizeof(p[0]));//1�±�Ϊ1���ַ�
	printf("%d\n", sizeof(&p));//4
	printf("%d\n", sizeof(&p + 1));//4
	printf("%d\n", sizeof(&p[0] + 1));//4
	return 0;
}