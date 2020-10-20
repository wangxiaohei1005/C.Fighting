/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	/**
	* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
	*
	* @param matrix int整型二维数组
	* @param matrixRowLen int matrix数组行数
	* @param matrixColLen int* matrix数组列数
	* @return int整型
	*/
//	int maxValue(int** matrix, int matrixRowLen, int* matrixColLen) {
//		int m = sizeof(matrix);
//		int n = sizeof(matrix[0]);
//		vector<int> dp(n + 1, 0);
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				dp[j + 1] = max(dp[j], dp[j + 1]) + matrix[i][j];
//			}
//		}
//
//		struct classA
//		{
//		public:
//		};
//		return dp[n];
//	}
//}; 
//
//
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	string s1;
//	while (1)
//	{
//		getline(cin, s);
//		cout << s << endl;
//	}
//	return 0;
//}*/

struct ListNode
{
	int val;
	ListNode *next;
	ListNode() : val(), next(nullptr){}
	ListNode(int x) : val(x), next(nullptr){}
	ListNode(int x, ListNode *next) : val(x), next(next){}

};

class Solution {
public:
	void reorderList(ListNode* head) {
		ListNode* p = head, *q = head, *r, *s = head;
		if (!head)            //head为空，则直接退出
			return;
		while (q->next){      //寻找中间结点
			q = q->next;       //p走一步
			p = p->next;
			if (q->next)
				q = q->next;     //q走两步
		}//利用快慢节点
		q = p->next;           //p所指结点为中间结点，q为后半段链表的首结点
		p->next = nullptr;
		while (q){            //将链表后半段逆置
			r = q->next;
			q->next = p->next;
			p->next = q;
			q = r;
		}
		q = p->next;            //q指向后半段的第一个数据结点
		p->next = nullptr;
		while (q){             //将链表后半段的结点插入到指定位置
			r = q->next;        //r指向后半段的下一个结点
			q->next = s->next;  //将q所指结点插入到s所指结点（head结点）之后
			s->next = q;
			s = q->next;        //s指向前半段的下一个插入点
			q = r;
		}
	}
};