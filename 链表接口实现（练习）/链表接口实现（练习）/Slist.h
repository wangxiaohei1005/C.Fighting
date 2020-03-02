#pragma once
#include <stdio.h>
#include <malloc.h>

typedef int SLTDataType;
typedef struct SList
{
	SLTDataType data;
	struct SListNode* next;

}SListNode;

void SListPrint(SListNode* pList);//¥Ú”°
void SListPushBack(SListNode* pList, SLTDataType x);//Œ≤≤Â
void SListPushFront(SListNode* pList, SLTDataType x);//Õ∑≤Â