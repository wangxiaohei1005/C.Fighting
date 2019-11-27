#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//函数传形参并不能改变参数本身的值，因为传参相当于“降阶”
void test1(int a,int b)
{
	a = 5;
	b = 10;
}
//指针*解应用对参数的值进行改变
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
//	test1(a, b);//传参是传的形参
//	printf("%d %d\n", a, b);
//
//	test2(&a, &b);//传参传的是地址
//	printf("%d %d\n", a, b);
//	return 0;
//}



void test1(int** arr, int n) //常用
{
	printf("%d\n", sizeof(arr));
}

void test2(int* arr[10], int n) //C语言传参，不存在传数组，都会退化成指针
{
	printf("%d\n", sizeof(arr));
}

void test3(int* arr[], int n) //[]中的值不能改变传参的正确与否，因此穿的是指针而不是数组
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

	//函数传一级指针地址
	test(&pc);
	//函数传二级指针
	test(ppc);
	//函数传指针数组地址
	test(arr);

	int* arr1[10];//数组
	char *arr[44];//一级字符指针的数组
	char **arr3[5];//二级字符指针的数组
	system("pause");
	return 0;
}
int main()
{
	int i = 0;
	for(i=1; i<=9; i++)
	{
		int j = 0;
		//打印一行
		for(j=1; j<=i; j++)
		{
			//打印一项
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
		//判读i是否为素数
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
		//判读i是否为素数
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
		//判读i是否为素数
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
