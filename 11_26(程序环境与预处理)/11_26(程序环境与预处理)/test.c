#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
/*int main()
{
	char* p = "hello ""world\n";
	printf("hello ", "bit\n");
	printf("%s", p);
	return 0;
}*///字符串连续存放会自动连接

//#define PRINT(FORMAT,VALUE)
//         printf("The value is "FORMAT"\n", VALUE);
//		 PRINT("%d", 10);

//#define MAX(a, b) ( (a) > (b) ? (a) : (b))
//x = 5;
//y = 8;
//z = MAX(x++, y++);
//printf("x=%d  y=%d  z=%d  \n", x, y, z);

int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
#ifdef __DEBUG__//条件编译代码   选择性编译，可定义宏来控制是否执行所包含代码
		printf("%d\n", arr[i]);
#endif// #ifdef 只可包含 #else 同时用 #endif 结束
	}
	return 0;
}

//#if则是则是可以提供多项选择即例如 "if elseif else" 类型的定义
#if __DEBUD__//满足宏：__DEBUD__则实现包含的语句
int i = 0;
#elif __DEFIDD__//满足宏定义：__DEFIDD__则实现此包含
int j = 0;
#else
#endif//实例如此 同样用 #endif 结束