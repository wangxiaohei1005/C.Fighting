#include "Seqlist.h"

void test()
{
	SeqListInit(SeqList* ps);//��ʼ��
	SeqListDestory(SeqList* ps);//����
	SeqListPrint(SeqList* ps);//��ӡ
	SeqListPushBack(SeqList* ps, SLDateType x);//β��
	SeqListPushFront(SeqList* ps, SLDateType x);//ͷ��
	SeqListPopFront(SeqList* ps);//ͷɾ
	SeqListPopBack(SeqList* ps);//βɾ
}
int main()
{
	test();
	return 0;
}