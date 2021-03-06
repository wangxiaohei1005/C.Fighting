#include "sList.h"

void TestSList1()
{
	SListNode* pList = NULL;
	SListPushBack(&pList, 1);
	SListPushBack(&pList, 2);
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 4);

	SListPrint(pList);

	SListPushFront(&pList, 0);
	SListPrint(pList);

	SListPopBack(&pList);
	SListPrint(pList);
}

int main()
{
	TestSList1();

	return 0;
}
/*typedef char STDataType;
typedef struct Stack
{
STDataType* _a;
int _top;		// 栈顶
int _capacity;  // 容量
}Stack;

// 初始化栈
void StackInit(Stack* ps)
{
ps->_a = NULL;
ps->_top = 0;
ps->_capacity = 0;
}

// 入栈
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

// 出栈
void StackPop(Stack* ps)
{
assert(ps && ps->_top > 0);
--ps->_top;
}

// 获取栈顶元素
STDataType StackTop(Stack* ps)
{
assert(ps);
return ps->_a[ps->_top - 1];
}

// 获取栈中有效元素个数
int StackSize(Stack* ps)
{
assert(ps);

return ps->_top;
}

// 检测栈是否为空，如果为空返回非零(1)，如果不为空返回0
int StackEmpty(Stack* ps)
{
assert(ps);

return ps->_top == 0 ? 1 : 0;
}

// 销毁栈
void StackDestroy(Stack* ps)
{
assert(ps);

free(ps->_a);
ps->_a = NULL;
ps->_top = ps->_capacity = 0;
}

bool isValid(char * s)
{
Stack st;
StackInit(&st);

while(*s)
{
if(*s == '{' || *s == '(' || *s == '[')
{
StackPush(&st, *s);
}
else if(*s == '}')
{
if(StackEmpty(&st))
return false;

char top = StackTop(&st);
StackPop(&st);
if(top != '{')
{
return false;
}
}
else if(*s == ']')
{
if(StackEmpty(&st))
return false;

char top = StackTop(&st);
StackPop(&st);
if(top != '[')
{
return false;
}
}
else if(*s == ')')
{
if(StackEmpty(&st))
return false;

char top = StackTop(&st);
StackPop(&st);
if(top != '(')
{
return false;
}
}
// 《》 <>

++s;
}

bool ret = StackEmpty(&st);
StackDestroy(&st);
return ret;
}*/
typedef char STDataType;
typedef struct Stack
{
	STDataType* _a;
	int _top;		// 栈顶
	int _capacity;  // 容量 
}Stack;

// 初始化栈 
void StackInit(Stack* ps)
{
	ps->_a = NULL;
	ps->_top = 0;
	ps->_capacity = 0;
}

// 入栈 
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

// 出栈 
void StackPop(Stack* ps)
{
	assert(ps && ps->_top > 0);
	--ps->_top;
}

// 获取栈顶元素 
STDataType StackTop(Stack* ps)
{
	assert(ps);
	return ps->_a[ps->_top - 1];
}

// 获取栈中有效元素个数 
int StackSize(Stack* ps)
{
	assert(ps);

	return ps->_top;
}

// 检测栈是否为空，如果为空返回非零(1)，如果不为空返回0 
int StackEmpty(Stack* ps)
{
	assert(ps);

	return ps->_top == 0 ? 1 : 0;
}

// 销毁栈 
void StackDestroy(Stack* ps)
{
	assert(ps);

	free(ps->_a);
	ps->_a = NULL;
	ps->_top = ps->_capacity = 0;
}

// []
bool isValid(char * s)
{
	Stack st;
	StackInit(&st);
	char* symbols[3] = { "[]", "{}", "()" };

	while (*s)
	{
		if (*s == '{' || *s == '(' || *s == '[')
		{
			StackPush(&st, *s);
		}
		else
		{
			if (StackEmpty(&st))
				return false;

			char top = StackTop(&st);
			StackPop(&st);
			for (int i = 0; i < 3; ++i)
			{
				//  char* symbols[3] = {"[]", "{}", "()"};
				if (*s == symbols[i][1] && top != symbols[i][0])
					return false;
			}
		}
		// 《》 <>
		++s;
	}

	bool ret = StackEmpty(&st);
	StackDestroy(&st);
	return ret;
}