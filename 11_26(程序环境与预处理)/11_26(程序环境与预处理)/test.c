#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
/*int main()
{
	char* p = "hello ""world\n";
	printf("hello ", "bit\n");
	printf("%s", p);
	return 0;
}*///�ַ���������Ż��Զ�����

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
#ifdef __DEBUG__//�����������   ѡ���Ա��룬�ɶ�����������Ƿ�ִ������������
		printf("%d\n", arr[i]);
#endif// #ifdef ֻ�ɰ��� #else ͬʱ�� #endif ����
	}
	return 0;
}

//#if�������ǿ����ṩ����ѡ������ "if elseif else" ���͵Ķ���
#if __DEBUD__//����꣺__DEBUD__��ʵ�ְ��������
int i = 0;
#elif __DEFIDD__//����궨�壺__DEFIDD__��ʵ�ִ˰���
int j = 0;
#else
#endif//ʵ����� ͬ���� #endif ����