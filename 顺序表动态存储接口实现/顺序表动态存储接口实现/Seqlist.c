#include "SeqList.h"

void SeqListInit(SeqList* ps)//初始化
{
	assert(ps);

	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
void SeqListDestory(SeqList* ps)//销毁
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}
void SeqListPrint(SeqList* ps)//打印
{
	assert(ps);

	for (size_t i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}

	printf("%\n");
}
void SeqListPushBack(SeqList* ps, SLDateType x)//尾插
{
	assert(ps);

}
void SeqListPushFront(SeqList* ps, SLDateType x)//头插
{

}
void SeqListPopFront(SeqList* ps)//头删
{

}
void SeqListPopBack(SeqList* ps)//尾删
{

}


// 顺序表查找
int SeqListFind(SeqList* ps, SLDateType x)
{

}
// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x)
{

}
// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, size_t pos)
{

}
