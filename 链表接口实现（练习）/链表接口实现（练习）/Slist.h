#pragma once

typedef int SLTDataType;
typedef struct SList
{
	SLTDataType data;
	struct SListNode* next;

}SListNode;

void SListPrint(SListNode* pList);