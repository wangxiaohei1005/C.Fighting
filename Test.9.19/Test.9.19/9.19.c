//typedef �Ĺؼ�������Ϊ���Ͷ��ڣ������Ϊ����������
//int main()
//{
//	typedef unsigned int uint_32;
//	unsigned int num1 = 0;
//	uint_32 num2 = 0;
//	return 0;
//}

//static�����α����Լ�����������֤
//#include <stdio.h>
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d", i);
//}
////���庯��test
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
//	//static���ξֲ�����
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
////����Add����
//{
//	return (x + y);
//}
//int main()
//{
//	printf("%d\n", Add(2, 3));
////��main������Ӧ��Add����
//	return 0;
//}

static int Add(int x, int y)
//���κ���   ������������������������������
{
	return(x + y);
}
int main()
{
	printf("%d\n", Add(2, 3));
	return 0;
}