#pragma once

void PrintSort(int*a, int n)
{
	for (size_t i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void InsertSort(int* a, int n)
{
	//对end的位置进行控制   从0->n-2
	for (int i = 0; i < n - 1; ++i)
	{
		//单趟排序
		//在[0，end]区间中插入tmp，依旧有序
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
	int a[] = { 3, 6, 7, 8, 9, 2, 5, 11, 4, 1 };
	InsertSort(a, sizeof(a) / sizeof(int));
	PrintSort(a, sizeof(a) / sizeof(int));
}

//平均时间复杂度为:O(N^1.3)   
void ShellSort(int* a, int n)
{
	//gap > 1时为预排序
	//gap == 1时为直接插入排序
	int gap = n;
	while (gap > 1)
	{
		//间隔为gap的预排序
		gap = gap / 3 + 1;//其中 +1 是保证最后一次一定是1
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
	int a[] = { 3, 6, 7, 8, 9, 2, 5, 11, 4, 1 };
	ShellSort(a, sizeof(a) / sizeof(int));
	PrintSort(a, sizeof(a) / sizeof(int));
}
void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

//时间复杂度为O(N*N)
void SelectSort(int* a, int n)
{
	int begin = 0;
	int end = n - 1;
	while (begin < end)
	{
		int mini = begin;
		int maxi = end;
		//[begin,end]选出一个最小的，选出一个最大的下标
		for (int i = begin; i <= begin; ++i)
		{
			if (a[i] > a[maxi])
			{
				maxi = i;
			}
			if (a[i] < a[mini])
			{
				mini = i;
			}
		}
		Swap(&a[begin], &a[mini]);

		if (begin == maxi)
			maxi = mini;
		Swap(&a[end], &a[maxi]);
		
		++begin;
		--end;
	}

}

void TestSelecSort()
{
	int a[] = { 3, 6, 7, 8, 9, 2, 5, 11, 4, 1 };
	SelectSort(a, sizeof(a) / sizeof(int));
	PrintSort(a, sizeof(a) / sizeof(int));
}

void AdjustDwon(int* a, int n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child < n)
	{
		//选出左右孩子中较大的一个
		if (child + 1 < n && a[child + 1 ]> a[child])
		{
			++child;
		}
		//1、如果孩子比父亲大，交换，继续向下调整
		//2、如果孩子比父亲小，则调整结束
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

void HeapSort(int* a, int n)
{
//排升序，建大堆
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDwon(a, n, i);
	}
	int end = n - 1;
	while (end > 0)
	{
		//堆顶当前最大的数一次换至最后
		Swap(&a[0], &a[end]);
		//调堆选出剩下的数中最大的
		AdjustDwon(a, end, 0);
		--end;
	}

}

void TestHeapSort()
{
	int a[] = { 3, 6, 7, 8, 9, 2, 5, 11, 4, 1 };
	HeapSort(a, sizeof(a) / sizeof(int));
	PrintSort(a, sizeof(a) / sizeof(int));
}

void BubbleSort(int* a, int n)
{
  //单趟排序
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
	int a[] = { 3, 6, 7, 8, 9, 2, 5, 11, 4, 1 };
	BubbleSort(a, sizeof(a) / sizeof(int));
	PrintSort(a, sizeof(a) / sizeof(int));
}

int HoareMethod(int* a, int begin, int end)
{
	//end作为key,左边先走 / begin作为key，右边先走
	int key = a[end];
	int keyindex = end;
	while (begin < end)
	{
		//begin找大
		while (begin < end && a[begin] <= key)
			++begin;
		while (begin < end && a[end] >= key)
			--end;
		Swap(&a[begin], &a[end]);
	}
	Swap(&a[begin], &a[keyindex]);
	return begin;
}

//挖坑法  
int DigHoleMethod(int* a, int begin, int end)
{
	int key = a[end];
	while (begin < end)
	{
		//找更大的
		while (begin < end && a[begin] <= key)
			++begin;
		a[end] = a[begin];//找到大的   放在右边end形成新的坑

		while (begin < end && a[end] >= key)
			--end;
		a[begin] = a[end];//找到小的    放在左边begin形成新的坑
	}
	a[begin] = key;
	return begin;
}

int PrevCurMethSort(int* a, int begin, int end)
{
	int prev = begin - 1;
	int cur = begin;
	int key = a[end];
	while (cur < end)
	{
		if (a[cur] < key && ++prev != cur)
		{
			Swap(&a[prev], &a[cur]);
		}
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

	int keyindex = PrevCurMethSort(a, begin, end);
	QuickSort(a, begin, keyindex - 1);
	QuickSort(a, keyindex + 1, end);

}

void TestQuickSort()
{
	int a[] = { 3, 6, 7, 8, 9, 2, 5, 11, 4, 1 };
	QuickSort(a, 0,sizeof(a) / sizeof(int));
	PrintSort(a, sizeof(a) / sizeof(int));
}

int GetMidIndex(int* a, int begin, int end)
{
	int mid = (begin + end) >> 1;
	if (a[begin] < a[mid])
	{
		if (a[mid] < a[end])
		{
			return mid;
		}
		else if (a[begin] < a[end])
		{
			return end;
		}
		else
			return begin;
	}
	else
	{
		if (a[mid] < a[end])
			return mid;
		else if (a[begin] < a[mid])
			return begin;
		else
			return end;
	}
}