#include <iostream>
using namespace std;

//new �� malloc ������
//����������ͣ�������ͬ
//����Զ�������

struct ListNode
{
	int _val;
	struct ListNode* _next;
	struct ListNode* _prev;
};

typedef struct ListNode ListNode;


int main()
{
	int* p1 = (int*)malloc(sizeof(int));
	int* p2 = new(int);

	return 0;
}