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
//	int end 1 = 0;
//	int end 2 = 0;
//	int end = 0;
//}


void SListPrint(SListNode* pList)
{
	SListNode* cur = pList;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}

	printf("NULL\n");
}

SListNode* BuySListNode(SLTDataType x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}

void SListPushBack(SListNode** ppList, SLTDataType x)
{
	SListNode* newNode = BuySListNode(x);

	if (*ppList == NULL)
	{
		*ppList = newNode;
	}
	else
	{
		SListNode* tail = *ppList;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = newNode;
	}
}

void SListPushFront(SListNode** ppList, SLTDataType x)
{
	SListNode* newNode = BuySListNode(x);
	newNode->next = *ppList;
	*ppList = newNode;
}

void SListPopBack(SListNode** ppList)
{
	// 1.空
	// 2.只有一个节点
	// 3.有多个节点
	if (*ppList == NULL)
	{
		return;
	}
	else if ((*ppList)->next == NULL)
	{
		free(*ppList);
		*ppList = NULL;
	}
	else
	{
		SListNode* prev = NULL;
		SListNode* tail = *ppList;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}

		free(tail);
		if (prev != NULL)
			prev->next = NULL;
	}
}