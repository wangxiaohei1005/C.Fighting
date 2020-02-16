#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


typedef int SLDateType;
typedef struct SeqList
{
	SLDateType*  a;
	size_t size;//有效数据
	size_t capacity;//容量
}SeqList;

//对数据的管理（增 删 查 改）
void SeqListInit(SeqList* ps);
void SeqListDestory(SeqList* ps);

void SeqListPrint(SeqList* ps);
void SeqListPushBack(SeqList* ps, SLDateType x);//尾插
void SeqListPushFront(SeqList* ps, SLDateType x);//头插
void SeqListPopFront(SeqList* ps);//头删
void SeqListPopBack(SeqList* ps);//尾删
int SeqListFind(SeqList* ps, SLDateType x);//查找
void SeqListInsert(SeqList* ps,size_t pos,SLDateType x);//插入指定位置
void SeqListErase(SeqList* ps,size_t pos);//删除指定位置

