#include <stdio.h>

//int change(char* str)
//{
//	int size = (sizeof(str) / sizeof(str[0]));
//	for (int i = 0; i < size; i++)
//	{
//		if (str[i] >= 'A' && str[i] <= 'Z')
//		{
//			str[i] += 32;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char str[] = "asdADSAFF";
//	printf("%s ",change(str));
//	return 0;
//}

typedef struct {
	Quque_q1;
	Quque_q2;
} MyStack;

/** Initialize your data structure here. */

MyStack* myStackCreate() {
	MyStack* st = (MyStack*)malloc(sizeof(MyStack));
	Queuelnit(&st->_q1);
	Queuelnit(&st->_q2);
	return st;
}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) {
	if (!QueueEmpty(&obj->_q1))
	{
		QueuePush(&obj->_q1, x);
	}
	else
	{
		QueuePush(&obj->_q2, x);
	}
}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) {
	Queue* pemptyQ = &obj->_q1;
	Queue* pnoempty = &boj->_q2;
	if (!QueueEmpty(&obj->_q1))
	{
		pemptyQ = &obj->_q2;
		pnoemptyQ = &obj->_q1;
	}
	while (QueueSize(pnoemptyQ) > 1)
	{
		QueuePush(pemptyQ, QueueFront(pnoemptyQ));
		QueuePop(pnoemptyQ);
	}

	int top = QueueBack(pnoemptyQ);
	QueuePop(pnoemptyQ);
	return top;
}
}

/** Get the top element. */
int myStackTop(MyStack* obj) {

}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {

}

void myStackFree(MyStack* obj) {

}

/**
* Your MyStack struct will be instantiated and called as such:
* MyStack* obj = myStackCreate();
* myStackPush(obj, x);

* int param_2 = myStackPop(obj);

* int param_3 = myStackTop(obj);

* bool param_4 = myStackEmpty(obj);

* myStackFree(obj);
*/

bool isValid(char * s){
	int length = 0;//定义字符串长度
	while (*(s + length))length++;//获取字符串长度
	char* ptr = (char*)malloc(length / 2);//分配内存空间
	memset(ptr, 0, length / 2);//初始化内存空间
	int i, a = 0;
	for (i = 0; i<length; i++)
	{
		if ((*(s + i) == '(') || (*(s + i) == '{') || (*(s + i) == '['))
		{
			a++;
			*(ptr + a) = *(s + i);
		}
		//'('与')'的ASCII值差1，'['与']'，'{'与'}'的ASCII值差2
		else if ((*(s + i) == (*(ptr + a) + 1)) || (*(s + i) == (*(ptr + a) + 2)))
		{
			a--;
		}
		else return 0;
	}
	if (a)
		return 0;
	return 1
}