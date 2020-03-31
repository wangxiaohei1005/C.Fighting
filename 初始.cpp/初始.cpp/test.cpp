//#include <iostream>
//using namespace std;//C++库中所有东西命名

//namespace N1
//{
//	int ret;
//	int tmp;
//	int Add(int left, int right)
//	{
//		return left;
//	}
//}
//
//using N1::ret;
//int main()
//{
//	printf("%d\n", ret);
//	return 0;
//}

//using namespace N1;


//int main()
//{
//	//自动识别类型
//	std :: cout << "hello world"<<std::endl;
//	int i = 1;
//	double d = 1.11;
//	std::cout << i << "" << d << std::endl;
//	return 0;
//}

//#include <iostream>
////完全展开命名库
////using namespace std;
////常用的库里面一些对象或者类型可以展出
////工程中常用的用法
//using std:: cout;
//using std:: endl;
//
//int main()
//{
//	//自动识别类型
//	std :: cout << "hello world"<<std::endl;
//	int i = 1;
//	double d = 1.11;
//	std::cin >> i >> d;
//	std::cout << i << "" << d << std::endl;
//	return 0;
//}

#include <iostream>
using namespace std;

//缺省参数
//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//全缺省
void Func1(int a = 10, int b = 20, int c = 30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "b = " << c << endl;
}
//半缺省，必须从右往左连续缺省
void Func2(int a, int b = 10, int c = 20)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "b = " << c << endl;
}
//调用是从左往右调用,即传参必须从左往右依次传参
//int main()
//{
//	/*Func1();
//	Func1(1);
//	Func1(1, 2);
//	Func1(1, 2, 3);*/
//	Func2(1);//未缺省部分必须定义
//	Func2(1, 2);
//	Func2(1, 2, 3);
//	//cout << "hello world" << endl;
//	return 0;
//}

//函数重载，函数名相同参数不同（类型不同、顺序不同、个数不同）
//对返回值没有要求
//int Add(int left, int right)
//{
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	return left + right;
//}
//
//long Add(long left, long right)
//{
//	return left + right;
//}
//int Add()//空参数也为函数的重载
//{
//
//}
//void Add()
//{
//}
//需注意，只有返回值不同不可构成重载

//int main()
//{
//	Add(10, 20);
//	Add(10.0, 20.0);
//	Add(10L, 20L);//识别为long
//	return 0;
//}

//类似面试题
//1.什么是函数重载——函数名相同参数不同（条件三选）
//2.C++是如何支持函数重载的？为什么C语言不支持？

#include <iostream>
using namespace std;

//int main()
//{
//	int a = 1;
//	int& ra = a;//ra是a的引用，也可理解为别名
//	//其物理地址相同
//	int& b = a;//引用必须在定义时初始化
//	return 0;
//}

int main()
{
	const int a = 0;
	const int& b = a;


	int c = 1;
	int& d = c;
	const int& e = c;
	return 0;
}