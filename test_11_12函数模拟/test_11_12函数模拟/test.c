#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//模拟实现 strcpy
char* Mystrcpy(char* dst, const char* src)
{
	assert(src != NULL);
	assert(dst != NULL);
	char* ret = dst;
	while (*dst++ = *src++)
		*dst = '\0';
	  return ret;
}
//int main()
//{
//	char arr1[] = "hello!!!";
//	char arr2[10] = {0};
//	MyStrcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//模拟实现函数strlen
int Mystrlen(char* str)
{
	assert(str != NULL);
	int ret = 0;
	while (*str != '\0')
	{
		++ret;
		++str;
	}
	return ret;
}

//int main()
//{
//	char* arr = "hello world!!!";
//	MyStrlen(arr);
//	printf("%d\n", MyStrlen(arr));
//	return 0;
//}

//模拟实现函数 strcat
char* Mystrcat(char* dst, const char* src)
{
	assert(dst && src);
	char* ret = dst;
	while (*dst != '\0')
	{
		++dst;
	}
	while (*dst++ = *src++)
		*dst = *src;
		return ret;
}
//int main()
//{
//	char* arr1 = "world!!!";
//	char arr2[20] = "hello ";
//	MyStrcat(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//模拟实现 strcmp
int Mystrcmp(const char* dst, const char* src)
{
	assert(dst && src);
	int ret = 0;
	const char* p1 = dst;
	const char* p2 = src;
	while (*p1 && *p2)
	{
		if (*p1 > *p2)
		{
			return 1;
		}
		else if (*p1 < *p2)
		{
			return -1;
		}
		else
		{
			++p1;
			++p2;
		}
	}

	if (*p1 == '\0' && *p2 == '\0')
	{
		return 0;
	}
	else if (*p1 == '\0')
	{
		return -1;
	}
	else
	{
		return 1;
	}
	return ret;
}

//int main()
//{
//	char* arr1 = "hello1";
//	char* arr2 = "hello1";
//	MyStrcmp(arr1, arr2);
//	printf("%d\n", MyStrcmp(arr1, arr2));
//	return 0;
//}

//模拟实现 strstr
const char* Mystrstr(const char* src, const char* sub)
{
	assert(src && sub);
	const char* srci = src;
	const char* subi = sub;
	while (*srci !=  '\0')
	{
		while (*srci == *subi && *subi != '\0')
		{
			++srci;
			++subi;
		}
		if (*subi == '\0')
		{
			return src;
		}
		else
		{
			subi = sub;
			++src;
			srci = src;
		}
	}
	return NULL;
}

//int main()
//{
//	//char* p1 = "abcde";
//	//char* p2 = "cdeab";
//	//char p3[20]; // "abcdeabcde"
//	//Mystrcpy(p3, p1);
//	//Mystrcat(p3, p1);
//	//if (Mystrstr(p3, p2) != NULL)
//	//{
//	//	printf("是旋转串\n");
//	//}
//	//else
//	//{
//	//	printf("不是旋转串\n");
//	//}
//
//	char* q1 = "aaaabcd";
//	char* q2 = "aaab";
//
//	char* pos = strstr(q1, q2);
//	printf("%s\n", pos);
//	return 0;
//}


//模拟实现函数 memcpy
struct Student
{
	char name[10];
	int age;
	int tall;
};

void* Mymemcpy(void* dst, const void* src, size_t num)
{
	assert(dst && src);
	char* str_dst = (char*)dst;
	char* str_src = (char*)src;
	for (size_t i = 0; i < num; ++i)
	{
		str_dst[i] = str_src[i]; // *(str_src+i)
	}

	return dst;
}

int main()
{
	int a1[10] = { 1, 2, 3, 4, 5 };
	int a2[10];
	Mymemcpy(a2, a1, 10 * sizeof(int));

	struct Student s1 = { "peter", 18 };

	struct Student s2;
	Mymemcpy(&s2, &s1, sizeof(struct Student));
	return 0;
}