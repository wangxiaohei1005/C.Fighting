#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//�ǵݹ�
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int sum = 0;
//	int i = 0;
//	if (n<=2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i=3; i <= n; i++)
//		{
//			sum = a + b;
//			a = b;
//			b = sum;
//		}
//		return sum;
//	}
//}
//
//int main()
//{
//	int n;
//	printf("Input:\n");
//	scanf("%d", &n);
//	int tmp = fib(n);
//	printf("%d\n", tmp);
//	return 0;
//}

//�ݹ�
//int fib(int n)
//{
//	if (n<=2)
//	{
//		return 1;
//	}
//	return fib(n - 1) + fib(n - 2);//����ݹ�
//}
//
//int main()
//{
//	int n;
//	printf("Input:\n");
//	scanf("%d", &n);
//	int tmp = fib(n);
//	printf("%d\n", tmp);
//	return 0;
//}



//��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//int xxx(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n*xxx(n, k - 1);
//	}
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("Input:\n");
//	scanf("%d%d", &i, &j);
//	int a = xxx(i, j);
//	printf("%d\n", a);
//	return 0;
//}


//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//void Reverse_string(char *str)
//{
//	if (*(++str) != '\0')
//	{
//		Reverse_string(str);
//	}
//	printf("%c", *(str - 1));
//}
//int main()
//{
//	char arr[] = "qwertyuiop";
//	Reverse_string(arr);
//	printf("\n");
//	return 0;
//}


//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� 
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//int DigitSum(int j)
//{
//	int sum = 0;
//	int i = 0;
//	if (j != 0)
//	{
//		i = j % 10;//��λ��
//		j = j / 10;//��ȥ��λ��������
//		sum = i + DigitSum(j);//�����ݹ�
//	}
//	return sum;
//}
//int main()
//{
//	int a;
//	printf("����һ������:\n");
//	scanf("%d", &a);
//	printf("Sum= %d\n", DigitSum(a));
//	return 0;
//}



//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//�ݹ�
//int jiecheng(int n)
//{
//	if (n == 1) 
//	{
//		return 1;
//	}
//	return n*jiecheng(n - 1);//��ʼ�׳�
//}
//int main() 
//{
//	int i = 0;
//	printf("Input:\n");
//	scanf("%d", &i);
//	int tmp = jiecheng(i);
//	printf("%d\n", tmp);
//	return 0;
//}
//�ǵݹ�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int k = 1;
//	printf("Input:\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		k = k * i;
//	}
//	printf("%d\n", k);
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ��strlen 
//�ݹ�
//int Strlen(char*ch)//����strlen��ĳ����Զ���
//{
//	if (*ch == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return (1 + Strlen(ch + 1));
//	}
//}
//int main()
//{
//	char arr[10] = "qwertyop";
//	printf("%d\n", Strlen(arr));
//	return 0;
//}  
//�ǵݹ�
//int Strlen(char*ch)
//{
//	int count = 0;
//	while (*ch)
//	{
//		ch++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[10] = "qweiop";
//	printf("%d\n", Strlen(arr));
//	return 0;
//}



//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//int pri(int n)
//{
//	int i = 0;//��ŵ�������
//	if (n != 0)
//	{
//		i = n % 10;
//		n = n / 10;
//		printf("%d  ", i);
//		n = pri(n);
//	}
//	return i;
//}
//int main()
//{
//	int a;
//	printf("����һ������:\n");
//	scanf("%d", &a);
//	pri(a);
//	printf("\n");
//	return 0;
//}