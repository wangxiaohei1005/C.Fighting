#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	const char*str1 = "abcdef";
//	const char*str2 = "bbb";
//	if (strlen(str2) - strlen(str1)>0)
//	{
//		printf("str2>str1\n");
//	}
//	else
//	{
//		printf("srt1>str2\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	strncat(str1, str2, 6);
//	puts(str1);
//	return 0;
//}


#include <string.h>
//int main()
//{
//	char str[][5] = { "R2D2", "C3PO", "R2A6" };
//	int n;
//	puts("Looking for R2 astromech droids...");
//	for (n = 0; n<3; n++)
//	if (strncmp(str[n], "R2xx", 2) == 0)
//	{
//		printf("found %s\n", str[n]);
//	}
//	return 0;
//}


//int main()
//{
//	char str[] = "This is a simple string";
//	char * pch;
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//	puts(str);
//	return 0;
//}
//
//
//int main()
//{
//	char str[] = "- This, a sample string.";
//	char * pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ,.-");
//	}
//	return 0;
//}
//
//int main()
//{
//	char *p = "zhangpengwei@bitedu.tech";
//	const char* sep = ".@";
//	char arr[30];
//	char *str = NULL;
//	strcpy(arr, p);//将数据拷贝一份，处理arr数组的内容
//	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//}

#include <assert.h>
int my_strlen(const char* str)//函数strlen
{
	assert(str != NULL);
	int len = 0;
	while (*str != '\0')
	{
		++len;
		++str;
	}
	return len;
}
//int main()
//{
//	char p[] = "hello world" ;
//	printf("%d\n", my_strlen(p));
//	printf("%d\n", sizeof(p));
//}

char* my_strcpy(char* dst, const char* src)
{
	assert(src != NULL);
	assert(dst != NULL);
	char* ret = dst;
	/*while (*src)
	{
		*dst = *src;
		++src;
		++dst;
	}
	*dst = '\0';
	return ret;*/
	//库函数：
	while (*dst++ = *src++)
		return ret;
}

int main()
{
	char p1[] = "hello111";
	char p2[20];
	strcpy(p2, p1);
	printf("%s\n", p2);
	return 0;
}