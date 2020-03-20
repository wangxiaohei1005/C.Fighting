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
	for (int i = 0; i < n - 1; ++i)
	{
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

void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
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

void SelectSort(int* a, int n)
{
	int begin = 0;
	int end = n - 1;
	while (begin < end)
	{
		int mini = begin;
		int maxi = end;
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
