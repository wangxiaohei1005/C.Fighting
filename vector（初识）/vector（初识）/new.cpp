#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void test_vector1()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);

	vector<int> v2(v1);
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

	// �����޸�����
	//1.operator[] + size
	for (size_t i = 0; i < v.size(); ++i)
	{
		v[i] *= 2;
		cout << v[i] << " ";
	}
	cout << endl;

	// 2.������
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	// 3.��Χfor  -> ���������滻�ɵ�������ʽ����֧�ֵ�
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

void print_vector(const vector<int>& vt)
{
	// ֻ��
	vector<int>::const_iterator it = vt.begin();
	while (it != vt.end())
	{
		//*it = 1;
		cout << *it << " ";
		++it;
	}
	cout << endl;
}

//  �������͵ĵ�����
void test_vector3()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	// ��ͨ���������  �ɶ���д
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		*it *= 2;
		cout << *it << " ";
		++it;
	}
	cout << endl;
	print_vector(v);

	// reverse ����
	// reserve ����
	vector<int>::reverse_iterator rit = v.rbegin();
	while (rit != v.rend())
	{
		cout << *rit << " ";
		++rit;
	}
	cout << endl;
}

void test_vector4()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);

	cout << v.size() << endl;
	cout << v.capacity() << endl;

	size_t sz;
	std::vector<int> foo;
	//foo.reserve(1067);
	foo.resize(1067);
	sz = foo.capacity();
	std::cout << "making foo grow:\n";
	for (int i = 0; i < 1067; ++i) {
		//foo.push_back(i);
		foo[i] = i;
		if (sz != foo.capacity()) {
			sz = foo.capacity();
			std::cout << "capacity changed: " << sz << '\n';
		}
	}
}

void test_vector5()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	//v[4] = 5;
}

void test_vector6()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	v.insert(v.begin(), 0);
	v.insert(v.begin(), -1);

	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	v.erase(v.begin());
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test_vector7()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(52);
	v.push_back(2);
	v.push_back(5);
	v.push_back(50);
	v.push_back(5);

	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	// Ҫ��ɾ��5
	vector<int>::iterator pos = find(v.begin(), v.end(), 55);
	if (pos != v.end())
	{
		v.erase(pos);
	}

	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	sort(v.begin(), v.end());

	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

int main()
{
	//test_vector1();
	//test_vector2();
	//test_vector3();
	//test_vector4();
	//test_vector5();
	test_vector7();

	return 0;
}