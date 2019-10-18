//typedef 的关键字属性为类型定于，课理解为类型重命名
//int main()
//{
//	typedef unsigned int uint_32;
//	unsigned int num1 = 0;
//	uint_32 num2 = 0;
//	return 0;
//}

//static的修饰变量以及函数作用验证
//#include <stdio.h>
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d", i);
//}
////定义函数test
//int main()
//{
//	int i = 0;
//	for(i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//#include <stdio.h>
//void test()
//{
//	//static修饰局部变量
//	static int i = 0;
//	i++;
//	printf("%d  ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	printf("\n");
//	return 0;
//}

////add.c
//int g_val = 2019;
////test.c
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//add.c
//static int g_val = 2019;
////test.c
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


//int Add(int x, int y)
////定义Add函数
//{
//	return (x + y);
//}
//int main()
//{
//	printf("%d\n", Add(2, 3));
////在main函数中应用Add函数
//	return 0;
//}

static int Add(int x, int y)
//修饰函数   ？？？？？？？？？？？？？？？
{
	return(x + y);
}
int main()
{
	printf("%d\n", Add(2, 3));
	return 0;
}