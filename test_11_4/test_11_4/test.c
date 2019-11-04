#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <malloc.h>

/*
int pingjun(int a, int b)
{
	return (a & b) + ((a^b) >> 1);
}

int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	printf("%d\n", pingjun(m, n));
	return 0;
}*/

//int main()
//{
//	int* a;
//	int num;
//	scanf("%d", &num);
//	printf("\n");
//	a = (int*)malloc(sizeof(int)* num);
//	for (int i = 0; i < num; ++i)
//	{
//		scanf("%d", &a[i]);
//	}
//	printf("\n");
//	int  ret = a[0];
//	for (int i = 1; i < num; ++i)
//	{
//		ret ^= a[i];
//	}
//	printf("%d\n", ret);
//	return 0;
//}

void reverse(char* start, char* end)
{
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		++start;
		--end;
	}
}
int Strlen(char* str)
{
	int count = 0;
	while (*str++)
	{
		++count;
	}
	return count;
}

void reverse1(char* str)
{
	char* cur = str;
	int len = Strlen(str);
	reverse(str, str + len - 1);
	while (*cur)
	{
		char* start = cur;
		while (*cur != ' ' && *cur != '\0')
		{
			++cur;

		}
		reverse(start, cur - 1);
		while (*cur == ' ')
			++cur;
	}
}

int main()
{
	char str[] = "student a am i";
	printf("%s\n", str);
	reverse1(str);
	printf("%s\n", str);
	return 0;
}