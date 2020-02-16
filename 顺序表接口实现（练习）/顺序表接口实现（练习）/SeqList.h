#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


typedef int SLDateType;
typedef struct SeqList
{
	SLDateType*  a;
	size_t size;//��Ч����
	size_t capacity;//����
}SeqList;

//�����ݵĹ����� ɾ �� �ģ�
void SeqListInit(SeqList* ps);
void SeqListDestory(SeqList* ps);

void SeqListPrint(SeqList* ps);
void SeqListPushBack(SeqList* ps, SLDateType x);//β��
void SeqListPushFront(SeqList* ps, SLDateType x);//ͷ��
void SeqListPopFront(SeqList* ps);//ͷɾ
void SeqListPopBack(SeqList* ps);//βɾ
int SeqListFind(SeqList* ps, SLDateType x);//����
void SeqListInsert(SeqList* ps,size_t pos,SLDateType x);//����ָ��λ��
void SeqListErase(SeqList* ps,size_t pos);//ɾ��ָ��λ��

