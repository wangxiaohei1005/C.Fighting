#include <iostream>
using namespace std;


#include <stdio.h>

int addfun(int a, int b)
{
	return a + b;
}

int main()
{
	int(*add)(int, int) = addfun;
	//��������
	//int(*add)(int, int) = &addfun;

	int result = (*add)(1, 2);
	//��������,����ʹ�õ�һ��
	//int result = add(1, 2);
	cout << "ͨ������ָ����ú�������Ϊ��" << result << endl;
	
	result = addfun(1, 2);
	cout << "ͨ��ֱ�ӵ��ú������м���Ϊ��" << result << endl;
	return 0;
}