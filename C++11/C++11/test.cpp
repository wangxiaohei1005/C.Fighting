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

//  Ĭ�ϳ�Ա��������
//class A
//{
//public:
//	A() = default; // ָ����ʾȥ����Ĭ�Ϲ��캯��
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

// Ҫ��A�Ķ����ܿ����͸�ֵ(������)
//class A
//{
//public:
//	A() = default; // ָ����ʾȥ����Ĭ�Ϲ��캯��
//
//	// C++98
//	// ֻ��������ʵ�֣������ͱ��취��(��������)��ȱ�ݣ����˿��������涨��
//	// Ϊ�˽�����ȱ�ݣ�private�޶�
//private:
//	A(const A& aa);
//	A& operator=(const A& aa);
//private:
//	int _a = 10;
//};
//
//// �����涨��
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
//	A() = default; // ָ����ʾȥ����Ĭ�Ϲ��캯��
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

//////////////////////////////////////////////////////////////////////////////////���ص㣩
// 1����ֵ���ú��ƶ���������﷨ 
// C++98����������õĸ�����þ͸�һ������ȡ������
// C++98 ��ֵ����
// C++11 ��ֵ����
// ��������ֵ���ã�������ֵ���ã����Ƕ��Ǹ�����ȡ��������
// ������ֵ������Ҫ�Ǹ���ֵȡ��������ֵ������Ҫ�Ǹ���ֵȡ������

// ʲô����ֵ��ʲô����ֵ��
// =��߾�����ֵ���ұߵľ�����ֵ�� ע�������һ��C�﷨�����µĿӣ��������ƺ�����һ����
// �������Ҳ��Ƿ�����ߵ�ֵҲ��һ����ֵ���ұߵ�ֵ��һ������ֵ
// int x1 = 10; int x2 = x1; int x3 = x1+x2; ����x1����ֵ��10����ֵ��x2����ֵ,x1+x2���ʽ����ֵ������ֵ
// �����޸ľͿ�����Ϊ����ֵ����ֵͨ���Ǳ���
// ��ֵͨ���ǳ��������ʽ���ߺ�������ֵ(��ʱ����)

//int main()
//{
//	int x = 1, y = 2;
//	
//	// ��ֵ���õĶ���
//	int a = 0;
//	int& b = a;
//
//	// ��ֵ���ò���������ֵ, const��ֵ���ÿ���
//	//int& e = 10; 
//	//int& f = x + y;
//	const int& e = 10;
//	const int& f = x + y;
//
//
//	// ��ֵ���õĶ���
//	int&& c = 10;
//	int&& d = x + y;
//
//	// ��ֵ���ò���������ֵ�����ǿ�������move����ֵ
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
//	f(x); // �����ƥ����ֵ���ò�����f
//	f(10);// �����ƥ����ֵ���ò�����f
//
//	return 0;
//}

// C++11�ֽ���ֵ����Ϊ������ֵ�ͽ���ֵ
// ����ֵ���������͵ĳ���������ʱ����
// ����ֵ���Զ������͵���ʱ����
// ���ۣ����������(vector/list/map/set...)�������Լ�������ֵ�������������ƶ��������ƶ���ֵ

//////////////////////////////////////////////////////////////////////////////////
//  2��Ӧ�ã���ֵ���õ��ƶ�������ƶ���ֵ,���Լ��ٿ���
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
		cout << "String(const String& s)-��������-Ч�ʵ�" << endl;

		_str = new char[strlen(s._str) + 1];
		strcpy(_str, s._str);
	}

	// s3(��ֵ-����ֵ)
	String(String&& s)
		:_str(nullptr)
	{
		// ����������һ������ֵ�������㶼Ҫ���ˣ��ҵ�Ŀ���Ǹ�����һ����Ŀռ䣬һ����ֵ
		// �������Ŀ��ƺ�ֻ����
		cout << "String(String&& s)-�ƶ�����-Ч�ʸ�" << endl;
		swap(_str, s._str);
	}

	// s3 = s4
	String& operator=(const String& s)
	{
		cout << "String& operator=(const String& s)-������ֵ-Ч�ʵ�" << endl;

		if (this != &s)
		{
			char* newstr = new char[strlen(s._str) + 1];
			strcpy(newstr, s._str);

			delete[] _str;
			_str = newstr;
		}

		return *this;
	}

	// s3 = ��ֵ-����ֵ
	String& operator=(String&& s)
	{
		cout << "String& operator=(String&& s)-�ƶ���ֵ-Ч�ʸ�" << endl;
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

		return ret;  // ���ص�����ֵ
	}

	// s1 += s2
	String& operator+=(const String& s2)
	{
		//this->append(s2);
		return *this; // ��������ֵ
	}

private:
	char* _str;
};

int x1()
{
	String s1("s1");
	String s2("s2");

	String s3 = s1 += s2; // ��������
	String s4 = s1 + s2;  // �ƶ�����

	// ��ʵ�в��ɱ�����ڴ�ֵ���صĳ�������ֵ���صĿ������ض������ʱ����
	// ���vectorֻʵ�ֲ���Ϊconst��ֵ�����������ô����Ĵ��۾ͺܴ�
	// vector(const vector<T>& v)->���

	// �������vectorʵ���˲�����ֵ���õ��ƶ���������ô����Ч�ʾͻ�ܸ�
	// vector(vector<T>&& v) ->�ƶ�����
	// ���ۣ���ֵ���ñ���û̫�����壬��ֵ���õ�ʵ�����ƶ�������ƶ���ֵ
	// ��ô��Խ��պ�����ֵ���ض���(��ֵ)�ȵȳ������������Ч��
	vector<string> v = Solution1().letterCombinations("abcd");
	vector<vector<int>> vv = Solution2().generate(5);

	return 0;
}

//////////////////////////////////////////////////////////////////////////////
// 4����ֵ����ȥ�������Ĳ���,���ٿ���

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
//void emplace_back(Args&&... args);   // ģ��Ŀɱ���� ���˽⣩
// ��������˵��emplace�汾��push��insert��Ч����仰��׼ȷ��û������ȥ������

// ... ��������Ҳ�������ݽṹҲ����������������ʵ�֣�һ����ֵ���ã�һ����ֵ����
int x2()
{
	vector<string> v;
	string s1("��ֵ");
	string s2("��ֵ");

	int val = 1234;

	// push_back�е��õ���string�Ŀ�������
	v.push_back(move(s2));             // void push_back(const value_type& val);

	// push_back�е��õ���string���ƶ�����
	v.push_back("��ֵ");         //void push_back(value_type&& val);
	v.push_back(to_string(val)); // void push_back(value_type&& val);

	v.emplace_back(s1); // v.emplace_back(move(s1)); 
	v.emplace_back("��ֵ");

	vector<pair<string, string>> vp;
	vp.push_back(make_pair("��ֵ", "��ֵ"));

	pair<string, string> kv("��ֵ", "��ֵ");
	vp.push_back(kv);

	vp.emplace_back(make_pair("��ֵ", "��ֵ"));
	vp.emplace_back(kv);
	vp.emplace_back("��ֵ", "��ֵ"); // ����emplace_backģ��ɱ�����ص�ĵط�

	return 0;
}

// �ܽ�
// ��ֵ������������������ֵ���ٿ����ı������������ƶ�������ƶ���ֵ
// ��ֵ���ú���ֵ���ñ��ʵ����ö��Ǽ��ٿ�������ֵ���ñ��ʿ�����Ϊ���ֲ���ֵ���ò���ĵط�, �������ศ���

// ��ֵ���ã�������Ǵ��ι����кͷ���ֵ�����еĿ���
// ��������void push(T x) -> void push(const T& x)  ������Ǵ��ι����м��ٿ���
// ������ֵ��T f2() -> T& f2()  ����ķ���ֵ�����еĿ���
// ps:����Ҫע�����������ƣ�������ض���������������˾Ͳ����ô�����, �����ֵ�����޷�������ȴ�C++11��ֵ���ý��

// ��ֵ���ã�������Ǵ��κ�push/insert�����ڲ��������ƶ��������ռ��ϵ�����.
// + ��ֵ���ؽ��շ���ֵ�Ŀ���
// �������� void push(T&& x)  �����push�ڲ�����ʹ�ÿ�������x�������ռ��ϣ������ƶ������ȥ
// ������ֵ��T f2();  �����������ý���f2()���ض���Ŀ�����T ret = f2(),���������ֵ���õ��ƶ����죬�����˿���

void Fun(int &x){ cout << "lvalue ref" << endl; }
void Fun(const int &x){ cout << "const lvalue ref" << endl; }
void Fun(int &&x){ cout << "rvalue ref" << endl; }
void Fun(const int&& x){ cout << "const rvalue ref" << endl; }

template<typename T>
void PerfectForward(T &&t)
{
	// ��ֵ���û�ڶ���֮��Ĳ������ݹ�������ֵ���Զ�ʧ,��һ����û�ȫ��ʶ��Ϊ��ֵ
	// ����ת�����
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

	// Ĭ�ϰ���С�ڱȽϣ��ų������������
	std::sort(array, array + sizeof(array) / sizeof(array[0]));

	// �����Ҫ������Ҫ�ı�Ԫ�صıȽϹ���
	//std::sort(array, array + sizeof(array) / sizeof(array[0]), greater<int>());


	Greater<int> g1;
	g1(1, 2); // g1��һ������������õ�������operator()ʵ�ֵıȽ�
	g2(1, 2); // g2��һ������ָ�룬�����ǵ�����ָ��ĺ���
	// ��������ȫ��ͬ�Ķ�����������������һ���ġ�

	std::sort(array, array + sizeof(array) / sizeof(array[0]), g1);
	std::sort(array, array + sizeof(array) / sizeof(array[0]), g2);

	return 0;
}

struct Goods
{
	string _name;  // ����
	double _price; // �۸�
	int    _num;   // ����
	// ...
};

// ��ô�������ȥ����Goods��operator>/operator<�ǲ��õģ���Ϊ�㲻֪����Ҫ����һ���Աȥ�Ƚ�

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