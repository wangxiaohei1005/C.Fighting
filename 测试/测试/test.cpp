#include <iostream>
using namespace std;

//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//		;
//		void Print() const
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void f(const Date& d)
//{
//	d.Print;
//}
//
//int main()
//{
//	Date d1(2020, 4, 18);
//	return 0;
//}
//class Date
//	{
//	public:
//		Date(int year = 0, int month = 1, int day = 1)
//		{
//			_year = year;
//			_month = month;
//			_day = day;
//		}
//		void Print() const
//		{
//			cout << _year << "-" << _month << "-" << _day << endl;
//		}
//	private:
//		int _year;
//		int _month;
//		int _day;
//	};
//	
//	void f(const Date& d)
//	{
//		d.Print;
//	}
//	
//	int main()
//	{
//		Date d1(2020, 4, 18);
//		return 0;
//	}


//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		n>11 ? cout << 11 : cout << -1;
//		for (int i = 31; i<n; i += 10)
//		{
//			for (int j = 2; j*j<i; j++)
//			{
//				if (i%j == 0)
//					break;
//				else if ((j + 1)*(j + 1)>i)
//					cout << ' ' << i;
//			}
//		}
//		cout << endl;
//	}
//}

//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//	string change(string number) {
//		int left = 0, right = number.length() - 1;
//		while (left < right)
//		{
//			while ((number[left]) % 2 != 0)
//				left++;
//			while ((number[right]) % 2 != 0)
//				right--;
//			if (left < right)
//			{
//				char tmp;
//				tmp = number[left];
//				number[left++] = number[right];
//				number[right--] = tmp;
//			}
//		}
//		return number;
//	}
//};
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		if (n < 11)
//		{
//			cout << -1;
//		}
//		else
//		{
//			for (int i = 11; i < n; i += 10)
//			{
//				for (int j = 2; (j * j) < i; j++)
//				{
//					if (i%j == 0)
//						break;
//					else if (j * j > i)
//						cout << ' ' << i;
//				}
//			}
//		}
//		cout << endl;
//	}
//}

void Insert(size_t pos, const char* str)
{
	assert(pos < _size);

	//如果空间不够就增容
	size_t len = strlen(str);
	if (_size + len > capacity);
	{
		reserve(_size + len);
	}

	//挪动数据
	int end = _size;
	while (end >= pos)
	{
		_str[len + end] = _str[end];
		--end;
	}


	strncpy(_str + pos, str, len);

	size
}