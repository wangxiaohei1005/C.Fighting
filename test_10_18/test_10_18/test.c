#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

int my_strlen(const char*str)
{
	int count = 0;
	assert(str != NULL);
	while (*str)
	{
		count++;
	}
	return count;
}

int main()
{
	const char* arr = "hello my son!!!";
	int tmp = my_strlen(arr);
	printf("%d\n", tmp);
	return 0;
}