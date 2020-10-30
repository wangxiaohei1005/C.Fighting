#include <iostream>
#include <string>
#include <assert.h>
using namespace std;
typedef int SDataType;

typedef struct Stack
{
	SDataType* _array;
	int _capacity;//栈的容量
	int _top;//栈顶
}Stack;

void _CheckCapacity(Stack* ps)//查询扩容
{
	assert(ps);
	if (ps->_top == ps->_capacity)
	{
		int newcap = ps->_capacity * 2;
		SDataType* pTemp = (SDataType*)malloc(sizeof(SDataType)*newcap);
		if (NULL == pTemp)
		{
			assert(0);
			return;
		}
		memcpy(pTemp, ps->_array, ps->_top*sizeof(SDataType));

		//释放旧空间
		free(ps->_array);
		ps->_array = pTemp;
		ps->_capacity = newcap;
	}
}

void StackInit(Stack* ps)//栈的初始化
{
	assert(ps);
	ps->_array = (SDataType*)malloc(sizeof(SDataType) * 3);
	if (NULL == ps->_array)
	{
		assert(0);
		return;
	}
	ps->_capacity = 3;
	ps->_top = 0;
}

void StackPush(Stack* ps,SDataType data)//入栈
{
	assert(ps);
	_CheckCapacity(ps);
	ps->_array[ps->_top] = data;
	ps->_top++;
}

void StackPop(Stack* ps)//出栈
{
	assert(ps);
	if (0 == ps->_top)
	{
		return;
	}
	ps->_top--;
}

SDataType StackTop(Stack* ps)//返回栈顶元素
{
	assert(ps);
	return ps->_array[ps->_top - 1];
}

int StackSize(Stack* ps)//返回栈的大小
{
	assert(ps);
	return ps->_top;
}

void StackDestory(Stack* ps)//销毁栈
{
	assert(ps);
	if (ps->_array)
	{
		free(ps->_array);
		ps->_array = NULL;
		ps->_capacity = 0;
		ps->_top = 0;
	}
}

bool isValid(char * s)
{
	if (NULL == s)
		return true;
	Stack st;
	StackInit(&st);//利用所给队列进行初始化
	for (int i = 0; i < strlen(s); ++i)
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
		{
			StackPush(&st, s[i]);//如果出现左半括号，则入栈
		}
		else
		{
			char ch = StackTop(&st);//利用栈顶元素与后续出现的符号做匹配
			if ((ch == '(' && s[i] == ')') || (ch == '[' && s[i] == ']') || (ch == '{' && s[i] == '}'))
			{
				StackPop(&st);//如果匹配左半出栈
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}