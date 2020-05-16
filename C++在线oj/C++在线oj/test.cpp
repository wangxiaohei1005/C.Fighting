//求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。

class Solution {
public:
	int Sum_Solution(int n) {
		int sum = 0;
		for (int i = 1; i <= n; ++i)
		{
			sum += i;
		}
		return sum;
	}
};

//设计一个程序能计算一个日期加上若干天后是什么日期。

#include<iostream>
#include<cstring>
using namespace std;
bool leapyear(int y) {
	if (y % 100 == 0 && y % 400 == 0 || y % 100 != 0 && y % 4 == 0)
		return  true;
	else return false;
}
int fun(int y, int m, int d, int n) {
	int sum = 0;
	int mon = 0, date = 0;
	int month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (leapyear(y)) {
		month[2] = 29;
	}
	for (int i = 0; i < m; i++) {
		sum += month[i];
	}
	sum = sum + d + n;
	while (sum >= 365) {
		if (leapyear(y) && (sum / 366 != 0)) {
			y++;
			sum -= 366;
		}
		if ((!leapyear(y)) && (sum / 365 != 0)) {
			y++;
			sum -= 365;
		}
	}
	if (leapyear(y)) {
		month[2] = 29;
	}
	if (!leapyear(y)) {
		month[2] = 28;
	}
	if (sum == 0) {
		y--;
		mon = 12;
		date = 31;
		printf("%04d-%02d-%02d\n", y, mon, date);
	}
	if (sum != 0) {
		int temp = 0;
		for (int i = 1; i <= 12; i++) {
			temp += month[i];
			mon++;
			if (temp >= sum) {
				temp -= month[i];
				date = sum - temp;
				break;
			}
		}
		printf("%04d-%02d-%02d\n", y, mon, date);
	}
	return 0;
}
int main() {
	int m, year, mon, date, n;
	while (cin >> m) {
		for (int i = 0; i < m; i++) {
			cin >> year >> mon >> date >> n;
			fun(year, mon, date, n);
		}
	}
	return 0;
}