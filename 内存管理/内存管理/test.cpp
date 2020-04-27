#include <iostream>
using namespace std;

//new 和 malloc 的区别
//针对内置类型，两者相同
//针对自定义类型

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