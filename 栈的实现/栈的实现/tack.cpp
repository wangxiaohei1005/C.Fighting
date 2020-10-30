#include <iostream>
#include <string>
#include <assert.h>
using namespace std;
typedef int SDataType;

typedef struct Stack
{
	SDataType* _array;
	int _capacity;//ջ������
	int _top;//ջ��
}Stack;

void _CheckCapacity(Stack* ps)//��ѯ����
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

		//�ͷžɿռ�
		free(ps->_array);
		ps->_array = pTemp;
		ps->_capacity = newcap;
	}
}

void StackInit(Stack* ps)//ջ�ĳ�ʼ��
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

void StackPush(Stack* ps,SDataType data)//��ջ
{
	assert(ps);
	_CheckCapacity(ps);
	ps->_array[ps->_top] = data;
	ps->_top++;
}

void StackPop(Stack* ps)//��ջ
{
	assert(ps);
	if (0 == ps->_top)
	{
		return;
	}
	ps->_top--;
}

SDataType StackTop(Stack* ps)//����ջ��Ԫ��
{
	assert(ps);
	return ps->_array[ps->_top - 1];
}

int StackSize(Stack* ps)//����ջ�Ĵ�С
{
	assert(ps);
	return ps->_top;
}

void StackDestory(Stack* ps)//����ջ
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
	StackInit(&st);//�����������н��г�ʼ��
	for (int i = 0; i < strlen(s); ++i)
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
		{
			StackPush(&st, s[i]);//�������������ţ�����ջ
		}
		else
		{
			char ch = StackTop(&st);//����ջ��Ԫ����������ֵķ�����ƥ��
			if ((ch == '(' && s[i] == ')') || (ch == '[' && s[i] == ']') || (ch == '{' && s[i] == '}'))
			{
				StackPop(&st);//���ƥ������ջ
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}