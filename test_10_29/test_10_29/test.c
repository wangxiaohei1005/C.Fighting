#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//����ָ��������������ϰ
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));
//	//����Ϊ����Ĵ�С��������ʽ��������Ӧ��Ϊ sizeof(*&a)
//	printf("%d\n", sizeof(a+0));
//	//aΪ���һ���ַ���ַ����0��Ϊ��ַ����ַ���ʹ�СΪ4�ֽ�
//	printf("%d\n", sizeof(*a));
//	//��a��Ӧ��Ϊ��һ���ַ�����ΪΪint���ͣ����Դ�СΪ4
//	printf("%d\n", sizeof(a+1));
//	//���ϣ���һ��Ϊ�ڶ����ַ��ĵ�ַ
//	printf("%d\n", sizeof(a[1]));
//	//Ϊ�±�Ϊ1���ַ��Ĵ�С��int��������Ϊ4�ֽ�
//	printf("%d\n", sizeof(&a));
//	//��a��Ӧ��Ϊ����Ԫ�ر���
//	printf("%d\n", sizeof(*&a));
//	//���������ָ��
//	printf("%d\n", sizeof(&a+1));
//	//�±�Ϊ1���ַ���ָ���С
//	printf("%d\n", sizeof(&a[0]));
//	//��������Ϊָ��
//	printf("%d\n", sizeof(&a[0]+1));
//	//��������Ϊָ��
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(arr));
//	//�����С
//	printf("%d\n", sizeof(arr + 0));
//	//�±�Ϊ1���ַ���ָ��
//	printf("%d\n", sizeof(*arr));
//	//��һ���ַ�
//	printf("%d\n", sizeof(arr[1]));
//	//�±�Ϊ1���ַ�
//	printf("%d\n", sizeof(&arr));
//	//ָ��
//	printf("%d\n", sizeof(&arr + 1));
//	//ָ��
//	printf("%d\n", sizeof(&arr[0] + 1));
//	//ָ��
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", strlen(arr));
//	//����ĳ��ȣ����ǲ������޽�������ȵ����ֵ��'\0'
//	printf("%d\n", strlen(arr + 0));
//	//����ĳ��ȣ����ǲ������޽�������ȵ����ֵ��'\0'
//	//printf("%d\n", strlen(*arr));
//	//���ܱ��룬���Ͳ�ͬ
//	//printf("%d\n", strlen(arr[1]));
//	//���ܱ��룬���Ͳ�ͬ
//	//printf("%d\n", strlen(&arr));
//	//���ܱ��룬���Ͳ�ͬ
//	//printf("%d\n", strlen(&arr + 1));
//	//���ܱ��룬���Ͳ�ͬ
//	printf("%d\n", strlen(&arr[0] + 1));
//	//���±�Ϊ1���ַ���ʼ���㳤�ȣ�ͬ��һ�ڶ���ӦΪ��һ�ڶ���ֵ��һ
//	return 0;
//}