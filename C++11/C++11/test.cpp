//C++11
//�ص㣺auto����Χfor�����������߳̿�
//��ֵ���á��ƶ����塢lamber���ʽ
//�б��ʼ��
//C++98:
//int array1[] = { 1, 2, 3, 4, 5 };
//C++11:

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <map>

#include <initializer_list>//ֻ֧�ֻ�������ʽ����
using namespace std;

//�б��ʼ����ʵ���о��ǽ�����	initializer_list	���б�
//C++�л����ŵ��б��ʼ��
class Point
{
public:
	Point(int x = 0, int y = 0) :_x(x), _y(y)
	{}
private:
	int _x;
	int _y;
};
//int main()
//{
//	int x = 1;
//	int y{ 2 };//C++11���ʵ�֣�֮ǰ����ͨ��
//
//	vector<int>v1{ 1, 2, 3, 4, 5 };
//	vector<int>v2 = { 1, 2, 3, 4, 5 };
//
//		//listͬ��
//	list <int> l1{1, 2, 3, 4, 5};
//	list <int> l2 = { 1, 2, 3, 4, 5 };
//	map<string, int> m{ { "ƻ��", 1 }, { "����",2 },{ "�㽶", 3 } };
//	map<string, int> m1 = { { "ƻ��", 1 }, { "����", 2 }, { "�㽶", 3 } };
//
//	Point p1(1, 2);//����(ֱ�ӵ���)
//	Point p2{ 1, 2 };
//	Point p3 = { 1, 2 };
//
//	auto il1 = { 1, 2, 3 };
//	initializer_list<int> il2 = { 1, 2, 3 };
//
//	//���������֧�ֻ����ŵ��б��ʼ����	
//	/*vector(initializer_list<T> l)
//		:_capacity(l.size()), _size(0)
//	{
//		_array = new T[_capacity];
//		for (auto e : l)
//			_array[_size++] = e;
//	}
//	��������Ҳ����
//	*/
//	return 0;
//}


//�����Ƶ�  ����	run time type idenrification
//�������������Զ��������ʶ��
//int main()
//{
//	int a = 10;
//	double b = 20;
//
//	//get�������Ƶ��ַ���
//	auto c = a + b;
//	cout << typeid(c).name() << endl;
//
//	string s;
//	cout << typeid(s).name() << endl;
//
//	//��Ҫ���¶���ͬ�����͵Ķ���
//	decltype(c) d;
//	decltype(s) e;
//	cout << typeid(d).name() << endl;
//	cout << typeid(e).name() << endl;
//
//	return 0;
//}

//int main()
//{
//	std::map<std::string, std::string> dict = { { "insert", "����" }, { "sort", "����" } };
//	std::map<std::string, std::string>::iterator it1 = dict.begin();
//	auto it2 = dict.begin();
//	//�˴���it1��it2����Ϊ����ȫһ�����͵Ķ���Ψһ������it2�������Ǳ������Զ��Ƶ�
//	//auto�����¾��ǿ��԰������ͽ�Ϊ���ӵĵط��򻯴���д��
//
//	for (const auto& e : dict)
//	{
//		cout << e.first << ":" << e.second << endl;
//	}
//
//	for (const std::pair<const std::string, std::string>& e : dict)
//	{
//		cout << e.first << ":" << e.second << endl;
//	}
//
//	//����STL����������ʹ�÷�Χfor�÷�������Ҳ���ԣ�ԭ��ָ�������Ϊ��Ȼ������
//	//����vector/string�ĵ���������ԭ��ָ�룩
//
//	int a[] = { 1, 2, 3, 4, 5, 3 };
//	for (auto e : a)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	return 0;
//}

//lamber���ʽ��ʵ���庯���ڴ����������
//1��Lamber���ʽд�ĸ�ʽ
//2��ʹ�ó���
//3�����ʽԭ��
//int add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	//[��׽�б�]��������->����ֵ����{������}
//	int a = 0, b = 1;
//	//ʵ��һ��a+b��lamber���ʽ
//	auto add1 = [](int x1, int x2) -> int{return a + b};
//	cout << add1(a, b) << endl;
//
//	//��׽�б���Ϊ��׽ͬһ��������Ķ���
//	//��ֵ��׽�� [a] ��׽a  [a��b]��׽a��b  [=]��׽ͬһ����������ж���
//	//�����ò�׽�� [&a]��׽a  [&a, &b]��׽a��b  [&]��׽ͬһ�������е����ж���
//	//��ֵ��׽�ı������ܱ��ı�(����mutable�Ϳɸı�)
//	auto add2 = [a, b]()->int{return a + b; };
//	add2();
//
//	//ʵ��x��y����
//	auto swap = [](int &x, int &y)->int
//	{
//		int z = x;
//		x = y;
//		y = z;
//	};
//	swap(a, b);
//
//	//���� �˴�Ϊ���Ƴ����ı��������ı�
//	/*auto swap2 = [a, b]()mutable -> int
//	{
//		int c = a;
//		a = b;
//		a = c;
//	};
//	swap2;*/
//
//	return 0;
//}

