#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// ֧�ֶ�̬������ջ
typedef int STDataType;
typedef struct Stack
{
	STDataType* _a;
	int _top;		// ջ��
	int _capacity;  // ���� 
}Stack;

// ��ʼ��
void StackInit(Stack* ps)
{
	ps->_a = NULL;
	ps->_top = 0;
	ps->_capacity = 0;
}

// ��ջ 
void StackPush(Stack* ps, STDataType data)
{
	assert(ps);

	if (ps->_top == ps->_capacity)
	{
		size_t newcapacity = ps->_capacity == 0 ? 4 : ps->_capacity * 2;
		ps->_a = (STDataType*)realloc(ps->_a, newcapacity*sizeof(STDataType));
		ps->_capacity = newcapacity;
	}

	ps->_a[ps->_top] = data;
	ps->_top++;
}

// ��ջ 
void StackPop(Stack* ps)
{
	assert(ps && ps->_top > 0);
	--ps->_top;
}

// ��ȡջ��Ԫ�� 
STDataType StackTop(Stack* ps)
{
	assert(ps);
	return ps->_a[ps->_top - 1];
}

// ��ȡջ����ЧԪ�ظ��� 
int StackSize(Stack* ps)
{
	assert(ps);

	return ps->_top;
}

// ���ջ�Ƿ�Ϊ��
int StackEmpty(Stack* ps)
{
	assert(ps);

	return ps->_top == 0 ? 1 : 0;
}

// ����ջ 
void StackDestroy(Stack* ps)
{
	assert(ps);

	free(ps->_a);
	ps->_a = NULL;
	ps->_top = ps->_capacity = 0;
}

void TestStack()
{
	Stack st;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	printf("%d ", StackTop(&st));
	StackPop(&st);
	printf("%d ", StackTop(&st));
	StackPop(&st);
	StackPush(&st, 3);
	StackPush(&st, 4);

	while (!StackEmpty(&st))
	{
		printf("%d ", StackTop(&st));
		StackPop(&st);
	}
	printf("\n");
	StackDestroy(&st);
}

bool isValid(char* s)
{
	struct Stack st;
	StackInit(&st, 10);
	char symbols[][2] = {
			{ '(', ')' },
			{ '[', ']' },
			{ '{', '}' },
	};
	while (*s)
	{
		int i = 0;
		for (; i < 3; ++i)
		{
			if (*s == symbols[i][0])
			{
				StackPush(&st, *s);
				++s;
				break;
			}
		}
		if (i == 3)
		{

			char top = StackTop(&st);
			for (int j = 0; j < 3; ++j)
			{
				if (*s == symbols[j][1])
				{
					if (top == symbols[j][0])
					{
						++s;
						StackPop(&st);
						break;
					}
					else
					{
						//���û��һ������ƥ�䣬˵����ƥ��
						return false;
					}
				}
			}
		}
	}
	//���ջΪ�գ�˵����ȫƥ��
	if (StackEmpty(&st) == 0)
		return true;
	else
		return false;
}

typedef struct {
	Queue q1;
	Queue q2;
} MyStack;
/** Initialize your data structure here. */
MyStack* myStackCreate(int maxSize) {
	MyStack* pst = (MyStack*)malloc(sizeof(MyStack));
	QueueInit(&pst->q1);
	QueueInit(&pst->q2);
	return pst;
}
/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) {
	//���ǿն��н�����Ӳ���
	if (QueueEmpty(&obj->q1) != 0)
	{
		QueuePush(&obj->q1, x);
	}
	else
	{
		QueuePush(&obj->q2, x);
	}
}
/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) {
	//�ѷǿն��еĳ����һ��Ԫ��֮���ʣ��Ԫ��ȫ����ӿն���
	Queue* pEmpty = &obj->q1, *pNonEmpty = &obj->q2;
	if (QueueEmpty(&obj->q1) != 0)
	{
		pEmpty = &obj->q2;
		pNonEmpty = &obj->q1;
	}
		while (QueueSize(pNonEmpty) > 1)
		{
		QueuePush(pEmpty, QueueFront(pNonEmpty));
		QueuePop(pNonEmpty);
		}
	int top = QueueFront(pNonEmpty);
	//��βԪ�س���
	QueuePop(pNonEmpty);
	return top;
}
/** Get the top element. */
int myStackTop(MyStack* obj) {
	//��ȡ�ǿն��еĶ�βԪ��
	Queue* pEmpty = &obj->q1, *pNonEmpty = &obj->q2;
	if (QueueEmpty(&obj->q1) != 0)
	{
		pEmpty = &obj->q2;
		pNonEmpty = &obj->q1;
	}
	return QueueBack(pNonEmpty);
}
/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {
	return !(QueueEmpty(&obj->q1) | QueueEmpty(&obj->q2));
}
void myStackFree(MyStack* obj) {
	QueueDestory(&obj->q1);
	QueueDestory(&obj->q2);
	free(obj);
}