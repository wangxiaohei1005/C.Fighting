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
	//或者如下
	//int(*add)(int, int) = &addfun;

	int result = (*add)(1, 2);
	//或者如下,建议使用第一种
	//int result = add(1, 2);
	cout << "通过函数指针调用函数计算为：" << result << endl;
	
	result = addfun(1, 2);
	cout << "通过直接调用函数进行计算为：" << result << endl;
	return 0;
}