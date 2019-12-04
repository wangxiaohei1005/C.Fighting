#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLDateType;
typedef struct SeqList
{
	SLDataType* a; // 指向动态开辟的数组
	size_t size;    // 有效数据个数
	size_t capicity;  // 容量空间的大小
}SeqList;


void SeqListInit(SeqList* ps);//初始化
void SeqListDestory(SeqList* ps);//销毁
void SeqListPrint(SeqList* ps);//打印
void SeqListPushBack(SeqList* ps, SLDateType x);//尾插
void SeqListPushFront(SeqList* ps, SLDateType x);//头插
void SeqListPopFront(SeqList* ps);//头删
void SeqListPopBack(SeqList* ps);//尾删


// 顺序表查找
int SeqListFind(SeqList* ps, SLDateType x);
// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x);
// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, size_t pos);