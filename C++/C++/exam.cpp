/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	/**
	* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
	*
	* @param matrix int���Ͷ�ά����
	* @param matrixRowLen int matrix��������
	* @param matrixColLen int* matrix��������
	* @return int����
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
		if (!head)            //headΪ�գ���ֱ���˳�
			return;
		while (q->next){      //Ѱ���м���
			q = q->next;       //p��һ��
			p = p->next;
			if (q->next)
				q = q->next;     //q������
		}//���ÿ����ڵ�
		q = p->next;           //p��ָ���Ϊ�м��㣬qΪ����������׽��
		p->next = nullptr;
		while (q){            //�������������
			r = q->next;
			q->next = p->next;
			p->next = q;
			q = r;
		}
		q = p->next;            //qָ����εĵ�һ�����ݽ��
		p->next = nullptr;
		while (q){             //��������εĽ����뵽ָ��λ��
			r = q->next;        //rָ����ε���һ�����
			q->next = s->next;  //��q��ָ�����뵽s��ָ��㣨head��㣩֮��
			s->next = q;
			s = q->next;        //sָ��ǰ��ε���һ�������
			q = r;
		}
	}
};