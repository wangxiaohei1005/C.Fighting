#include "SeqList.h"

void SeqListInit(SeqList* ps)//��ʼ��
{
	assert(ps);

	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
void SeqListDestory(SeqList* ps)//����
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}
void SeqListPrint(SeqList* ps)//��ӡ
{
	assert(ps);

	for (size_t i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}

	printf("%\n");
}
void SeqListPushBack(SeqList* ps, SLDateType x)//β��
{
	assert(ps);

}
void SeqListPushFront(SeqList* ps, SLDateType x)//ͷ��
{

}
void SeqListPopFront(SeqList* ps)//ͷɾ
{

}
void SeqListPopBack(SeqList* ps)//βɾ
{

}


// ˳������
int SeqListFind(SeqList* ps, SLDateType x)
{

}
// ˳�����posλ�ò���x
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x)
{

}
// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(SeqList* ps, size_t pos)
{

}
