#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//int main()
//{
//	int min;
//	int N;
//	int n;
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d", &N);
//	if (N = (N - 1) + (N - 2))
//	{
//		n = 0;
//	}
//	if (N >1)
//	{
//		min = N;
//		min = N - 1;
//		if (min != (min - 1) + (min - 2))
//		{
//			++n1;
//		}
//		else
//			return;
//	}
//	if (N >1)
//	{
//		min = N;
//		min = N + 1;
//		if (min != (min - 1) + (min - 2))
//		{
//			++n1;
//		}
//		else
//			return;
//	}
//	n = ((n1 > n2) ? n1 : n2);
//	printf("%d\n", n);
//	return 0;
//
//}
//int main()
//{
//	int min;
//	int N;
//	int n;
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d", &N);
//	if (N = (N - 1) + (N - 2))
//	{
//		n = 0;
//	}
//	if (N >1)
//	{
//		min = N;
//		min = N - 1;
//		if (min != (min - 1) + (min - 2))
//		{
//			n1++;
//		}
//	}
//	if (N >1)
//	{
//		min = N;
//		min = N + 1;
//		if (min != (min - 1) + (min - 2))
//		{
//			n++;
//		}
//	}
//	n = ((n1 > n2) ? n1 : n2);
//	printf("%d\n", n);
//	return 0;
//
//}

//class Solution
//{
//public:
//	void replaceSpace(char *str, int length)
//	{
//		int i = 0;
//		for (i = 0; i <= length; ++i)
//		{
//			if (str[i] == ' ')
//			{
//				stcpy
//			}
//			else
//				;
//		}
//	}
//};

int main()
{
	int f1 = 0, f2 = 1, f3;
	int n;
	scanf("%d", &n);
	while (f2 < n)
	{
		f3 = f2 + f1;
		f1 = f2;
		f2 = f3;
	}
	int x1 = n - f1;
	int x2 = f2 - n;
	int x = ((x1 < x2) ? x1 : x2);
	printf("%d", x);
	return 0;
}