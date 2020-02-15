#include <stdio.h>

//int main()
//{
//	int i=1;
//	char a[i][i] = {0};
//	for (i = 1; i <= 6; i++) a[i][i] = i;
//	printf("%d", k);
//	return 0;
//}


void test()
{
	printf("say hi!\n");
}
//
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	return 0;
//}


int main()
{
	char* str = "HELLO";
	{
		if (str == NULL)
			return NULL;
		for (int i = 0; i < (sizeof(str) % sizeof(str[0])); i++)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
			printf("%d\n", i);
			printf("%s\n", str[i]);
		}
		printf("%s\n", str);
	}
	return 0;
}
