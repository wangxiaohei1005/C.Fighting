#include "Slist.h"

void SListPrint(SListNode* pList)
{
	SListNode* cur = pList;
	while (cur != NULL)
	{
		printf("%d", cur->data);
		cur = cur->next;
	}
}

void SListPushBack(SListNode* pList, SLTDataType x)//Î²²å
{
 
}
void SListPushFront(SListNode* pList, SLTDataType x);//Í·²å


int child = n;
int parent = (n - 1) / 2;
while (parent > = 0)
{
	if (a[child] < a[parent])
	{
		int tmp = a[parent];
		a[parent] = a[child];
		a[child] = tmp;
		child = parent;
		parent = (child - 1) / 2;
	}
	else
	{
		break;
	}
}