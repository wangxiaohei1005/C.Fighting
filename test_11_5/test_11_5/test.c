#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

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

int main()
{
	char *a[] = { "work", "at", "atm" };
	char**pa = a;
	pa++;
	printf("%s\n", *pa);//pa++ Ϊ��4�ֽ� �������at�ĵ�ַ
	return 0;
}