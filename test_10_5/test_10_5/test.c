#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{ 
//		printf("%d ", arr1[i]);
//	}
//for (i = 0; i < sz; i++)
//	{ 
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}.

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i < 100; i++)
//	{
//		/*if (i % 2 == 1)
//		{
//			sum += (1.0 / i);
//		}
//		else
//		{
//			sum -= 1.0 /i ;
//		}*/
//		sum += (1.0 / i)*flag;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//

int main()
{
	int i = 0;
	int count =0;
	for (i = 1; i <=100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		 if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("\ncounbt=%d\n",count);
	return 0;
}