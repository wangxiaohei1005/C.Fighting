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

//  默认成员函数控制
//class A
//{
//public:
//	A() = default; // 指定显示去生成默认构造函数
//
//	A(const int& a)
//		:_a(a)
//	{}
//private:
//	int _a = 10;
//};
//
//int main()
//{
//	A aa1;
//	A aa2(aa1);
//
//	return 0;
//}

// 要求A的对象不能拷贝和赋值(防拷贝)
//class A
//{
//public:
//	A() = default; // 指定显示去生成默认构造函数
//
//	// C++98
//	// 只声明，不实现，这样就被办法用(拷贝对象)，缺陷：别人可以类外面定义
//	// 为了解决这个缺陷，private限定
//private:
//	A(const A& aa);
//	A& operator=(const A& aa);
//private:
//	int _a = 10;
//};
//
//// 类外面定义
//A::A(const A& aa)
//{}
//
//int main()
//{
//	A aa1;
//	A aa2(aa1);
//	aa1 = aa2;
//
//	return 0;
//}

//class A
//{
//public:
//	A() = default; // 指定显示去生成默认构造函数
//
//	// C++11
//	A(const A& aa) = delete;
//	A& operator=(const A& aa) = delete;
//private:
//	int _a = 10;
//};
//
//int main()
//{
//	A aa1;
//	A aa2(aa1);
//	aa1 = aa2;
//
//	return 0;
//}

//////////////////////////////////////////////////////////////////////////////////（重点）
// 1、右值引用和移动语义概念语法 
// C++98就提出了引用的概念，引用就给一个对象取别名。
// C++98 左值引用
// C++11 右值引用
// 不管是左值引用，还是右值引用，他们都是给对象取别名，。
// 不过左值引用主要是给左值取别名，右值引用主要是给右值取别名。

// 什么是左值？什么是右值？
// =左边就是左值？右边的就是右值？ 注意这个是一个C语法就留下的坑，就像左移和右移一样，
// 这里左右不是方向。左边的值也不一定左值，右边的值不一定是右值
// int x1 = 10; int x2 = x1; int x3 = x1+x2; 这里x1是左值，10是右值，x2是左值,x1+x2表达式返回值就是右值
// 可以修改就可以认为是左值，左值通常是变量
// 右值通常是常量，表达式或者函数返回值(临时对象)

//int main()
//{
//	int x = 1, y = 2;
//	
//	// 左值引用的定义
//	int a = 0;
//	int& b = a;
//
//	// 左值引用不能引用右值, const左值引用可以
//	//int& e = 10; 
//	//int& f = x + y;
//	const int& e = 10;
//	const int& f = x + y;
//
//
//	// 右值引用的定义
//	int&& c = 10;
//	int&& d = x + y;
//
//	// 右值引用不能引用左值，但是可以引用move后左值
//	//int&& m = a;
//	int&& m = move(a);
//
//	return 0;
//}

//template<class T>
//void f(const T& a)
//{
//	cout << "void f(const T& a)" << endl;
//}
//
//template<class T>
//void f(const T&& a)
//{
//	cout << "void f(const T&& a)" << endl;
//}
//
//int main()
//{
//	int x = 10;
//	f(x); // 这里会匹配左值引用参数的f
//	f(10);// 这里会匹配右值引用参数的f
//
//	return 0;
//}

// C++11又将右值区分为：纯右值和将亡值
// 纯右值：基本类型的常量或者临时对象
// 将亡值：自定义类型的临时对象
// 结论：所有深拷贝类(vector/list/map/set...)，都可以加两个右值引用做参数的移动拷贝和移动赋值

//////////////////////////////////////////////////////////////////////////////////
//  2、应用：右值引用的移动构造和移动赋值,可以减少拷贝
class String
{
public:
	String(const char* str = "")
	{
		_str = new char[strlen(str) + 1];
		strcpy(_str, str);
	}

	// s2(s1)
	String(const String& s)
	{
		cout << "String(const String& s)-拷贝构造-效率低" << endl;

		_str = new char[strlen(s._str) + 1];
		strcpy(_str, s._str);
	}

	// s3(右值-将亡值)
	String(String&& s)
		:_str(nullptr)
	{
		// 传过来的是一个将亡值，反正你都要亡了，我的目的是跟你有一样大的空间，一样的值
		// 不如把你的控制和只给我
		cout << "String(String&& s)-移动构造-效率高" << endl;
		swap(_str, s._str);
	}

	// s3 = s4
	String& operator=(const String& s)
	{
		cout << "String& operator=(const String& s)-拷贝赋值-效率低" << endl;

		if (this != &s)
		{
			char* newstr = new char[strlen(s._str) + 1];
			strcpy(newstr, s._str);

			delete[] _str;
			_str = newstr;
		}

		return *this;
	}

	// s3 = 右值-将亡值
	String& operator=(String&& s)
	{
		cout << "String& operator=(String&& s)-移动赋值-效率高" << endl;
		swap(_str, s._str);

		return *this;
	}


	~String()
	{
		delete[] _str;
	}

	// s1 + s2
	String operator+(const String& s2)
	{
		String ret(*this);
		//ret.append(s2);

		return ret;  // 返回的是右值
	}

	// s1 += s2
	String& operator+=(const String& s2)
	{
		//this->append(s2);
		return *this; // 返回是左值
	}

private:
	char* _str;
};

int x1()
{
	String s1("s1");
	String s2("s2");

	String s3 = s1 += s2; // 拷贝构造
	String s4 = s1 + s2;  // 移动构造

	// 现实中不可避免存在传值返回的场景，传值返回的拷贝返回对象的临时对象。
	// 如果vector只实现参数为const左值引用深拷贝，那么下面的代价就很大
	// vector(const vector<T>& v)->深拷贝

	// 但是如果vector实现了参数右值引用的移动拷贝，那么这里效率就会很高
	// vector(vector<T>&& v) ->移动拷贝
	// 结论：右值引用本身没太多意义，右值引用的实现了移动构造和移动赋值
	// 那么面对接收函数传值返回对象(右值)等等场景，可以提高效率
	vector<string> v = Solution1().letterCombinations("abcd");
	vector<vector<int>> vv = Solution2().generate(5);

	return 0;
}

//////////////////////////////////////////////////////////////////////////////
// 4、右值引用去做函数的参数,减少拷贝

//std::vector::push_back
//void push_back(const value_type& val);
//void push_back(value_type&& val);
//
//std::list::push_back
//void push_back(const value_type& val);
//void push_back(value_type&& val);
//
//std::set::insert
//pair<iterator, bool> insert(const value_type& val);
//pair<iterator, bool> insert(value_type&& val);

//std::vector::emplace_back
//template <class... Args>
//void emplace_back(Args&&... args);   // 模板的可变参数 （了解）
// 网上有人说：emplace版本表push和insert高效。这句话不准确，没有深入去分析。

// ... 其他容器也插入数据结构也基本都是两个重载实现，一个左值引用，一个右值引用
int x2()
{
	vector<string> v;
	string s1("左值");
	string s2("左值");

	int val = 1234;

	// push_back中调用的是string的拷贝构造
	v.push_back(move(s2));             // void push_back(const value_type& val);

	// push_back中调用的是string的移动构造
	v.push_back("右值");         //void push_back(value_type&& val);
	v.push_back(to_string(val)); // void push_back(value_type&& val);

	v.emplace_back(s1); // v.emplace_back(move(s1)); 
	v.emplace_back("右值");

	vector<pair<string, string>> vp;
	vp.push_back(make_pair("右值", "右值"));

	pair<string, string> kv("左值", "左值");
	vp.push_back(kv);

	vp.emplace_back(make_pair("右值", "右值"));
	vp.emplace_back(kv);
	vp.emplace_back("右值", "右值"); // 体现emplace_back模板可变参数特点的地方

	return 0;
}

// 总结
// 右值引用做参数和作返回值减少拷贝的本质是利用了移动构造和移动赋值
// 左值引用和右值引用本质的作用都是减少拷贝，右值引用本质可以认为是弥补左值引用不足的地方, 他们两相辅相成

// 左值引用：解决的是传参过程中和返回值过程中的拷贝
// 做参数：void push(T x) -> void push(const T& x)  解决的是传参过程中减少拷贝
// 做返回值：T f2() -> T& f2()  解决的返回值过程中的拷贝
// ps:但是要注意这里有限制，如果返回对象出了作用域不在了就不能用传引用, 这个左值引用无法解决，等待C++11右值引用解决

// 右值引用：解决的是传参后，push/insert函数内部将对象移动到容器空间上的问题.
// + 传值返回接收返回值的拷贝
// 做参数： void push(T&& x)  解决的push内部不再使用拷贝构造x到容器空间上，而是移动构造过去
// 做返回值：T f2();  解决的外面调用接收f2()返回对象的拷贝，T ret = f2(),这里就是右值引用的移动构造，减少了拷贝

void Fun(int &x){ cout << "lvalue ref" << endl; }
void Fun(const int &x){ cout << "const lvalue ref" << endl; }
void Fun(int &&x){ cout << "rvalue ref" << endl; }
void Fun(const int&& x){ cout << "const rvalue ref" << endl; }

template<typename T>
void PerfectForward(T &&t)
{
	// 右值引用会第二次之后的参数传递过程中右值属性丢失,下一层调用会全部识别为左值
	// 完美转发解决
	Fun(std::forward<T>(t));
}

int x3()
{
	PerfectForward(10); // rvalue ref

	int a;
	PerfectForward(a); // lvalue ref
	PerfectForward(std::move(a)); // rvalue ref

	const int b = 8;
	PerfectForward(b); // const lvalue ref
	PerfectForward(std::move(b)); // const rvalue ref

	string s0("hello");
	string s1 = to_string(11111);

	/*basic_string(_Myt&& _Right) _NOEXCEPT
	: _Mybase(_Right._Getal())
	{	// construct by moving _Right
	_Tidy();
	_Assign_rv(_STD forward<_Myt>(_Right));
	}*/

	return 0;
}

#include <algorithm>
#include <functional>

template<class T>
struct Greater
{
	bool operator()(const T& x1, const T& x2)
	{
		return x1 > x2;
	}
};

bool g2(const int& x1, const int& x2)
{
	return x1 > x2;
}

int x4()
{
	int array[] = { 4, 1, 8, 5, 3, 7, 0, 9, 2, 6 };

	// 默认按照小于比较，排出来结果是升序
	std::sort(array, array + sizeof(array) / sizeof(array[0]));

	// 如果需要降序，需要改变元素的比较规则
	//std::sort(array, array + sizeof(array) / sizeof(array[0]), greater<int>());


	Greater<int> g1;
	g1(1, 2); // g1是一个对象，这里调用的是他的operator()实现的比较
	g2(1, 2); // g2是一个函数指针，这里是调用他指向的函数
	// 他们是完全不同的对象但是他们用起来是一样的。

	std::sort(array, array + sizeof(array) / sizeof(array[0]), g1);
	std::sort(array, array + sizeof(array) / sizeof(array[0]), g2);

	return 0;
}

struct Goods
{
	string _name;  // 名字
	double _price; // 价格
	int    _num;   // 数量
	// ...
};

// 那么这里如果去重载Goods的operator>/operator<是不好的，因为你不知道需要按哪一项成员去比较

struct ComparePriceGreater
{
	bool operator()(const Goods& gl, const Goods& gr)
	{
		return gl._price > gr._price;
	}
};

struct CompareNumGreater
{
	bool operator()(const Goods& gl, const Goods& gr)
	{
		return gl._num > gr._num;
	}
};

struct CompareNameGreater
{
	bool operator()(const Goods& gl, const Goods& gr)
	{
		return gl._name > gr._name;
	}
};