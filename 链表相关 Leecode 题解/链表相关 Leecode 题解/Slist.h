#pragma once

#include <stdio.h>
#include <malloc.h>

typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data; // val
	struct SListNode* next;
}SListNode;

void SListPrint(SListNode* pList);
void SListPushBack(SListNode** ppList, SLTDataType x);
void SListPushFront(SListNode** pList, SLTDataType x);

void SListPopBack(SListNode** ppList);
void SListPopFront(SListNode** pList);