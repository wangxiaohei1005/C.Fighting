#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1)); //2,5  a为数组首元素地址+1为第二个的地址，解应用为第二个元素 &a为整体数组+1为加一个数组
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
//	printf("%d", p[0]);//此处初始化利用的是,的左右，只是引用后半部分，因此为1
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];//此处将二维数组强转为[5][4]
//	p = a;
//	printf("%p %p\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//指针相减，负数为其补码，而int出来的是其大小除去4字节
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int*)(&aa + 1);
//	int *ptr2 = (int*)(*(aa + 1));
//	printf("%d %d", *(ptr1 - 1), *(ptr2 - 1));//ptr1为整个数组&aa+1加一个数组，减一为10 ptr2 aa+1为加到第1行，*(aa+1)==aa[1],因此减一为5
//	return 0;
//}

int main()
{
	char *a[] = { "work", "at", "atm" };
	char**pa = a;
	pa++;
	printf("%s\n", *pa);//pa++ 为加4字节 因此跳至at的地址
	return 0;
}