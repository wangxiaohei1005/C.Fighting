#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void kass(int n)
//{
//	int left,right;
//	for (left = 1; left <= n; left++)
//	{
//		for (right = 1; right <= left; right++)
//		{
//			printf("%-2d * %-2d = %-3d ", left, right, left*right);//%-nd Ϊ��ʽ���Ʒ�
//	    }
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("������˷��ھ���������\n");
//	scanf("%d", &n);
//	kass(n);
//
//	return 0;
//}


//void change(int n1,int n2)
//{
//	int a;
//	a = n1;
//	n1 = n2;
//	n2 = a;
//	printf("n1=%d   n2=%d", n1, n2);
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	printf("Input:\n");
//	scanf("%d%d", &n1, &n2);
//	change(n1, n2);
//	return 0;
//}

//�������� �ж��ǲ�������
//int judge(int n)
//{
//	int count = 0;
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//}
//int main()
//{
//	int year=0;
//	printf("��������Ҫ�жϵ���ݣ�\n");
//	scanf("%d", &year);
//	judge(year);
//}
//#include <math.h>
//int judge(int n)
//{
//	int i = 0;//����ѭ������
//	for (i = 2; i <n; i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//		}
//	}
//	if (n >= i)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int ret = 0;
//	int i = 0;
//	printf("Input;\n");
//	scanf("%d", &i);
//	ret = judge(i);
//	if (ret == 1)
//	{
//		printf("��������\n");
//	}
//	else
//	{
//		printf("����������\n");
//	}
//	return 0;
//}

//void menu()
//{
//	printf("***********************************\n");
//	printf("************1.��ʼ�� ����**********\n");
//	printf("************2.�� �� �� ��**********\n");
//	printf("************3.�� �� �� ��**********\n");
//	printf("************4.�� �� �� ��**********\n");
//	printf("***********************************\n");
//}
//void init(int a[])
//{
//	int i = 0;
//    printf("������ʮ���ַ�:\n");
//for (i = 0; i < 10; i++)
//{
//	scanf("%d", &a[i]);
//}
//    printf("��ʼ���������Ϊ��\n");
//for (i = 0; i < 10; i++)
//{
//	printf("%d", a[i]);
//}
//    printf("�����ʼ���ɹ���\n");
//    printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int num = 0;
//	while (1)
//		{
//			menu();
//			printf("������ѡ��:\n");
//			scanf("%d", &num);
//			if (num = 1)
//			{
//				init(arr);//ʵ��һ������init������ʼ�����顢
//			}
//			if (num = 3)
//			{
//				empty(arr);//ʵ��empty()������顢
//			}
//			if (num = 3)
//			{
//				reverse(arr);//ʵ��empty()������顢
//			}
//			if (num = 4)
//			{
//				break;
//			}
//			else
//			{
//				printf("����������������룡\n");
//			}
//		}
//	return 0;
//}

int fib(int n)
{
	int result;
	int pre_result;
	int next_older_result;
	result = pre_result = 1;
	while (n > 2)
	{
		n -= 1;
		next_older_result = pre_result;
		pre_result = result;
		result = pre_result + next_older_result;
	}
	return result;
}