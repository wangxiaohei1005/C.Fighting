#pragma once

void PrintArray(int* a, int n)
{
	for (size_t i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
}

void InsertSort(int* a, int n)
{
	// ����end��λ�ô�0�ߵ�n-2
	for (int i = 0; i < n - 1; ++i)
	{
		// ��������
		// ��[0,end]�����в���tmp����������
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}

void TestInsertSort()
{
	int a[] = { 3, 6, 2, 5, 7, 9, 8, 6, 1, 4 };
	InsertSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}

// ƽ��ʱ�临�Ӷȣ�O(N^1.3)  ʲô��������˳������(Ԥ����ȫ�������ˣ�������ֱ�Ӳ�������)
void ShellSort(int* a, int n)
{
	// gap > 1ʱΪԤ����         �ӽ�����
	// gap == 1ʱΪֱ�Ӳ�������  ����
	int gap = n;
	while (gap > 1)
	{
		// ���Ϊgap��Ԥ����
		gap = gap / 3 + 1;  // +1�Ǳ�֤���һ��һ����1
		for (int i = 0; i < n - gap; ++i)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}

			a[end + gap] = tmp;
		}
	}
}

void TestShellSort()
{
	int a[] = { 3, 6, 2, 5, 7, 9, 8, 6, 1, 4 };
	ShellSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

// ʱ�临�Ӷ� O(N*N)
void SelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		// [begin, end] ѡ��һ����С�ģ�ѡ��һ�������±�
		int mini = begin, maxi = end;
		for (int i = begin; i <= end; ++i)
		{
			if (a[i] > a[maxi])
				maxi = i;

			if (a[i] < a[mini])
				mini = i;
		}
		Swap(&a[begin], &a[mini]);
		// ����
		if (begin == maxi)
			maxi = mini;

		Swap(&a[end], &a[maxi]);

		//printf("[%d,%d]", begin, end);
		//PrintArray(a, n);

		++begin;
		--end;	
	}
}

void TestSelectSort()
{
	int a[] = { 3, 6, 2, 5, 7, 9, 8, 6, 1, 4 };
	// int a[] = { 9, 6, 2, 5, 7, 3, 8, 6, 1, 4 };
	SelectSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}

void AdjustDwon(int* a, int n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child < n)
	{
		// ѡ�����Һ����д����һ��
		if (child+1 < n && a[child+1] > a[child])
		{
			++child;
		}

		// 1�������ֽ�ȸ��״󣬽������������µ���
		// 2�������ֽС�ڸ��ף����������
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

// O(N*LogN)
void HeapSort(int* a, int n)
{
	// �����򣬽����
	// O(N)
	for (int i = (n-1-1)/2; i >= 0; --i)
	{
		AdjustDwon(a, n, i);
	}

	int end = n - 1;
	while (end > 0)
	{
		// �ѶѶ���ǰ�����һ�λ������
		Swap(&a[0], &a[end]);
		// ����ѡ��ʣ�µ����������
		AdjustDwon(a, end, 0);
		--end;
	}
}

void TestHeapSort()
{
	int a[] = { 3, 6, 2, 5, 7, 9, 8, 6, 1, 4 };
	// int a[] = { 9, 6, 2, 5, 7, 3, 8, 6, 1, 4 };
	HeapSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}

void BubbleSort(int* a, int n)
{
	// ��������
	for (int end = n - 1; end > 0; --end)
	{
		int flag = 0;
		for (int i = 0; i < end; ++i)
		{
			if (a[i] > a[i + 1])
			{
				Swap(&a[i], &a[i + 1]);
				flag = 1;
			}
		}

		if (flag == 0)
		{
			break;
		}
	}
}

void TestBubbleSort()
{
	int a[] = { 3, 6, 2, 5, 7, 9, 8, 6, 1, 4 };
	// int a[] = { 9, 6, 2, 5, 7, 3, 8, 6, 1, 4 };
	BubbleSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}

int GetMidIndex(int* a, int begin, int end)
{
	int mid = (begin + end) >> 1;
	// begin mid end
	if (a[begin] < a[mid])
	{
		if (a[mid] < a[end])
			return mid;
		else if (a[begin] < a[end]) // a[mid] > a[end]
			return end;
		else
			return begin;
	}
	else // a[begin] > a[mid]
	{
		if (a[mid] > a[end])
			return mid;
		else if (a[begin] < a[end]) // a[mid] < a[end]
			return begin;
		else
			return end;
	}
}

// hoare��
int HoareMethod(int* a, int begin, int end)
{
	// end��key��������� / begin��key���ұ�����
	int key = a[end];
	int keyindex = end;
	while (begin < end)
	{
		// begin�Ҵ�
		while (begin < end && a[begin] <= key)
			++begin;

		// end��С
		while (begin < end && a[end] >= key)
			--end;

		Swap(&a[begin], &a[end]);
	}

	Swap(&a[begin], &a[keyindex]);

	return begin;
}

// �ڿӷ� �����hoare����һЩ�Ľ���������������ף��Ҳ����׷���
int DigHoleMethod(int* a, int begin, int end)
{
	int key = a[end];
	while (begin < end)
	{
		// �Ҵ�
		while (begin < end && a[begin] <= key)
			++begin;
		a[end] = a[begin]; // �ҵ����ӵ��ұߵĿ�����ȥ,ͬʱend�γ��µĿ�λ

		while (begin < end && a[end] >= key)
			--end;
		a[begin] = a[end]; // �ҵ�С�ӵ���ߵĿ�����ȥ��ͬʱbegin�γ��µĿ�λ
	}

	a[begin] = key;
	return begin;
}

// ǰ��ָ��汾 �߼����󣬵���ʵ�ֺܼ��
int PrevCurMethod(int* a, int begin, int end)
{
	int midindex = GetMidIndex(a, begin, end);
	Swap(&a[midindex], &a[end]);

	int prev = begin-1;
	int cur = begin;
	int key = a[end];

	while (cur < end) // ����key��λ�þͽ�����
	{
		if (a[cur] < key && ++prev != cur)
			Swap(&a[prev], &a[cur]);
		++cur;
	}

	++prev;
	Swap(&a[prev], &a[end]);

	return prev;
}

void QuickSort(int* a, int begin, int end)
{
	if (begin >= end)
		return;

	int keyindex = PrevCurMethod(a, begin, end);
	//int keyindex = DigHoleMethod(a, begin, end);

	// [begin, keyindex-1]  key  [keyindex+1,end]
	QuickSort(a, begin, keyindex - 1);
	QuickSort(a, keyindex+1, end);
}

#include "stack.h"

// �ǵݹ�
void QuickSortNonR(int* a, int begin, int end)
{
	// ���ݽṹ��ջ��ģ��ݹ�
	Stack st;
	StackInit(&st);
	StackPush(&st, begin);
	StackPush(&st, end);
	while (!StackEmpty(&st))
	{
		int right = StackTop(&st);
		StackPop(&st);
		int left = StackTop(&st);
		StackPop(&st);
		int keyindex = PrevCurMethod(a, left, right);
		//[left, keyindex-1] keyindex [keyindex+1, right]
		if (left < keyindex-1)
		{
			StackPush(&st, left);
			StackPush(&st, keyindex - 1);
		}
		if (keyindex+1 < right)
		{
			StackPush(&st, keyindex+1);
			StackPush(&st, right);
		}
	}


	StackDestroy(&st);
}

void TestQuickSort()
{
	int a[] = { 3, 3, 2, 5, 7, 9, 8, 6, 1, 5 };
	//QuickSort(a, 0, sizeof(a) / sizeof(int)-1);
	QuickSortNonR(a, 0, sizeof(a) / sizeof(int)-1);
	PrintArray(a, sizeof(a) / sizeof(int));
}

void _MergeSort(int* a, int begin, int end, int* tmp)
{
	if (begin >= end)
		return;

	// �Ȼ���
	int mid = (begin + end) >> 1;
	// [begin, mid][mid+1,end] ����
	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid+1, end, tmp);

	// [begin, mid][mid+1,end] ����
	// �鲢������������
	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;
	int index = begin;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
			tmp[index++] = a[begin1++];
		else
			tmp[index++] = a[begin2++];
	}

	if (begin1 <= end1)
	{
		while (begin1<=end1)
			tmp[index++] = a[begin1++];
	}
	else
	{
		while (begin2 <= end2)
			tmp[index++] = a[begin2++];
	}

	// ���鲢��tmp�����ݹ鲢��Ԫ����
	memcpy(a + begin, tmp + begin, sizeof(int)*(end - begin+1));
}

void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int)*n);
	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
}

void TestMergeSort()
{
	int a[] = { 3, 3, 2, 5, 7, 9, 8, 6, 1, 5 };
	MergeSort(a,sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}


