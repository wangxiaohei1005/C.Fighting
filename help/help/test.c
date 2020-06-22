//#include <stdio.h>
//
//int Student(char student[])
//{
//	int number = 62;
//	int average;
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < number; i++)
//	{
//		sum = sum + student[i];
//		average = sum / number;
//	}
//	return average;
//}
//
//int main()
//{
//	char student[62];
//	int i = 0;
//	for (i = 0; i < 62; i++)
//	{
//		scanf("%d", &student[i]);
//	}
//	int tmp = Student(student);
//	printf("%d\n", tmp);
//}

//#include <stdio.h>
//
//int main()
//{
//	char a[3][2], b[2][3];
//	for (int i = 0; i <= 3; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			scanf("%d", &a[i][j]);
//			b[j][i] = a[i][j];
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int mark;
//	char end;
//	scanf("%d", &mark);
//	if (mark >= 90)
//		end = 'A';
//	else if (mark >= 60 && mark <= 89)
//		end = 'B';
//	else
//		end = 'C';
//	printf("%c", end);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int lifang = 0;
//	int pingfang = 0;
//	pingfang = (a*a) + (b*b);
//	lifang = (a*a*a) + (b*b*b);
//	printf("平方和为：%d  立方和为： %d\n", pingfang, lifang);
//	return 0;
//}

//#include <stdio.h>
//void average(int m[20], int n[25])
//{
//	int sumA = 0, sumB = 0;
//	for (int i = 0; i < 20; i++)
//	{
//		sumA = sumA + m[i];
//	}
//	for (int j = 0; j < 25; j++)
//	{
//		sumB = sumB + n[j];
//	}
//	int averageA = sumA / 20;
//	int averageB = sumB / 25;
//}
//
//int main()
//{
//	int one[20], two[25];
//	for (int i = 0; i < 20; i++)
//	{
//		scanf("%d", one[i]);
//	}
//	for (int i = 0; i < 25; i++)
//	{
//		scanf("%d", two[i]);
//	}
//	average(one, two);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int mark[20];
	int sum = 0;
	int average = 0;//平均成绩
	int a;
	int end[20];//排序后的数组
	for (int i = 0; i < 20; i++)
	{
		scanf("%d", &a);
		mark[i] = a;
		sum = sum + mark[i];
		end[i] = mark[i];
	}
	average = sum / 20;
	printf("平均数是：%d\n", average);
	int min = 0;
	for (int i = 0; i < 20; i++)    
	{
		for (int j = 0; j < 20 - i; j++)    
		{
			if (end[j]>end[j + 1])
			{
				int t = end[j];
				end[j] = end[j + 1];
				end[j + 1] = t;
			}
		}
	}
	printf("排序后的顺序是：\n");
	for (int i = 0; i < 20; i++)
	{
		printf("%d", end[i]);
	}
	printf("\n");
	printf("第19位同学的成绩是：%d", end[18]);
	return 0;
}