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

void* Mymemmcpy(void* dst, const void* src, size_t num)
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

/*int main()
{
	int a1[10] = { 1, 2, 3, 4, 5 };
	int a2[10];
	Mymemmcpy(a2, a1, 10 * sizeof(int));

	struct Student s1 = { "peter", 18 };

	struct Student s2;
	Mymemmcpy(&s2, &s1, sizeof(struct Student));
	return 0;
}*/

#include <stdio.h>
#include <assert.h>

//模拟实现函数 memmove
/*void* MyMemmove(void* dst, const void* src, size_t num)
{
	assert(src && dst);

	char* str_dst = (char*)dst;
	char* str_src = (char*)src;
	if (str_src < str_dst && dst < str_src + num) //分为两种偏移方式，当目标处于左边，且存在覆盖   则从右边开始偏移
	{
		for (int i = num - 1; i >= 0; --i)
		{
			str_dst[i] = str_src[i];
		}
	}
	else
	{
		for (size_t i = 0; i < num; ++i)
		{
			str_dst[i] = str_src[i];
		}
	}

	return dst;
}*/

/*int main()
{
	int a3[10] = { 1, 2, 3, 4, 5 };
	int a4[20];
	MyMemmove(a4, a3, 10 * sizeof(int));
	for (size_t i = 0; i < 10; ++i)
	{
		printf("%d ", a4[i]);
	}
	printf("\n");

	return 0;
}*/

#include <stdlib.h>

int compare(const void * dst, const void *src)
{
	return (*(int *)dst - *(int *)src);
}

/*int main()
{
	//int arr[] = { 1, 22, 5, 4, 7, 6, 3, 2, 12 };
	char *arr[] = { "a", "c", "d", "b" };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//利用数组长度来确定qsort函数参数
	qsort(arr, sz, sizeof(int), compare);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}*/




//冒泡排序
int Cmp(const void * p1, const void * p2)
{
	return (*(int *)p1 - *(int *)p2);
}

void Swap(void *p1, void *p2, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *((char*)p1 + i);
		*((char *)p1 + i) = *((char *)p2 + i);
		*((char *)p2 + i) = tmp;
	}
}

void Bubble(void *base, int count, int size, int(*cmp)(void *, void *))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (cmp((char *)base + j*size, (char *)base + (j + 1)* size) > 0)
			{
				Swap((char *)base + j*size, (char *)base + (j + 1)*size, size);
			}
		}
	}
}

/*int main()
{
	int arr[] = { 1, 3, 5, 7, 4, 6, 2, 1, 36, 21, 14 };//整型为直接输出
	//char *arr[] = { "aaa", "ddd", "ccc", "bbb" };//字符串输出其每个字符串的首地址
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble(arr, sz, sizeof (int), Cmp);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}*/
//模拟函数实现对字符的左旋（利用其每个字符的准确地址）
void LeftRot(char* dst, int k)
{
	int sz = strlen(dst);
	char* p;
	char* q;
	for (p = dst + k - 1; p >= dst; --p) 
	{
		for (q = p; q < p + sz - k; ++q) 
		{
			char tmp = *q;
			*q = *(q + 1);
			*(q + 1) = tmp;
		}
	}
}

//int main()
//{
//	char input[30];
//	scanf("%s", input);
//	int k = 0;
//	printf("请输入你需要左旋的数位：\n");
//	scanf("%d", &k);
//	if (k > (int)strlen(input))
//	{
//		printf("您的输入越界，请重新输入：\n");
//	}
//	LeftRot(input, k);
//	printf("%s", input);
//	return 0;
//}

int IsRotate(char* str, char* dst)
{
	int len = strlen(str);
	char* src = (char*)malloc(len * 2 + 1);
	strcpy(src, str);
	strcat(src, str);
	int ret = (strstr(src, dst) == NULL ? 0 : 1);
	free(src);
	return ret;
}

int main()
{
	char* arr1 = "AABCD";
	char* arr2 = "BCDAB";
	int tmp = IsRotate(arr1,arr2);
	printf("%d\n", tmp);
	return 0;
}
