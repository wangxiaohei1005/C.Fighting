#include <iostream>
using namespace std;

//int main()
//{
//	// Ȩ����С�ͷŴ�������������ú�ָ���
//	// Ȩ�޷Ŵ�  const���ܸ���const��constֻ�ܸ�const
//	const int a = 10;
//	//int& b = a;
//	const int& b = a;
//
//	// Ȩ�޵���С  ��const�ȿ��Ը���const��Ҳ���Ը�const
//	int c = 20;
//	int& d = c;
//	const int& e = c;
//
//	const int* cp1 = &a;
//	//int* p1 = cp1; // ���ܣ�����Ȩ�޵ķŴ�
//	
//	int* p2 = &c;
//	const int* cp2 = p2; // ���ԣ�����Ȩ�޵���С
//
//
//
//	// ������ԣ���������Ĺ���
//	const int x = 10;
//	int y = x;
//	int z = 20;
//	const int r = z;
//
//	return 0;
//}

// 1������������
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

// ����������ֵ
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
//// ֵ����
//A TestFunc1() { return a; }
//
//// ���÷���
//A& TestFunc2(){ return a;}
//
//void main()
//{
//	// ��ֵ��Ϊ�����ķ���ֵ����
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 1000000; ++i)
//		TestFunc1();
//	size_t end1 = clock();
//
//	// ��������Ϊ�����ķ���ֵ����
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 1000000; ++i)
//		TestFunc2();
//	size_t end2 = clock();
//
//	// �������������������֮���ʱ��
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
//	// ��ֵ��Ϊ��������
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//
//	// ��������Ϊ��������
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//
//	// �ֱ���������������н������ʱ��
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

// Ƶ������Swap�����ú�����Ҫ����ջ֡���������ĵ�
// ��ν����1��C����ʹ�ú꺯�� 2��C++ʹ����������
//
//int main()
//{
//	int a = 0, b = 2;
//	Swap(a, b);
//
//	return 0;
//}


//#define  N 10 -�� const int N = 10;
//�꺯�� -��inline�������

#include <map>

//int main()
//{
//	int a = 0;
//	auto b = a; // b�������Ǹ���a�������Ƶ�����int
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
//	// ��ʾһ��auto��ʵ���е����ã�������������Ҵ�ſ�һ�¾Ϳ���
//	std::map<std::string, std::string> dict;
//
//	std::map<std::string, std::string>::iterator it1 = dict.begin();
//	auto it2 = dict.begin(); // ʹ��auto�������Ż������Լ򻯴����д��
//
//	return 0;
//}

//void TestFor(int array[])
//{
//	for (auto& e : array)  // ��Ϊarray�Ѿ������������ˣ������Ѿ��˻���ָ��
//		cout << e << endl;
//}

//int main()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//	// Ҫ�������е�ֵ��2�����ٴ�ӡһ��
//
//	// C�����е�����
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
//	// C++11 ->��Χfor(�﷨��) -> �ص㣺д�����Ƚϼ��
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
//	cout << "����" << endl;
//}
//
//void fun(int* p)
//{
//	cout << "����ָ��" << endl;
//}
//
////#define NULL    0
//
//int main()
//{
//	// C
//	int* p1 = NULL;
//
//	// C++11��,�Ƽ�����������ȥ��
//	int* p2 = nullptr;
//
//	fun(0);
//	fun(NULL);    // Ԥ�����fun(0)
//	fun(nullptr); // fun((void*)0);
//
//	return 0;
//}

// ��������Զ��壺1����Ա����  2����Ա����
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

// C++��class��struct�������������࣬classĬ�Ϸ����޶�����˽�еģ�structĬ�Ϸ����޶����ǹ���
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
//private:   // һ������³�Ա�������ǱȽ���˽�ģ����ᶨ���˽�л��߱���
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

// ����һ�����ݽṹջ����
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