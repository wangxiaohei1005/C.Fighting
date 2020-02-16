#include "SeqList.h"



void SeqListInit(SeqList* ps)//初始化
{
	assert(ps);

	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
void SeqListDestory(SeqList* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListPrint(SeqList* ps)
{
	assert(ps);
	for (size_t i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void CheckCapacity(SeqList* ps)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		size_t newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		ps->a = (SLDateType*)realloc(ps->a, newcapacity * sizeof(SLDateType));
		ps->capacity = newcapacity;
	}
}

void SeqListPushBack(SeqList* ps, SLDateType x)//尾插
{

	/*assert(ps);
	CheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;*/
	SeqListInsert(ps, ps->size, x);
}
void SeqListPushFront(SeqList* ps, SLDateType x)//头插
{
	/*assert(ps);
	CheckCapacity(ps);

	size_t end = ps->size;
	while (end > 0)
	{
		ps->a[end] = ps->a[end - 1];
		--end;
	}
	ps->a[0] = x;
	++ps->size;*/
	SeqListInsert(ps, 0, x);

}
void SeqListPopFront(SeqList* ps)//头删
{
	assert(ps);
	size_t start = 1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		++start;
	}
	--ps->size;
}
void SeqListPopBack(SeqList* ps)//尾删
{
	assert(ps);
	ps->size--;
}
int SeqListFind(SeqList* ps, SLDateType x)//查找
{
	for (size_t i = 0; i < ps->size; ++i)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void SeqListInsert(SeqList* ps, size_t pos, SLDateType x)//插入指定位置
{
	assert(ps);
	assert(pos <= ps->size);
	
	CheckCapacity(ps);
	size_t end = ps->size ;
	while (end > pos)
	{
		ps->a[end] = ps->a[end - 1];
		--end;
	}
	ps->a[pos] = x;
	++ps->size;
}
void SeqListErase(SeqList* ps, size_t pos)//删除指定位置
{
	assert(ps && pos < ps->size);
	size_t start = ps->size;
	while (start < ps->size - 1)
	{
		ps->a[start] = ps->a[start + 1];
		++start;

	}

	ps->size--;
}