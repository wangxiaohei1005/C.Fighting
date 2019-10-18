#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'a'&&ch <= 'z')
//		{
//			putchar(ch - 32);
//		}
//		else if (ch >= 'A'&&ch <= 'Z')
//		{
//			putchar(ch + 32);
//		}
//		else if (ch >= '0'&&ch <= '9')
//		{
//			continue;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	return 0;
//}

//
//get_max(int x, int y)
//{
//	return (x > y ? x:y);
//}
//int main()
//{
//	int a = 5;
//	int b = 10;
//	int max = 0;
//	max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//
//void Swap(int x, int y)
//{
//	 int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 11;
//	int b = 22;
//	printf("a=%d  b=%d", a, b);
//	Swap(a, b);
//	printf("a=%d  b=%d", a, b);
//	return 0;
//}
//形参是实参的临时拷贝，更改形参不影响实参

//int get_max(int x, int y)
//{
//	return(x > y ? x : y);
//}
//
//int main()
//{
//	int a = 11;
//	int b = 22;
//	int max = get_max(a, b);
//	//max = get_max(2, 3);
//	//max = get_max(a, 3);
//	//max = get_max(a, 2 + 4);
//	//max = get_max(a, get_max(2, 5));
//	printf("%d\n", max);
//	return 0;
//}

