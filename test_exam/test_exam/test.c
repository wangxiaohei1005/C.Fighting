#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()//
//{
//	char arr[100] = { 0 };
//	while (gets(arr) != NULL)
//	{
//		int sz = strlen(arr);
//		int i = sz - 1;
//		while (i>=0)
//		{
//			printf("%c", arr[i]);
//			i--;
//		}
//		printf("\n");
//	}
//		return 0;
//}

int Max(int m, int n)//���Լ������
{
	if (m%n == 0)
		return n;
	return Max(n, m%n);
}
int Min(int m, int n)//��С����������
{
	return m*n / Max(m, n);//����֮���������ǵ����Լ��������С����
}
int main()
{
	int a = 0;
	int b = 0;
	int tmp = 0;
	scanf("%d%d",&a,&b);
	a = (a > b ? a : b);
	b = (a + b) - a;
    tmp = Min(a, b);
	printf("��С������Ϊ��%d\n", tmp);
	return 0;
}