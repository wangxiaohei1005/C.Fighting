#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//ѡ��ṹ
//int main()
//{
//	int age = 0;
//	printf("Input:\n");
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ���꣡����\n");
//	}
//	//�����Ϊ�Գ�����ж�
//	else
//	{
//		printf("�ѳ��꣡����\n");
//	}
//	//if�����Է�֧Ϊ������� else if�����ж�
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
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break; 
//	case 3:
//		printf("������\n");
//		break; 
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}//��switch����п�����������default��breakʹ��ﵽԤ�ڽṹ
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
//	char a = -128;//�洢�Ĳ���
//	//ԭ��0x 10000000 00000000 00000000  10000000
//	//����0x 11111111 11111111 11111111  01111111
//	//����0x 11111111 11111111 11111111  10000000
//	//char�ضϳ�Ϊ 10000000    
//	//ͨ��char���� 111111111 11111111111 11111111111 100000000
//	//��ӡ�޷��ż�Ϊ���� 111111111 11111111111 11111111111 100000000
//	printf("%u", a);
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	//ԭ�� 00000000 00000000 00000000 10000000
//	//���� 00000000 00000000 00000000 10000000
//	//�ض� 10000000
//	//���� 11111111 11111111 11111111 10000000
//	//��ӡӦΪ4294967168
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	//��Ϊ��Ϊ���Σ���jΪ���� ����ֱ������ ӦΪ-10
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
//	////��ӡ���Ӧ��Ϊ 8 7 6 5 4 3 2 1 0 4294967169...........�ݼ�
//
//	//char a[1000];
//	//int i;
//	//for (i = 0; i < 1000; i++)
//	//{
//	//	a[i] = -1 - i;
//	//}
//	//printf("%d", strlen(a));
//	////��Ϊchar���ͽض�Ϊһ�ַ������Ϊ11111111��255������������˳�ѭ�������strlen(a)��ֵΪ255
//	//return 0;
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello word\n");
//	}
//	return 0;
//	//��iѭ������255֮���������һֱ���ض�Ϊ11111111����255����˳�������ѭ��
//}