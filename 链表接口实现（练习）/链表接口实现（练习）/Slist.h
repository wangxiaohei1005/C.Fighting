#pragma once
#include <stdio.h>
#include <malloc.h>

typedef int SLTDataType;
typedef struct SList
{
	SLTDataType data;
	struct SListNode* next;

}SListNode;

void SListPrint(SListNode* pList);//��ӡ
void SListPushBack(SListNode* pList, SLTDataType x);//β��
void SListPushFront(SListNode* pList, SLTDataType x);//ͷ��