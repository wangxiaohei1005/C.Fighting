#include "Seqlist.h"

void test()
{
	SeqListInit(SeqList* ps);//初始化
	SeqListDestory(SeqList* ps);//销毁
	SeqListPrint(SeqList* ps);//打印
	SeqListPushBack(SeqList* ps, SLDateType x);//尾插
	SeqListPushFront(SeqList* ps, SLDateType x);//头插
	SeqListPopFront(SeqList* ps);//头删
	SeqListPopBack(SeqList* ps);//尾删
}
int main()
{
	test();
	return 0;
}