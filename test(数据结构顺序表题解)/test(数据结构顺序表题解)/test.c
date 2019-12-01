#include <stdio.h>
//
//void Func1(int N) 
//{
//	int count = 0;
//	for (int i = 0; i < N; ++i) 
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			++count;//此处时间复杂度应该为n^2
//		}
//	}
//	for (int k = 0; k < 2 * N; ++k) 
//	{
//		++count;
//	}
//	int M = 10;
//	while (M--) 
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}
//
////int main()
////{
////	int N = 7;
////	Func1(N);
////	return 0;
////}
//
//void Func2(int N) 
//{
//	int count = 0;
//	for (int k = 0; k < 2 * N; ++k) 
//	{
//		++count;
//	}
//	int M = 10;
//	while (M--) 
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}
//
//
////int main()
////{
////	int N = 7;
////	Func2(N);
////	return 0;
////}
//
//void Func3(int N, int M) 
//{
//	int count = 0;
//	for (int k = 0; k < M; ++k) 
//	{
//		++count;
//	}
//	for (int k = 0; k < N; ++k) 
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}

//int main()
//{
//	int N = 7, M = 6;
//	Func3(N, M);
//	return 0;
//}
//
//long long Factorial(size_t N) 
//{
//	return N < 2 ? N : Factorial(N - 1)*N;
//}
int removeElement(int* nums, int numsSize, int val)
{
	int src = 0;
	int dst = 0;
	while (numsSize > src)
	{
		if (nums[src] != val)
		{
			nums[dst] = nums[src];
			src++;
			dst++;
		}
		else
		{
			src++;
		}
		if (nums[dst] == NULL && nums[src] )
		{
			return 0;
		}
		else
		{
			return nums[dst];
		}
	}
	
}