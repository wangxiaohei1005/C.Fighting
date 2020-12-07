#include <iostream>

using namespace std;
//
//class String{
//
//};



//void test()
//{
//	const int a = 10;
//	int* pa = (int*)&a;
//	*pa = 100;
//	cout << a << endl;
//	cout << *pa << endl;
//}
//
//int   main()
//{
//	test();
//	return 0;
//}


//class Point{
//int x, y;
//
//public:
//Point(int a, int b) { x = a; y = b; }
//
//void MovePoint(int a, int b){ x += a; y += b; }
//
//void print()
//{
//	cout << "x=" << endl;
//}
//};
//
//void main()
//{
//
//	Point point1(10, 10);
//
//	point1.MovePoint(2, 2);
//
//	point1.print();
//
//}

//#include <iostream>
//
//using namespace std;
//class A
//{
//public:
//	int b;
//	//virtual int b; //错误，不能把成员变量声明为虚有的
//	virtual void f()
//	{
//		cout << "继续" << endl;
//	}
//	virtual void h(int i = 1, int j = 2)
//	{
//		cout << "继续H" << endl;
//	}
//	~A(){
//		cout << "析构A" << endl;
//	}
//};
//class B :public A
//{
//public:
//	int b;
//	void f(int i)//重载虚函数f
//	{
//		cout << "paif()" << endl;
//	}
//	void f(){//在派生类中重定义虚函数f
//		cout << "paixu" << endl;
//	}
//	void h(){ //重载虚函数h的版本。注意这里不是对基类虚函数的重定义。
//		int b;
//		b = 5;
//		cout << "B的" << b << endl;
//	}
//	void h(int i, int j = 3){
//		int b;
//		b = j;
//		cout << "paixuH" << b << endl;
//	}//当基类中的虚函数有默认形参时，派生类中重定义基类中的虚函数的版本必须有相同数量的形参，
//	//形参可以有默认值，也可以没有。如果形参数量不一样多则是对虚函数的重载。
//	~B(){
//		cout << "析构B" << endl;
//	}
//};
//int main(){
//	B m;
//	A *p = &m;
//	//p->b=3/错误，指向派生类的基类指针不能调用派生类中的成员，只能调用基类中的成员，
//	//除非该成员是虚函数
//	p->f(); W//调用派生类中的函数f
//		//p->f(4);错误，注意这里不是在调用派生类中带一个形参的f函数，因为带一个参数的f函数不是虚函数，
//		//用指向派生类的基类指针时不会调用派生类中的函数，除非这个函数是虚函数。这里基类中没有定义这种 //带一个形参的f函数，所以这时会出现错误。
//
//		p->A::f(); W//调用基类的虚函数f，可以用作用域运算符使用指向派生类的基类指针调用基类的虚函数
//		p->h();//调用派生类中的虚函数版本h，用指向派生类的基类指针调用虚函数时派生类中的虚函数的默认值在这里不起作用。虽然派生类中的虚函数需要一个参数，
//
//	//但这里不给参数仍是调用的派生类的带两个参数的虚函数h，而不是调用派生类中的不带参数的h函数
//
//	m.h(); //调用派生类中不带参数的h函数，如果要用对象调用派生类中带两个形参的h函数，在本例中必须使用一个实参值。
//	m.h(1);//调用派生类中带两个形参的h函数，用对象调用派生类中的虚函数时函数的默认值不受基类虚函数默认值的影响
//	m.A::h(1);// 调用基类中的虚函数h.
//}

//template<class iterator,class T>
//iterator find(iterator first, iterator last, const T& data)
//{
//	while (first != lasy)
//	{
//		if (*first != last)
//		{
//			return first;
//		}
//		++first;
//	}
//	return last;
//}


#if 0
int main()
{
	string s;
	size_t sz = s.capacity();
	for (size_t i = 0; i < 200; i++)
	{
		s.push_back('a');
		if (sz != s.capacity())
		{
			cout << sz << endl;
			sz = s.capacity();
		}
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>  
#include <stdlib.h>  
#include <pthread.h>//线程操作所需头文件  

int main(void)
{
	size_t stack_size = 0; //堆栈大小变量  
	pthread_attr_t attr; //线程属性结构体变量  

	//初始化线程属性  
	int ret = pthread_attr_init(&attr);
	if (ret != 0)
	{
		perror("pthread_attr_init");
		return -1;
	}

	//获取当前的线程栈大小  
	ret = pthread_attr_getstacksize(&attr, &stack_size);
	if (ret != 0)
	{
		perror("pthread_attr_getstacksize");
		return -1;
	}

	//打印堆栈值  
	printf("stack_size = %dB, %dk\n", stack_size, stack_size / 1024);

	return 0;
}
#endif
/*
#include <vector>
#include <iostream>

using namespace std;
//构造和析构
vector();//构造一个空的vector
vector(size_t n, const T& data = T());//用n个值为data的元素构造vector
vector(first, last);//用[first, kast)区间中的元素构造vector
vector(const vector<t> &);//拷贝构造函数
//C++11中新增，可以采用{}的方式构造
*/
int main()
{
	printf("%s, %5.3s\n", "computer", "computer");
	cout << (11 | 10) << endl;
	return 0;
}

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	// IO型OJ可能会有多组测试用例，所以这里要持续接收输入多组测试用例。
	int n;
	while (cin >> n)
	{
		long long sum = 0;
		vector<int> a; a.resize(3 * n);
		for (int i = 0; i < (3 * n); i++) {
			cin >> a[i];
		}
		/*
		排序，然后取下标为3n - 2，3n - 4 ，3n - 4... n+2，n位置的元素累加即可，
		相当下标为[0,n-1]的n个数做每组的最左边的数，剩下的2个数据两个为一组，
		大的值做最右边的数，次大的做中间值，这里就是把这个次大的值加起来
		*/
		std::sort(a.begin(), a.end());
		for (int i = n; i <= 3 * n - 2; i += 2)
			比特科技制作
		{
			sum += a[i];
		}
		cout << sum << endl;
	}
}