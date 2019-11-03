#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <malloc.h>
#include <math.h>

/*5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
A选手说：B第二，我第三；(B == 3 && A != 3) || (B != 2 && A == 3);
B选手说：我第二，E第四；(B == 2 && E != 4) || (B != 2 && E == 4);
C选手说：我第一，D第二；(C == 1 && D != 2) || (C != 1 && D == 2);
D选手说：C最后，我第三；(C == 5 && D != 3) || (C != 5 && D == 3);
E选手说：我第四，A第一；(E == 4 && A != 1) || (E != 4 && A == 1);
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。*/


//int main()
//{
//	int A, B, C, D, E;
//	for (A = 1; A <= 5; ++A)
//	{
//		for (B = 1; B <= 5; ++B)
//		{
//			for (C = 1; C <= 5; ++C)
//			{
//				for (D = 1; D <= 5; ++D)
//				{
//					for (E = 1; E <= 5; ++E)
//					{
//						if (
//							((B == 3 && A != 3) || (B != 2 && A == 3))
//							&& ((B == 2 && E != 4) || (B != 2 && E == 4))
//							&& ((C == 1 && D != 2) || (C != 1 && D == 2))
//							&& ((C == 5 && D != 3) || (C != 5 && D == 3))
//							&& ((E == 4 && A != 1) || (E != 4 && A == 1))
//							)
//						{
//							/*if (A != B && A != C && A != D && A != E
//								&& B != C && B != D && B != E
//								&& C != D && C != E
//								&& D != E)*/
//							if (A*B*C*D*E == 120)
//							{
//								printf("A=%d B=%d C=%d D=%d E=%d\n", A, B, C, D, E);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

/*日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
嫌疑犯的一个。以下为4个嫌疑犯的供词。
A说：不是我。  killer != 1
B说：是C。     killer == 3
C说：是D。     killer == 4
D说：C在胡说   killer != 4
已知3个人说了真话，1个人说的是假话。
现在请根据这些信息，写一个程序来确定到底谁是凶手。*/

//int main()
//{
//	int killer;
//	for (killer = 1; killer <= 5; ++killer)
//	{
//		if ((killer != 1) + (killer == 3) + (killer == 4) + (killer != 4) == 3)
//		{
//			printf("凶手是：%c\n",  killer - 1 + 'A');
//		}
//	}
//	return 0;
//}

/*
在屏幕上打印杨辉三角。
1
1 1
1 2 1
1 3 3 1
*/
//int main()
//{
//	int row;
//	printf("Input:\n");
//	scanf("%d", &row);
//	int** arr = (int**)malloc(sizeof(int*)* row);
//	for (int i = 0; i < row; ++i)
//	{
//		arr[i] = (int*)malloc(sizeof(int)* (i + 1));
//	}
//	for (int i = 0; i < row; ++i)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//
//	}
//	for (int i = 2; i < row; ++i)
//	{
//		for (int j = 1; j < i; ++j)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//
//		}
//	}
//	for (int i = 0; i < row; ++i)
//	{
//		for (int j = 0; j <= i; ++j)
//		{
//			printf("%d  ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < row; ++i)
//	{
//		free(arr[i]);
//	}
//	free(arr);
//	return 0;
//}


//unsigned int reverse(unsigned int val)
//{
//	unsigned int ret = 0;
//	for (int i = 0; i < 32; ++i)
//	{
//		printf("%d * 2 ^ (31 - %d) +  ", (val >> i) & 1, i);
//		ret += ((val >> i) & 1) * pow(2, 31 - i);
//	}
//	printf("\n");
//	return ret;
//}
//
//int main()
//{
//	unsigned int val;
//	scanf("%u", &val);
//	printf("%u\n", reverse(val));
//	return 0;
//}

//unsigned int reverse1(unsigned int val)
//{
//	unsigned  ret = 0;
//	for (int i = 0; i < 32; ++i)
//	{
//		ret <<= 1;
//		ret ^= (val >> i) & 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	unsigned int val;
//	scanf("%u", &val);
//	printf("%u\n", reverse(val));
//	printf("%u\n", reverse1(val));
//	return 0;
//}


int pingjun(int a, int b)
{
	return a & b + ((a^b) >> 1);
}
int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	printf("%d\n",pingjun(m, n));
	return 0;
}


