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
//int removeElement(int* nums, int numsSize, int val)
//{
//	int src = 0;
//	int dst = 0;
//	while (numsSize > src)
//	{
//		if (nums[src] != val)
//		{
//			nums[dst] = nums[src];
//			src++;
//			dst++;
//		}
//		else
//		{
//			src++;
//		}
//		if (nums[dst] == NULL && nums[src] )
//		{
//			return 0;
//		}
//		else
//		{
//			return nums[dst];
//		}
//	}
//	
//}

//int removeElement(int* nums, int numsSize, int val){
//	int k = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] != val)
//		{
//			nums[k] = nums[i];
//			k++;
//		}
//	}
//	return k;
//}
//int removeDuplicates(int *nums, int numsSize){
//	if (numsSize == 0 || numsSize == 1) 
//		return numsSize;
//	int k = 1;
//	for (int i = 1; i<numsSize; i++)
//	{
//		if (nums[i] != nums[i - 1])
//		{
//			nums[k] = nums[i];
//			++k;
//		}
//	}
//	return k;
//}
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
//	void reverse(int* nums, int begin, int end)
//	{
//		while (begin < end)
//		{
//			int tmp = nums[begin];
//			nums[begin] = nums[end];
//			nums[end] = tmp;
//
//			++begin;
//			--end;
//		}
//	}
//
//	int end1 = m - 1;
//	int end2 = n - 1;
//	int end = m + n - 1;
//	while (end1 >= 0 && end2 >= 0)
//	{
//		if (nums1[end1] > nums2[end2])
//		{
//			nums1[end--] = nums1[end1--];
//		}
//		else
//		{
//			nums1[end--] = nums2[end2--];
//		}
//	}
//
//	while (end2 >= 0)
//	{
//		nums1[end--] = nums2[end2--];
//
//	}
//}


//void SListPrint(SListNode* pList)
//{
//	SListNode* cur = pList;
//	while (cur != NULL)
//	{
//		printf("%d->", cur->data);
//		cur = cur->next;
//	}
//
//	printf("NULL\n");
//}
//
//SListNode* BuySListNode(SLTDataType x)
//{
//	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
//	newNode->data = x;
//	newNode->next = NULL;
//
//	return newNode;
//}
//
//void SListPushBack(SListNode** ppList, SLTDataType x)
//{
//	SListNode* newNode = BuySListNode(x);
//
//	if (*ppList == NULL)
//	{
//		*ppList = newNode;
//	}
//	else
//	{
//		SListNode* tail = *ppList;
//		while (tail->next != NULL)
//		{
//			tail = tail->next;
//		}
//
//		tail->next = newNode;
//	}
//}
//
//void SListPushFront(SListNode** ppList, SLTDataType x)
//{
//	SListNode* newNode = BuySListNode(x);
//	newNode->next = *ppList;
//	*ppList = newNode;
//}
//
//void SListPopBack(SListNode** ppList)
//{
//	// 1.空
//	// 2.只有一个节点
//	// 3.有多个节点
//	if (*ppList == NULL)
//	{
//		return;
//	}
//	else if ((*ppList)->next == NULL)
//	{
//		free(*ppList);
//		*ppList = NULL;
//	}
//	else
//	{
//		SListNode* prev = NULL;
//		SListNode* tail = *ppList;
//		while (tail->next != NULL)
//		{
//			prev = tail;
//			tail = tail->next;
//		}
//
//		free(tail);
//		if (prev != NULL)
//			prev->next = NULL;
//	}
//}

//void reverse(int* nums, int begin, int end)
//{
//	while (begin < end)
//	{
//		int tmp = nums[begin];
//		nums[begin] = nums[end];
//		nums[end] = tmp;
//		++begin;
//		--end;
//	}
//}
//int* addToArrayForm(int* A, int ASize, int K, int* returnSize){
//	int* addRet = (int*)malloc(10001 * sizeof(int));
//	int reti = 0;
//	int ai = ASize - 1;
//	int next = 0; // 进位值
//	while (ai >= 0 || K > 0)
//	{
//		int x1 = 0;
//		if (ai >= 0)
//		{
//			x1 = A[ai];
//			--ai;
//		}
//
//		int x2 = 0;
//		if (K > 0)
//		{
//			x2 = K % 10;
//			K /= 10;
//		}
//
//		int ret = x1 + x2 + next;
//		if (ret > 9)
//		{
//			ret %= 10;
//			next = 1;
//		}
//		else
//		{
//			next = 0;
//		}
//		addRet[reti++] = ret;
//	}
//
//	if (next == 1)
//	{
//		addRet[reti++] = 1;
//	}
//
//	reverse(addRet, 0, reti - 1);
//	*returnSize = reti;
//
//	return addRet;
//}
//void reverse(int* nums, int begin, int end)
//{
//	while (begin < end)
//	{
//		int tmp = nums[begin];
//		nums[begin] = nums[end];
//		nums[end] = tmp;
//		++begin;
//		--end;
//	}
//}
//
//void rotate(int* nums, int numsSize, int k){
//	if (k > numsSize)
//	{
//		k %= numsSize;
//	}
//
//	reverse(nums, 0, numsSize - 1);
//	reverse(nums, 0, k - 1);
//	reverse(nums, k, numsSize - 1);
//}
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
//	void reverse(int* nums, int begin, int end)
//	{
//		while (begin < end)
//		{
//			int tmp = nums[begin];
//			nums[begin] = nums[end];
//			nums[end] = tmp;
//
//			++begin;
//			--end;
//		}
//	}
//
//	int end1 = m - 1;
//	int end2 = n - 1;
//	int end = m + n - 1;
//	while (end1 >= 0 && end2 >= 0)
//	{
//		if (nums1[end1] > nums2[end2])
//		{
//			nums1[end--] = nums1[end1--];
//		}
//		else
//		{
//			nums1[end--] = nums2[end2--];
//		}
//	}
//
//	while (end2 >= 0)
//	{
//		nums1[end--] = nums2[end2--];
//
//	}
//}

//int main()//求出一个数距离最近的菲波那切数的步数
//{
//	int n = 0;
//	scanf("%d", &n);
//	int f1 = 0,f2 = 1;
//	int f3 = 0;
//	while (f2 < n)
//	{
//		f3 = f2 + f1;
//		f1 = f2;
//		f2 = f3;
//	}
//	int x1 = n - f1;
//	int x2 = n - f2;
//	if (x2 < x1)
//	{
//		printf("%d", x2);
//	}
//	else
//	{
//		printf("%d", x1);
//	}
//
//	return 0;
//}

/* 
char  signed char    
unsigned char
int a = 10;
  //a:   000000000 00000000 00000000 00001010
int b = -20;
//b:原码：10000000 00000000 00000000 00010100
    反码：11111111 11111111 11111111 11101011
	补码：11111111 11111111 11111111 11101100
*/

//void Func2(int N)
//{
//	int count = 0;
//	for (int k = 0; k < 2 * N; ++k)
//	{
//		++count;
//	}
//}
//int M = 10;
//while (M--)
//{
//	++count;
//}
//printf("%d\n", count);

long long Fibonacci(size_t N)
{
	return N < 2 ? N : Fibonacci(N - 1) + Fibonacci(N - 2);
}
//int main()
//{
//	printf("%d\n", Fibonacci(50));
//}//递归中斐波那的时间复杂度为2^N，因此工作效率较低

//二分查找
int DoubleSearch(int* a, int n, int x)
{
	assert(a);
	int begin = 0;
	int end = n - 1;
	while (begin < end)
	{
		int mid = begin + ((end - begin) >> 1);
		if (a[mid] < x)
		{
			begin = mid + 1;
		}
		else if (a[mid] > x)
		{
			end = mid;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

//顺序表的静态存储
#define N 100
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType array[N];//定长数组
	size_t size;//有效数据的长度
}SeqList;

//顺序表的动态存储
typedef struct SeqList
{
	SLDataType* array;//指向动态开辟的数组
	size_t size;//有效数据个数
	size_t capicity;//容量空间的大小
}Seqlist;


