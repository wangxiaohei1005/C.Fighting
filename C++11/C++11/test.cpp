//C++11
//重点：auto、范围for、新容器、线程库
//右值引用、移动语义、lamber表达式
//列表初始化
//C++98:
//int array1[] = { 1, 2, 3, 4, 5 };
//C++11:

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <map>

#include <initializer_list>//只支持花括号形式传输
using namespace std;

//列表初始化，实际中就是建立了	initializer_list	的列表
//C++中花括号的列表初始化
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
//	int y{ 2 };//C++11后可实现，之前不予通过
//
//	vector<int>v1{ 1, 2, 3, 4, 5 };
//	vector<int>v2 = { 1, 2, 3, 4, 5 };
//
//		//list同样
//	list <int> l1{1, 2, 3, 4, 5};
//	list <int> l2 = { 1, 2, 3, 4, 5 };
//	map<string, int> m{ { "苹果", 1 }, { "西瓜",2 },{ "香蕉", 3 } };
//	map<string, int> m1 = { { "苹果", 1 }, { "西瓜", 2 }, { "香蕉", 3 } };
//
//	Point p1(1, 2);//正常(直接调用)
//	Point p2{ 1, 2 };
//	Point p3 = { 1, 2 };
//
//	auto il1 = { 1, 2, 3 };
//	initializer_list<int> il2 = { 1, 2, 3 };
//
//	//容器是如何支持花括号的列表初始化的	
//	/*vector(initializer_list<T> l)
//		:_capacity(l.size()), _size(0)
//	{
//		_array = new T[_capacity];
//		for (auto e : l)
//			_array[_size++] = e;
//	}
//	其他容器也类似
//	*/
//	return 0;
//}


//类型推导  属于	run time type idenrification
//程序运行起来对对象的类型识别
//int main()
//{
//	int a = 10;
//	double b = 20;
//
//	//get类型名称的字符串
//	auto c = a + b;
//	cout << typeid(c).name() << endl;
//
//	string s;
//	cout << typeid(s).name() << endl;
//
//	//需要重新定义同样类型的对象
//	decltype(c) d;
//	decltype(s) e;
//	cout << typeid(d).name() << endl;
//	cout << typeid(e).name() << endl;
//
//	return 0;
//}

//int main()
//{
//	std::map<std::string, std::string> dict = { { "insert", "插入" }, { "sort", "排序" } };
//	std::map<std::string, std::string>::iterator it1 = dict.begin();
//	auto it2 = dict.begin();
//	//此处的it1和it2可认为是完全一个类型的对象，唯一差别就是it2的类型是编译器自动推导
//	//auto的有事就是可以把在类型较为复杂的地方简化代码写法
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
//	//除了STL的容器可以使用范围for用法，数组也可以（原生指针可以认为天然迭代器
//	//比如vector/string的迭代器就是原生指针）
//
//	int a[] = { 1, 2, 3, 4, 5, 3 };
//	for (auto e : a)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	return 0;
//}

//lamber表达式其实定义函数内存的匿名函数
//1、Lamber表达式写的格式
//2、使用场景
//3、表达式原理
//int add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	//[捕捉列表]（参数）->返回值类型{函数体}
//	int a = 0, b = 1;
//	//实现一个a+b的lamber表达式
//	auto add1 = [](int x1, int x2) -> int{return a + b};
//	cout << add1(a, b) << endl;
//
//	//捕捉列表其为捕捉同一个作用域的对象
//	//传值捕捉： [a] 捕捉a  [a，b]捕捉a，b  [=]捕捉同一作用域的所有对象
//	//传引用捕捉： [&a]捕捉a  [&a, &b]捕捉a，b  [&]捕捉同一作用域中的所有对象
//	//传值捕捉的变量不能被改变(加上mutable就可改变)
//	auto add2 = [a, b]()->int{return a + b; };
//	add2();
//
//	//实现x和y交换
//	auto swap = [](int &x, int &y)->int
//	{
//		int z = x;
//		x = y;
//		y = z;
//	};
//	swap(a, b);
//
//	//错误 此处为复制出来的变量发生改变
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

