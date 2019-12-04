#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLDateType;
typedef struct SeqList
{
	SLDataType* a; // ָ��̬���ٵ�����
	size_t size;    // ��Ч���ݸ���
	size_t capicity;  // �����ռ�Ĵ�С
}SeqList;


void SeqListInit(SeqList* ps);//��ʼ��
void SeqListDestory(SeqList* ps);//����
void SeqListPrint(SeqList* ps);//��ӡ
void SeqListPushBack(SeqList* ps, SLDateType x);//β��
void SeqListPushFront(SeqList* ps, SLDateType x);//ͷ��
void SeqListPopFront(SeqList* ps);//ͷɾ
void SeqListPopBack(SeqList* ps);//βɾ


// ˳������
int SeqListFind(SeqList* ps, SLDateType x);
// ˳�����posλ�ò���x
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x);
// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(SeqList* ps, size_t pos);