#include <iostream>
#include <vector>
#include <string>
using namespace std;

void test_vector1()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);

	vector<int> v2 (v1);
	for (size_t i = 0; i < v1.size(); ++i)
	{
		cout << v1[i] << " ";

	}
	cout << endl;


	for (size_t i = 0; i < v2.size(); ++i)
	{
		cout << v2[i] << " "; 

	}
	cout << endl;
	
	vector<int> v3;
	v3.push_back(10);
	v3.push_back(20);
	v3.push_back(30);
	v3.push_back(40);
	v1 = v3;

	for (size_t i = 0; i < v1.size(); ++i)
	{
		cout << v1[i] << " ";

	}
	cout << endl;
}

void test_vector2()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	//修改和遍历数据
	//1.operator[ ] + size
	for (size_t i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";

	}
	cout << endl;

	//2.迭代器
	vector<int>::iterator it = v.begin();
}

int main()
{
	//test_vector1();
	test_vector2();
	return 0;
}