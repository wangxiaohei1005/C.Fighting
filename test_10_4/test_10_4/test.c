#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void swap2(int *px, int *py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	swap1(num1, num2);
//	printf("swap1::num1=%d num2=%d\n",num1,num2);
//	swap2(&num1, &num2);
//	printf("swap2::num1=%d num2=%d\n", num1, num2);
//	return 0;
//}
int get_max(int x, int y)
{
	return (x > y) ? (x) : (y);
}
int main()
{
	int num1 = 15;
	int num2 = 25;
	int max = get_max(num1, num2);
	printf("max=%d\n",max);
	return 0;
}