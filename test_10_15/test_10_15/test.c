#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////�����ĵݹ�ʵ��ĳ������n�η�
//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n*Pow(n, k - 1);
//	else
//		return 1.0 / (Pow(n, -k));
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	double ret = 0;
//	scanf("%d%d", &n, &k);
//	ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}


////�ú����ݹ�ʵ�ֶ�ĳ������ÿһλ���
//int DigitSum(unsigned int n)//unsigned�޷�����  ��ӡʱ�õ���%u
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	else
//		return DigitSum(n / 10) + n % 10;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n",ret);
//	return 0;
//} 

//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void Reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	char tmp = *str;
//	*str = *(str+len-1);
//	//�ڶ�λ����һλ
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) > 1)
//	{
//		Reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//
//	char arr[] = { 0 };
//	printf("����������Ҫ�������е��ַ�����\n");
//	scanf("%s", arr );
//	Reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

