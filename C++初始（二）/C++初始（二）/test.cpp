#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date()
//	{
//	
//	}
//	Date(int year, int month, int day)
//		//����Ϊȫȱʡ
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//bool operator<(const Date& d)
//	//{
//	//	if (_year == d._year && )
//	//	return _year >= d._year &&
//	//		_month >= d._month &&
//	//		_day >= d._day;
//	//}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	Date d2(2020, 4, 11);
//}

//class person//�ؼ��� + �������  { ������� }
//{
//public:
//	void showInfo()
//	{
//		cout << _name << "-" << _sex<<"-" << _age << endl;
//	}
//public:
//	char* _name;
//	char* _sex;
//	int _age;
//};

class Stack
{
public:
	Stack(int n = 10)
	{
		_a = (int*)malloc(sizeof(int)*n);
		_size = 0;
		_capacity = n;
	}

	~Stack()
	{
		free(_a);
		_a = nullptr;
		_size = _capacity = 0;
	}
private:
	int* _a;
	size_t _size;
	size_t _capacity;
};

//int main()
//{
//	Stack st;
//	Stack st;
//	return 0;
//}

Date operator-=(int day)
{
	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			--_year;
			_month = 12;
		}
		_day += _Getmonths
	}

}