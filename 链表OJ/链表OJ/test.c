//struct ListNode* removeElements(struct ListNode* head, int val){
//	if (!head)
//		return head;
//	head->next  = removeElements(head->next, val);
//	return head->val  == val  ? head->next  : head;
//}
///**
// * Definition for singly-linked list.
//  * struct ListNode {
//   *     int val;
//    *     struct ListNode *next;
//	 * };
//	  */
//
//typedef struct ListNode Node;
//struct ListNode* reverseList(struct ListNode* head){
//	if (head  == NULL  || head ->next  == NULL)
//		return head;
//	Node* n1, *n2, *n3;
//	n1  = NULL;
//	n2  = head;
//	n3  = n2 ->next;
//	while (n2 )
//	{
//		n2 ->next  = n1;
//		n1  = n2;
//		n2  = n3;
//		if (n3)
//			n3  = n3 ->next;
//	}
//
//	return n1;
//}
///**
// * Definition for singly-linked list.
//  * struct ListNode {
//   *     int val;
//    *     struct ListNode *next;
//	 * };
//	  */
//
//typedef struct ListNode Node;
//struct ListNode* reverseList(struct ListNode* head){
//	   /* if(head == NULL || head ->next == NULL)
//	           return head;
//			       Node* n1, *n2, *n3;
//				       n1 = NULL;
//					      n2 = head;
//						      n3 = n2 -> next;
//							      while( n2 )
//								      {
//									          n2 -> next = n1;
//											          n1 = n2;
//													          n2 = n3;
//															          if(n3)
//																	              n3 = n3 -> next;
//																				      }
//
//																					          return n1;   */
//	Node* cur  = head;
//	Node* newhead  = NULL;
//	while (cur)
//	{
//		Node* next  = cur ->next;
//		cur ->next  = newhead;
//		newhead  = cur;
//		cur  = next;
//	}
//	return newhead;
//}
///*
//struct ListNode {
//int val;
//struct ListNode *next;
//ListNode(int x) :
//val(x), next(NULL) {
//}
//};*/
//typedef struct ListNode Node;
//class Solution {
//public:
//	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
//		Node* fast = pListHead;
//		Node* slow = pListHead;
//		while (k--)
//		{
//			if (fast == NULL)
//				return NULL;
//			fast = fast->next;
//		}
//		while (fast)
//		{
//			fast = fast->next;
//			slow = slow->next;
//		}
//		return slow;
//	}
//};
///**
// * Definition for singly-linked list.
//  * struct ListNode {
//   *     int val;
//    *     struct ListNode *next;
//	 * };
//	  */
//
//typedef struct ListNode Node;
//struct ListNode* middleNode(struct ListNode* head){
//
//	Node* slow  = head;
//	Node* fast  = head;
//	while (fast  != NULL  && (fast->next  != NULL))
//	{
//		slow   = slow ->next;
//		fast   = fast ->next ->next;
//	}
//	return slow;
//}
///**
// * Definition for singly-linked list.
//  * struct ListNode {
//   *     int val;
//    *     struct ListNode *next;
//	 * };
//	  */
//
//typedef struct ListNode Node;
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
//	if (l1  == NULL)
//	{
//		return l2;
//	}
//	if (l2  == NULL)
//	{
//		return l1;
//	}
//	Node* head  = NULL;
//	Node* tail  = NULL;
//	while (l1 && l2)
//	{
//		if (l1 ->val < l2 ->val)
//		{
//			if (tail  == NULL)
//			{
//				head  = tail  = l1;
//			}
//			else
//			{
//				tail ->next  = l1;
//				tail  = l1;
//			}
//			l1  = l1 ->next;
//		}
//		else
//		{
//			if (tail  == NULL)
//			{
//				head  = tail  = l2;
//				tail  = l2;
//			}
//
//			else
//			{
//				tail ->next  = l2;
//				tail  = l2;
//			}
//			l2  = l2 ->next;
//		}
//	}
//	if (l1)
//	{
//		tail ->next  = l1;
//	}
//	if (l2)
//	{
//		tail ->next  = l2;
//	}
//	return head;
//}
//if (pHead == NULL || pHead->next == NULL)
//return pHead;
//
//ListNode* cur = pHead;
//ListNode* next = cur->next;
//ListNode* newHead, *newTail;
//newHead = newTail = (ListNode*)malloc(sizeof(ListNode));
//while (next)
//{
//	if (cur->val == next->val)
//	{
//		while (next && next->val == cur->val)
//		{
//			next = next->next;
//		}
//	}
//	else
//	{
//		newTail->next = cur;
//		newTail = cur;
//	}
//
//	cur = next;
//	if (cur)
//		next = cur->next;
//}
//return newHead->next

//顺序表 OJ
int removeElement(int* nums, int numsSize, int val)
{
	int number = 0;
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] != val)
		{
			nums[i] = nums[i + 1];
			number++;
		}
	}
	return number;
}

int removeDuplicates(int *nums, int numsSize){
	if (numsSize == 0 || numsSize == 1)
		return numsSize;
	int k = 1;
	for (int i = 1; i < numsSize; i++)
	{
		if (nums[i] != nums[i - 1])
		{
			nums[k] = nums[i];
			++k;
		}
	}
	return k;
}
/*void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
	void reverse(int* nums, int begin, int end)
	{
		while (begin < end)
		{
			int tmp = nums[begin];
			nums[begin] = nums[end];
			nums[end] = emp;
			++begin;
			--end;
		}
	}

	int end1 = m;
	int end2 = n;
	int ned = m + n - 1;
	while ( end1 >= 0 && end2 >= 0)
	{
		if (nums[end1] > nums[end2])
		{
			nums1[end--] = nums[end1--];
		}
		else
		{
			nums1[end--] = nums[end2--];
		}
	}
	while (end2 >= 0)
	{
		nums1[end--] = nums[end2--];
	}
}*/

void reverse(int* nums, int begin, int end)
{
	while (begin < end)
	{
		int tmp = nums[begin];
		nums[begin] = nums[end];
		nums[end] = tmp;
		++begin;
		--end;
	}
}

void rotate(int* nums, int numsSize, int k){
	if (k > numsSize)
	{
		k %= numsSize;
	}

	reverse(nums, 0, numsSize - 1);
	reverse(nums, 0, k - 1);
	reverse(nums, k, numsSize - 1);
}//程序反转  对数组进行反向排序

int* addToArrayForm(int* A, int ASize, int K, int* returnSize)
{

}

int mian()
{
	int a[] = { 9,9 };
	int k[] = { 1, 1 };

	return 0;
}