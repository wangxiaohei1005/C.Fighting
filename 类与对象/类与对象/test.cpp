#include <iostream>
using namespace std;

//int main()
//{
//	// 权限缩小和放大规则：适用于引用和指针间
//	// 权限放大  const不能给非const，const只能给const
//	const int a = 10;
//	//int& b = a;
//	const int& b = a;
//
//	// 权限的缩小  非const既可以给非const，也可以给const
//	int c = 20;
//	int& d = c;
//	const int& e = c;
//
//	const int* cp1 = &a;
//	//int* p1 = cp1; // 不能，属于权限的放大
//	
//	int* p2 = &c;
//	const int* cp2 = p2; // 可以，属于权限的缩小
//
//
//
//	// 下面可以，不跟上面的规则
//	const int x = 10;
//	int y = x;
//	int z = 20;
//	const int r = z;
//
//	return 0;
//}

// 1、引用做参数
//void swap(int r1, int r2)
//{
//	int tmp = r1;
//	r1 = r2;
//	r2 = tmp;
//}
//void swap_c(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//void swap_cpp(int& r1, int& r2)
//{
//	int tmp = r1;
//	r1 = r2;
//	r2 = tmp;
//}
//
//int main()
//{
//int a = 0, b = 1;
//swap_c(&a, &b);
//
//swap_cpp(a, b);
//
//	int x = 10;
//	int& y = x;
//
//	return 0;
//}

// 引用做返回值
//int Count1()
//{
//	static int n = 0;
//	n++;
//
//	return n;
//}
//
//int& Count2()
//{
//	static int n = 0;
//	n++;
//
//	return n;
//}
//
//int main()
//{
//	const int& r1 = Count1();
//	int& r2 = Count2();
//
//	static int x = 0;
//	int& y = x;
//
//	return 0;
//}

//int Add1(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//
//int main()
//{
//	const int& ret = Add1(1, 2);
//	Add1(3, 4);
//	cout << "Add1(1, 2) is :" << ret << endl;
//	return 0;
//}

//int& Add2(int a, int b)
//{
//	static int c = 1;
//	c = a + b;
//	return c;
//}
//
//int main()
//{
//	int& ret = Add2(1, 2);
//	//Add2(3, 4);
//	printf("hello world\n");
//	cout << "Add2(1, 2) is :" << ret << endl;
//	return 0;
//}

//#include <time.h>
//struct A
//{ 
//	int a[10000];
//};
//
//// 40000byte
//
//A a;
//// 值返回
//A TestFunc1() { return a; }
//
//// 引用返回
//A& TestFunc2(){ return a;}
//
//void main()
//{
//	// 以值作为函数的返回值类型
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 1000000; ++i)
//		TestFunc1();
//	size_t end1 = clock();
//
//	// 以引用作为函数的返回值类型
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 1000000; ++i)
//		TestFunc2();
//	size_t end2 = clock();
//
//	// 计算两个函数运算完成之后的时间
//	cout << "TestFunc1 time:" << end1 - begin1 << endl;
//	cout << "TestFunc2 time:" << end2 - begin2 << endl;
//}


//#include <time.h>
//struct A{ int a[10000]; };
//void TestFunc1(A a){}
//void TestFunc2(A& a){}
//
//void main()
//{
//	A a;
//	// 以值作为函数参数
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//
//	// 以引用作为函数参数
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//
//	// 分别计算两个函数运行结束后的时间
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}

//int main()
//{
//	/*int a = 10;
//	int& b = a;
//	int c = 10;
//	b = c;
//
//	int* p = &a;
//	p = &c;*/
//
//	char c1 = 0;
//	char& c2 = c1;
//
//	char* p1 = &c1;
//
//	return 0;
//}

int Add(int left, int right)
{
	return left + right;
}

inline void Swap(int& x1, int& x2)
{
	int tmp = x1;
	x1 = x2;
	x2 = tmp;
	x1 = x2;
	x2 = tmp;
	x1 = x2;
	x2 = tmp;
	x1 = x2;
	x1 = x2;
	x2 = tmp;
	x1 = x2;

	x1 = x2;
	x2 = tmp;
	x1 = x2;

	x1 = x2;
	x2 = tmp;
	x1 = x2; x1 = x2;
	x2 = tmp;
	x1 = x2;
	x1 = x2;
	x2 = tmp;
	x1 = x2;
	x1 = x2;
	x2 = tmp;
	x1 = x2;
	x1 = x2;
	x2 = tmp;
	x1 = x2;
	x1 = x2;
	x2 = tmp;
	x1 = x2;
	x1 = x2;
	x2 = tmp;
	x1 = x2;
	x1 = x2;
	x2 = tmp;
	x1 = x2;
	x1 = x2;
	x2 = tmp;
	x1 = x2;
	x1 = x2;
	x2 = tmp;
	x1 = x2;
}

// 频繁调用Swap，调用函数需要建立栈帧，是有消耗的
// 如何解决：1、C语言使用宏函数 2、C++使用内联函数
//
//int main()
//{
//	int a = 0, b = 2;
//	Swap(a, b);
//
//	return 0;
//}


//#define  N 10 -》 const int N = 10;
//宏函数 -》inline函数替代

#include <map>

//int main()
//{
//	int a = 0;
//	auto b = a; // b的类型是根据a的类型推导出是int
//	int& c = a;
//
//	auto& d = a;
//	auto* e = &a;
//	auto f = &a;
//
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//
//	cout << typeid(d).name() << endl;
//	cout << typeid(e).name() << endl;
//	cout << typeid(f).name() << endl;
//
//	// 演示一下auto在实际中的作用，但是下面代码大家大概看一下就可以
//	std::map<std::string, std::string> dict;
//
//	std::map<std::string, std::string>::iterator it1 = dict.begin();
//	auto it2 = dict.begin(); // 使用auto来进行优化，可以简化代码的写法
//
//	return 0;
//}

//void TestFor(int array[])
//{
//	for (auto& e : array)  // 因为array已经不再是数组了，这里已经退化成指针
//		cout << e << endl;
//}

//int main()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//	// 要求将数据中的值乘2倍，再打印一遍
//
//	// C语言中的做法
//	for (int i = 0; i < sizeof(array) / sizeof(int); ++i)
//	{
//		array[i] *= 2;
//	}
//
//	for (int i = 0; i < sizeof(array) / sizeof(int); ++i)
//	{
//		cout << array[i] << " ";
//	}
//	cout << endl;
//
//	// C++11 ->范围for(语法糖) -> 特点：写起来比较简洁
//	for (auto& e : array)
//	{
//		e *= 2;
//	}
//
//	for (auto e : array)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//
//
//}

//void fun(int n)
//{
//	cout << "整形" << endl;
//}
//
//void fun(int* p)
//{
//	cout << "整形指针" << endl;
//}
//
////#define NULL    0
//
//int main()
//{
//	// C
//	int* p1 = NULL;
//
//	// C++11中,推荐像下面这样去用
//	int* p2 = nullptr;
//
//	fun(0);
//	fun(NULL);    // 预处理后fun(0)
//	fun(nullptr); // fun((void*)0);
//
//	return 0;
//}

// 类里面可以定义：1、成员变量  2、成员函数
//class Person
//{
//	void Print()
//	{
//
//	}
//
//	char _name[10];
//	int  _age;
//	// ...
//};

// C++中class和struct都可以用来定类，class默认访问限定符是私有的，struct默认访问限定符是共有
// struct Student
//class Student
//{
//	void ShowInfo()
//	{
//		cout << _name << endl;
//		cout << _age << endl;
//		cout << _stuid << endl;
//	}
//public:
//	int GetAge()
//	{
//		return _age;
//	}
//
//private:   // 一般情况下成员变量都是比较隐私的，都会定义成私有或者保护
//	char* _name;
//	int  _age;
//	int  _stuid;
//	// ...
//};
//
//int main()
//{
//	Student s1;
//	Student s2;
//	/*s1._name = "peter";
//	s1._age = 18;
//	s1._stuid = 1;*/
//	s1.ShowInfo();
//
//	return 0;
//}

// 定义一个数据结构栈的类
class Stack
{
public:
	void Init(size_t n)
	{
		// ...
	}

	void Destory()
	{
		//...
	}

	void Push(int x)
	{
		// ...
	}

	void  Pop()
	{
		// ..
	}

	// ...

	//protected:
private:
	int* _a;
	size_t _top;
	size_t _capacity;
};

int main()
{
	Stack st;
	st.Init(10);
	st.Push(1);
	st.Push(2);
	st.Push(3);
	st.Push(4);

	st.Pop();

	st.Destory();



	return 0;
}