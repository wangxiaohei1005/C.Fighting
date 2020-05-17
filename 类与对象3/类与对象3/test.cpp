#include <iostream>
using namespace std;

class Solution
{
public:
	int Sum_solution(int n)
	{
		return n;
	}
};
int main()
{
	Solution s1;
	s1.Sum_solution(10);

	Solution();
	return 0;
}

class wyf
{
public:
	wyf()
	{ 
		++_scount;
	}
	wyf(const wyf& t) 
	{
		++_scount; 
	}
	static int GetWyfCount()
	{
		return _scount;
	}
private:
	static int _scount;
};

int wyf::_scount = 0;

void TestWyf()
{
	cout << wyf::GetWyfCount() << endl;
	wyf a1, a2;
	wyf a3(a1);
	cout << wyf::GetWyfCount() << endl;

}

class B
{
public:
	B(int b = 0)
		:_b(b)
	{}
	int _b;
};

class A
{
public:
	void print()
	{
		cout << a << endl;
		cout << b._b << endl;
		cout << p << endl;
	}
private:
	//非静态成员变量，可以在成员声明时给缺省值
	int a = 10;
	B b = 20;
	int* p = (int*)malloc(4);
	static int n;
};

int A::n = 10;

int main()
{
	A a;
	a.print();

	return 0;
}

class Date;  //前置声明
class Time
{
	friend class Date;//声明日期类为时间类的友元类，则在日期类中就直接访问Time类中的私有成员变量
public:
	Time(int hour,int minute,int second)
		:_hour(hour)
		, _minute(minute)
		, _second(second)
	{}
private:
	int _hour;
	int _minute;
	int _second;
};


class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
		:_year(year)
		, _month(month)
		, _day(day)
	{}
	void SetTimeOfDate(int hour, int minute, int second)
	{
		//直接访问时间类的私有的成员变量
		_t._hour = hour;
		_t._minute = minute;
		_t._second = second;
	}

private:
	int _year;
	int _month;
	int _day;
	Time _t;
};