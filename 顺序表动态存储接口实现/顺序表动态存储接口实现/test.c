#include "Seqlist.h"

int main()
{
	SeqListInit(SeqList* ps);//��ʼ��
	SeqListDestory(SeqList* ps);//����
	SeqListPrint(SeqList* ps);//��ӡ
	SeqListPushBack(SeqList* ps, SLDateType x);//β��
	SeqListPushFront(SeqList* ps, SLDateType x);//ͷ��
	SeqListPopFront(SeqList* ps);//ͷɾ
	SeqListPopBack(SeqList* ps);//βɾ
	return 0;
}