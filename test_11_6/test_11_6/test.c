#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ָ���������������
//һά����
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));//4
//	printf("%d\n", sizeof(*a));//4
//	printf("%d\n", sizeof(a + 1));//4
//	printf("%d\n", sizeof(a[1]));//4
//	printf("%d\n", sizeof(&a));//4
//	printf("%d\n", sizeof(*&a));//16
//	printf("%d\n", sizeof(&a + 1));//4
//	printf("%d\n", sizeof(&a[0]));//4
//	printf("%d\n", sizeof(&a[0] + 1));//4
//	return 0;
//}
////�ַ�����
//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr + 0));//4
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4
//	printf("%d\n", sizeof(&arr + 1));//4
//	printf("%d\n", sizeof(&arr[0] + 1));//4
//	printf("%d\n", strlen(arr));//���ֵ
//	printf("%d\n", strlen(arr + 0));//ͬ��
//	printf("%d\n", strlen(*arr));//���Ͳ�ͬ���벻��ȥ
//	printf("%d\n", strlen(arr[1]));//ͬ��
//	printf("%d\n", strlen(&arr));//ͬ��
//	printf("%d\n", strlen(&arr + 1));//ͬ��
//	printf("%d\n", strlen(&arr[0] + 1));//ӦΪ֮ǰ�����ֵ��һ
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr + 0));//4
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4
//	printf("%d\n", sizeof(&arr + 1));//4
//	printf("%d\n", sizeof(&arr[0] + 1));//4
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	printf("%d\n", strlen(*arr));//���Ͳ������޷�����
//	printf("%d\n", strlen(arr[1]));//ͬ��
//	printf("%d\n", strlen(&arr));//ͬ��
//	printf("%d\n", strlen(&arr + 1));//ͬ��
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}

//int main()
//{
//	char *p = "abcdef";
//	printf("%d\n", sizeof(p));//4
//	printf("%d\n", sizeof(p + 1));//4
//	printf("%d\n", sizeof(*p));//1
//	printf("%d\n", sizeof(p[0]));//1
//	printf("%d\n", sizeof(&p));//4
//	printf("%d\n", sizeof(&p + 1));//4
//	printf("%d\n", sizeof(&p[0] + 1));//4
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//6
//	printf("%d\n", strlen(*p));//���Ͳ������޷�����
//	printf("%d\n", strlen(p[0]));//���Ͳ������޷�����
//	printf("%d\n", strlen(&p));//���Ͳ������޷�����
//	printf("%d\n", strlen(&p + 1));//���Ͳ������޷�����
//	printf("%d\n", strlen(&p[0] + 1));//5
//	return 0;
//}
//��ά����
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));//4
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1));//4
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1)); //2,5  aΪ������Ԫ�ص�ַ+1Ϊ�ڶ����ĵ�ַ����Ӧ��Ϊ�ڶ���Ԫ�� &aΪ��������+1Ϊ��һ������
//	return 0;
//}

//struct Test
//{
//	int num;
//	char *pcname;
//	short sDate;
//	char cha[2];
//	short sba[4];
//}*p;
//
//int main()
//{
//	printf("%p\n", p + 0x1);//14
//	printf("%p\n", (unsigned long)p + 0x1);//1
//	printf("%p\n", (unsigned int*)p + 0x1);//4
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);//4
//	int *ptr2 = (int *)((int)a + 1);//
//	printf("%x %x", ptr1[-1], *ptr2);
//	return 0;
//
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;
//	p = a[0];
//	printf("%d", p[0]);//�˴���ʼ�����õ���,�����ң�ֻ�����ú�벿�֣����Ϊ1
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];//�˴�����ά����ǿתΪ[5][4]
//	p = a;
//	printf("%p %p\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//ָ�����������Ϊ�䲹�룬��int�����������С��ȥ4�ֽ�
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int*)(&aa + 1);
//	int *ptr2 = (int*)(*(aa + 1));
//	printf("%d %d", *(ptr1 - 1), *(ptr2 - 1));//ptr1Ϊ��������&aa+1��һ�����飬��һΪ10 ptr2 aa+1Ϊ�ӵ���1�У�*(aa+1)==aa[1],��˼�һΪ5
//	return 0;
//}

//int main()
//{
//	char *a[] = { "work", "at", "atm" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);//pa++ Ϊ��4�ֽ� �������at�ĵ�ַ
//	return 0;
//}

//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *--*++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	return 0;
//}

//����ָ���������������һ�������������