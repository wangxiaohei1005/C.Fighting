#include "Listnode.h"

void ListDestory(ListNode* plist)
{

}
// ˫�������ӡ
void ListPrint(ListNode* plist);
// ˫������β��
void ListPushBack(ListNode* plist, LTDataType x)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode
}
// ˫������βɾ
void ListPopBack(ListNode* plist);
// ˫������ͷ��
void ListPushFront(ListNode* plist, LTDataType x);
// ˫������ͷɾ
void ListPopFront(ListNode* plist);
// ˫���������
ListNode* ListFind(ListNode* plist, LTDataType x);
// ˫��������pos��ǰ����в���
void ListInsert(ListNode* pos, LTDataType x);
// ˫������ɾ��posλ�õĽڵ�
void ListErase(ListNode* pos);
