#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a[10];
//	int* p1 = a;
//	char* p2 = (char*)a;
//
//	p1 = p2;
//
//	return 0;
//}

//void test1(int* arr, int n) // ok  -> ����
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(int arr[10], int n) // ok  ָ��  C���Դ��Σ������ڴ����飬�����˻���ָ��
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test3(int arr[], int n) // ok  ָ��  C���Դ��Σ������ڴ����飬�����˻���ָ��
//{
//	printf("%d\n", sizeof(arr));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test1(arr, 10); // int*
//	test2(arr, 10);
//
//	//printf("%d\n", sizeof(arr));
//
//	return 0;
//}


//void test1(int** arr, int n) // ok  -> ����
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(int* arr[10], int n) // ok  ָ��  C���Դ��Σ������ڴ����飬�����˻���ָ��
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test3(int* arr[], int n) // ok  ָ��  C���Դ��Σ������ڴ����飬�����˻���ָ��
//{
//	printf("%d\n", sizeof(arr));
//}
//
//int main()
//{
//	int* arr[10] = { NULL};
//	test1(arr, 10); // int*
//	test2(arr, 10);
//	test3(arr, 10);
//
//
//	//printf("%d\n", sizeof(arr));
//
//	return 0;
//}

// �������β�λ���˻���ָ��
void test1(int(*p)[5], int n, int m)
{
	for (size_t i = 0; i < n; ++i)
	{
		for (size_t j = 0; j < m; ++j)
		{
			p[i][j];
		}
	}
}
// test1 �ȼ���test2
void test2(int p[][5], int n, int m)  //����
{

}

void test3(int* p[5], int n, int m)
{

}
// test3�ȼ���test4 ������
void test4(int** p, int n, int m)
{

}

int main()
{
	// [][][][][]
	// [][][][][]
	// [][][][][]
	int arr[3][5] = { 0 };
	test1(arr, 3, 5);
	test2(arr, 3, 5);
	//test3(arr, 3, 5);

	//printf("%d\n", sizeof(arr)); // sizeof(������) ����Ĵ�С
	//test1(arr, 3, 5);
	//printf("%d\n", sizeof(arr)); // sizeof(������) ����Ĵ�С
	//printf("%d\n", sizeof(arr+1)); // ��Ԫ�صĵ�ַ arr����-> int(*)[5]
	//printf("%p\n", arr); // ��ά�������Ԫ���ǵ�һ��
	//printf("%p\n", arr+1);

	// arr[2][3] �ȼ��� *(*(arr+2)+3) 
	// arr[2] �ȼ���  *(arr+2)

	printf("%d\n", sizeof(arr[2])); // arr[2]�����3�������� arr[2] ��������ʲô? -> int*
	printf("%d\n", sizeof(arr[2] + 1));
	printf("%p\n", arr[2]);
	printf("%p\n", arr[2] + 1);

	printf("%p\n", &arr[2]); // int(*)[5]
	printf("%p\n", &arr[2] + 1);

}