#include "Heap.h"

// Ð¡¶Ñ 
void Swap(int* a, int* b)
{
	int x = *a;
	*a = *b;
	*b = x;
}

void AdjustDown(HpDataType* a, size_t n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child + 1] < a[child])
		{
			++child;
		}
		if (a[parent] > a[child])
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

void HeapCreate(Heap* hp, HpDataType* a, size_t n)
{
	hp->_a = (HpDataType*)malloc(sizeof(HpDataType)*n);
	memcpy(hp->_a, a, sizeof(HpDataType)*n);
	hp->_size = n;
	hp->_capacity = n;

	// Ð¡¶Ñ
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(hp->_a, hp->_size, i);
	}
}

void HeapDestory(Heap* hp)
{
	free(hp->_a);
	hp->_size = hp->_capacity = 0;
	hp->_a = NULL;
}

void AdjustUp(int* a, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}


void HeapPush(Heap* hp, HpDataType x)
{
	if (hp->_size == hp->_capacity)
	{
		size_t newcapacity = hp->_capacity * 2;
		hp->_a = (HpDataType*)realloc(hp->_a, sizeof(HpDataType)*newcapacity);
		hp->_capacity = newcapacity;
	}

	hp->_a[hp->_size] = x;
	hp->_size++;

	AdjustUp(hp->_a, hp->_size - 1);
}

void HeapPop(Heap* hp)
{
	Swap(&hp->_a[0], &hp->_a[hp->_size - 1]);
	hp->_size--;

	AdjustDown(hp->_a, hp->_size, 0);
}

HpDataType HeapTop(Heap* hp)
{
	return hp->_a[0];
}

int HeapEmpty(Heap* hp)
{
	return hp->_size == 0 ? 1 : 0;
}

void HeapPrint(Heap* hp)
{
	for (int i = 0; i < hp->_size; ++i)
	{
		printf("%d ", hp->_a[i]);
	}
	printf("\n");
}


void PrintTopK(int* a, int n, int k)
{
	// Ð¡¶Ñ
	Heap hp;
	HeapCreate(&hp, a, k);

	for (int i = k; i < n; ++i)
	{
		if (HeapTop(&hp) < a[i])
		{
			HeapPop(&hp);
			HeapPush(&hp, a[i]);
		}
	}

	HeapPrint(&hp);
}

void TestTopk()
{
	int n = 10000;
	int* a = (int*)malloc(sizeof(int)*n);
	srand(time(0));
	for (size_t i = 0; i < n; ++i)
	{
		a[i] = rand() % 1000000;
	}
	a[15] = 1000000 + 1;
	a[1231] = 1000000 + 2;
	a[531] = 1000000 + 30;
	a[5121] = 1000000 + 4;
	a[115] = 1000000 + 5;
	a[2335] = 1000000 + 6;
	a[9999] = 1000000 + 7;
	a[760] = 1000000 + 8;
	a[423] = 1000000 + 9;
	a[3144] = 1000000 + 10;
	PrintTopK(a, n, 10);
}