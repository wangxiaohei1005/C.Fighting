#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ʵ�ֶ��ֲ���
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	scanf("%d", &i);
//	int tmp = 0;
//	while (left <= right)
//	{
//		tmp = (left + right) / 2;
//		if (arr[tmp] > i)
//		{
//			right = tmp - 1;
//		}
//		else if (arr[tmp]<i)
//		{
//			left = tmp + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (left <= right)
//		printf("�ҵ��ˣ������ֵ��±�Ϊ��%d\n", tmp);
//	else
//		printf("�Բ����Ҳ���������\n");
//	return 0;
//}

//���ú���ʵ�ֶ��ֲ���
//int DoubleSearch(int arr[], int left, int right, int i)
//{
//	int tmp = 0;
//	while (left <= right)
//	{
//		tmp = (left + right) / 2;
//		if (arr[tmp] > i)
//		{
//			right = tmp - 1;
//		}
//		else if (arr[tmp] < i)
//		{
//			left = tmp + 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//		return tmp;
//	else
//		return -1;
//}
//int main()
//{
//	int i = 0;
//	int left = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
//	int right = sizeof(arr) / sizeof(arr[0]);
//	printf("Input:\n");
//	scanf("%d",&i);
//	int rid = DoubleSearch(arr, left, right, i);
//	if (rid == -1)
//	{
//		printf("�Բ����Ҳ���������\n");
//	}
//	else
//		printf("�ҵ��ˣ���Ӧ�±�Ϊ��%d\n", rid);
//	return 0;
//}

//�������Σ������ÿһλ
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int number = 0;
//	scanf("%d", &number);
//	Print(number);
//	return 0;
//}

//���õݹ���n�Ľ׳�

//int Njie(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//		return n*Njie(n - 1);
//}

//����һ�ַ�ʽ��
//int Njie(int n)
//{
//	int result = 1;
//	while (n > 1)
//	{
//		result *= n;
//		n -= 1;
//	}
//	//�׳˷ֽ�Ϊ�����������һλ������
//	return result;
//}
//int main()
//{
//	int a = 0;
//	printf("Input:\n");
//	scanf("%d", &a);
//	int tmp = Njie(a);
//	printf("%d\n", tmp);
//	return 0;
//}

