#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//������sizeof�Լ����鴫��С֪ʶ
//void test1(int* arr)
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(char* arr1)
//{
//	printf("%d\n", sizeof(arr1));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char arr1[10] = { 0 };
//	printf("%d\n", sizeof(arr));//��sizeof��+�����������Ϊ�����С�����Ϊ4
//	printf("%d\n", sizeof(arr1));//ͬ�ϣ���Ϊ����char���ͣ���˴�СΪ10
//	test1(arr);//���ν���Ϊ��Ԫ�ص�ַ
//	test2(arr1);//ͬ��
//	return 0;
//}

//int main()
//{
//	short a = 10;
//	int b = 5;
//	printf("%d\n", sizeof(a = b + 2));//short���ʹ�СΪ2
//	printf("%d\n", a);//sizeof�еı��ʽ����������
//	printf("%d\n", b);
//	return 0;
//}

// ����� ~ Ӧ��
//int main()
//{
//	int a = 10;
//
//	a |= (1 << (3 - 1));//�����λ������Ϊ1
//
//	a ^= ~(1 << (3 - 1));//~ΪΪ�˶�λ������λ�����������
//	//00000000 00000000 00000000 00001010
//	//11111111 11111111 11111111 11110101   ��λȡ��
//	//11111111 11111111 11111111 11110100   -1Ϊ����
//	//10000000 00000000 00000000 00001011   ֵΪ-11
//	printf("%d\n", ~a);
//	return 0;
//}

//����� ++ --
//int main()
//{
//	int a = 10;
//	printf("%d\n", a++);//�ȸ�ֵ������
//	printf("%d\n", a);
//	printf("%d\n", ++a);//�������ֵ
//	printf("%d\n", a);
//	return 0;
//}//--ͬ��

//����� *
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", *p);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//����ǿת(����)
//int main()
//{
//	//int a = 3.14;//����֣��ӡ�double��ת������int�������ܶ�ʧ����  ������
//	int a = (int)3.14;
//	return 0;
//}

//��ϵ����������>����>=����<=����<����!=����==�� ��������ע�⡰==���롰=��������
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (arr1 == arr2)//��Ϊ�����ַ�����ַ��Ƚ�
//	{
//		printf("�Ǻǣ�����\n");
//	}
//	return 0;//���κν����ʾ
//}

//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c1 = a && b;//�߼���
//	int c2 = a || b;//�߼���
//	printf("%d\n", c1);
//	printf("%d\n", c2);
//	return 0;
//}
//���⣺
//int main()
//{
//	int i = 0, j = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//1 2 3 4 ��Ϊa�������++ ��˵�һ��&&Ϊ�٣����治����
//	j = a++ || ++b || d++;//ǰ��Ϊ�� ���治��������
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	return 0;
//}

//��������������Ŀ��������exp1 ? exp1 : exp2
//int main()
//{
//	int a = 1;
//	int b;
//	/*if (a > 5)
//	{
//		b = 3;
//	}
//	else
//		b = -3;*/
//	b = (a > 5 ? 3 : -3);
//	printf("%d\n", b);
//	return 0;
//}

