#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//�������ββ����ܸı���������ֵ����Ϊ�����൱�ڡ����ס�
void test1(int a,int b)
{
	a = 5;
	b = 10;
}
//ָ��*��Ӧ�öԲ�����ֵ���иı�
void test2(int* a, int* b)
{
	*a = 5;
	*b = 10;
}
//int main()
//{
//	int a = 0;
//	int b = 1;
//	printf("%d %d\n", a, b);
//
//	test1(a, b);//�����Ǵ����β�
//	printf("%d %d\n", a, b);
//
//	test2(&a, &b);//���δ����ǵ�ַ
//	printf("%d %d\n", a, b);
//	return 0;
//}



void test1(int** arr, int n) //����
{
	printf("%d\n", sizeof(arr));
}

void test2(int* arr[10], int n) //C���Դ��Σ������ڴ����飬�����˻���ָ��
{
	printf("%d\n", sizeof(arr));
}

void test3(int* arr[], int n) //[]�е�ֵ���ܸı䴫�ε���ȷ�����˴�����ָ�����������
{
	printf("%d\n", sizeof(arr));
}

int main()
{
	int* arr[10] = { NULL};
	test1(arr, 10); // int*
	test2(arr, 10);
	test3(arr, 10);
	return 0;
}

void test(char** p)
{

}
int main()
{
	char c = "hello";
	char* pc = &c;
	char** ppc = &pc;
	char* arr[10] = { 0 };

	//������һ��ָ���ַ
	test(&pc);
	//����������ָ��
	test(ppc);
	//������ָ�������ַ
	test(arr);

	int* arr1[10];//����
	char *arr[44];//һ���ַ�ָ�������
	char **arr3[5];//�����ַ�ָ�������
	system("pause");
	return 0;
}
int main()
{
	int i = 0;
	for(i=1; i<=9; i++)
	{
		int j = 0;
		//��ӡһ��
		for(j=1; j<=i; j++)
		{
			//��ӡһ��
			printf("%d*%d=%-2d ", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}



int main()
{
	int i = 0;
	int count = 0;
	for(i=101; i<=200; i+=2)
	{
		//printf("%d ", i);
		//�ж�i�Ƿ�Ϊ����
		int j = 0;
		for(j=2; j<=sqrt(i); j++)
		{
			if(i%j == 0)
				break;
		}
		if(j>sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}



int main()
{
	int i = 0;
	int count = 0;
	for(i=100; i<=200; i++)
	{
		//printf("%d ", i);
		//�ж�i�Ƿ�Ϊ����
		int j = 0;
		for(j=2; j<=(i/2); j++)
		{
			if(i%j == 0)
				break;
		}
		if(j>(i/2))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}


int main()
{
	int i = 0;
	int count = 0;
	for(i=100; i<=200; i++)
	{
		//printf("%d ", i);
		//�ж�i�Ƿ�Ϊ����
		int j = 0;
		for(j=2; j<i; j++)
		{
			if(i%j == 0)
				break;
		}
		if(j==i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
