#include <iostream>
using namespace std;

class Date

{

public:

	// ��ȡĳ��ĳ�µ�����

	int GetMonthDay(int year, int month)
	{
		static int MonthDays[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (month == 2 && (year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			return 29;
		}
		return MonthDays[month];
	}

	// ȫȱʡ�Ĺ��캯��

	Date(int year = 1900, int month = 1, int day = 1)
	{
		if (year >= 0 && month >= 1 && month <= 12 && day <= GetMonthDay(year, month))
		{
			_year = year;
			_month = month;
			_day = day;
		}
		else
		{
			cout << "�Ƿ�����" << endl;
		}
	}
	// �������캯��

	// d2(d1)

	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
		cout << "Date(const Date& d)" << endl;
	}
	// ��ֵ���������

	// d2 = d3 -> d2.operator=(&d2, d3)

	Date& operator=(const Date& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._year;
			_day = d._day;
		}
		return *this;
	}
	// ��������

	~Date()
	{
		cout << "Date has been destructed!" << endl;

	}



	// ����+=����

	Date& operator+=(int day)
	{
		_day += day;
		while (_day > GetMonthDay(_year, _month))
		{
			_day -= GetMonthDay(_year, _month);
			++_month;
			if (_month == 13)
			{
				++_year;
				_month = 1;
			}
		}
		return *this;
	}
	// ����+����

	Date operator+(int day)
	{
		Date tmp(*this);
		tmp._day += day;
		while (tmp._day > GetMonthDay(tmp._year, tmp._month))
		{
			tmp._day -= GetMonthDay(tmp._year, tmp._month);
			tmp._month++;
			if (tmp._month > 13)
			{
				++tmp._year;
				tmp._month = 1;
			}
		}
		return tmp;
	}
	// ����-����

	Date operator-(int day)
	{
		Date tmp = *this;
		tmp._day -= day;
		while (tmp._day <= 0)
		{
			-tmp._month;
			if (tmp._month == 0)
			{
				--tmp._year;
				tmp._month = 12;
			}

			tmp._day += GetMonthDay(tmp._year, tmp._month);
		}

		return tmp;
	}

	// ����-=����

	Date& operator-=(int day)
	{
		if (_day < 0)
		{
			return *this += -day;
		}
		_day -= day;
		while (_day <= 0) 
		{
			--_month;
			if (_month == 0)
			{
				--_year;
				_month = 12;
			}

			_day += GetMonthDay(_year, _month);
		}

		return *this;
	}

	// ǰ��++

	Date& operator++()
	{

		*this += 1;

		return *this;
	}

	// ����++

	Date operator++(int)
	{
		Date tmp(*this);
		*this += 1;
		return tmp;
	}

	// ����--

	Date operator--(int)
	{
		Date tmp(*this);
		*this -= 1;
		return tmp;
	}

	// ǰ��--

	Date& operator--()
	{
		*this -= 1;

		return *this;
	}

	// >���������

	bool operator>(const Date& d)
	{
		return !(*this <= d);
	}

	// ==���������

	bool operator==(const Date& d)
	{
		return _year == d._year && _month == d._month && _day == d._day;
	}


	// >=���������

	inline bool operator >= (const Date& d)
	{
		return !(*this < d);
	}

	// <���������

	inline bool operator < (const Date& d)
	{

		if (_year < d._year)
			return true;
		else if (_year == d._year && _month < d._month)
			return true;
		else if (_year == d._year && _month == d._month && _day < d._day)
			return true;

		return false;
	}

	// <=���������

	bool operator <= (const Date& d)
	{
		return *this < d || *this == d;
	}

	// !=���������

	bool operator != (const Date& d)

	{
		return !(*this == d); 
	}

	// ����-���� ��������

	int operator-(const Date& d)
	{
		int flag = 1;
		Date max = *this;
		Date min = d;
		if (*this < d)
		{
			max = d;
			min = *this;
			flag = -1;
		}
		int n = 0;
		while (min != max)
		{
			++min;
			++n;
		}
		return flag;
	}

private:

	int _year;

	int _month;

	int _day;

};