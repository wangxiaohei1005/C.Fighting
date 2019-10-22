#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//选择结构
//int main()
//{
//	int age = 0;
//	printf("Input:\n");
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年！！！\n");
//	}
//	//或更改为对成年的判断
//	else
//	{
//		printf("已成年！！！\n");
//	}
//	//if语句可以分支为多项，利用 else if进行判断
//	return 0;
//}
//

//int main()
//{
//	int day = 0;
//	printf("Input:");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break; 
//	case 3:
//		printf("星期三\n");
//		break; 
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}//在switch语句中可以巧妙利用default和break使其达到预期结构
//	return 0;
//}


//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//void main()
//{
//	fib(8);
//	printf("%d\n", cnt);
//}


//int main()
//{
//	char a = -128;//存储的补码
//	//原码0x 10000000 00000000 00000000  10000000
//	//反码0x 11111111 11111111 11111111  01111111
//	//补码0x 11111111 11111111 11111111  10000000
//	//char截断成为 10000000    
//	//通过char补成 111111111 11111111111 11111111111 100000000
//	//打印无符号即为正数 111111111 11111111111 11111111111 100000000
//	printf("%u", a);
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	//原码 00000000 00000000 00000000 10000000
//	//补码 00000000 00000000 00000000 10000000
//	//截断 10000000
//	//提升 11111111 11111111 11111111 10000000
//	//打印应为4294967168
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	//因为均为整形，且j为正数 所以直接运算 应为-10
//	return 0;
//}


//unsigned char i = 0;
//int main()
//{
//	//unsigned int i;
//	//for (i = 9; i >= 0; i--)
//	//{
//	//	printf("%u\n", i);
//	//}
//	////打印结果应该为 8 7 6 5 4 3 2 1 0 4294967169...........递减
//
//	//char a[1000];
//	//int i;
//	//for (i = 0; i < 1000; i++)
//	//{
//	//	a[i] = -1 - i;
//	//}
//	//printf("%d", strlen(a));
//	////因为char类型截断为一字符，最大为11111111即255，当超过后就退出循环，因此strlen(a)的值为255
//	//return 0;
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello word\n");
//	}
//	return 0;
//	//在i循环等于255之后，其二进制一直被截断为11111111既是255；因此程序无线循环
//}