//6.1 
//1.
//#include <iostream>
//#include <string>
//using namespace std; 
//int main()
//{
//	string s1, s2;
//	getline(cin, s1);
//	getline(cin, s2);
//	for (int i = 0; i < s2.size(); i++)
//	{
//		int tmp;
//		while ((tmp = s1.find(s2[i])) != -1)
//		{
//			s1.erase(tmp, 1);
//		}
//	}
//	cout << s1 << endl;
//	return 0;
//}


//2.
//#include<iostream>
//#include<vector>
//#include <algorithm> 
//using namespace std;
//int main()
//{
//	vector<int> c;
//	long long nums;
//	cin >> nums;
//	c.tmperve(3 * nums);
//	for (size_t i = 0; i < 3 * nums; ++i)
//	{
//		int t;
//		cin >> t;
//		c.push_back(t);
//	}
//	sort(c.begin(), c.end());//排序  
//	long long tmp = 0, j = 0;
//	for (int i = (3 * nums) - 2; i >= 0; i -= 2) //1 2 5 5 7 8，每次取 7 5 即可  
//	{
//		if (j < nums)
//		{
//			tmp += c[i];
//			++j;
//		}
//		else
//			break;
//	}
//	cout << tmp << endl;
//	return 0;
//}
//6.2
//1.

/*#include <iostream>

using namespace std;

const int nums = 100000;
int N;
int A[nums], tmp = 0;

int f1(int i)   //非递减判断
{
	while ((i != N - 1) && A[i] <= A[i + 1])
		++i;
	return i;
}

int f2(int i)   //非递增判断
{
	while ((i != N - 1) && A[i] >= A[i + 1])
		++i;
	return i;
}
//剔除特殊情况
int main()
{
	cin >> N;//取到输入的第一行
	for (int i = 0; i < N; ++i)
	{
		cin >> A[i];//第二行n个整数
	}
	int i = 0;
	while (i != N)
	{
		while (A[i] == A[i + 1])//前后数字相等则跳过
		{
			++i;
		}
		if (A[i] < A[i + 1])
		{
			i = f1(i) + 1;
			++tmp;
		}
		else
		{
			i = f2(i) + 1;
			++tmp;
		}
	}
	cout << tmp << endl;
	return 0;
}*/

//2.
//
//#include<iostream>
//#include<string>
//
//using namespace std;

//int main()
//{
//	string s1, s2;
//	cin >> s1;
//	while (cin >> s2)
//	{
//		s1.insert(0, " ");
//		s1.insert(0, s2);
//	}
//	cout << s1 << endl;
//	return 0;
//}


//int main()
//{
//	string str;
//	getline(cin, str);
//	string tmp, res;
//	for (int i = 0; i < str.size(); ++i)
//	{
//		if (str[i] == ' ')
//		{
//			res = ' ' + tmp + res;
//			tmp = "\0";
//		}
//		else
//		{
//			tmp += str[i];
//		}
//	}
//	if (tmp.size())
//	{
//		res = tmp + res;
//	}
//	cout << res << endl;
//	return 0;
//}


//6.3
//1.
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string str,end;
//	cin >> str;
//	int i = 0, max_len = 0;
//	int strlen = str.length();
//	while (i < strlen)
//	{
//		if (str[i] < '0' || str[i] > '9')
//		{
//			++ i;
//		}
//		else
//		{
//			string tmp = "";
//			int len = 0;
//			while (i < strlen && str[i] <= '9' && str[i] >= '0')
//			{
//				tmp = tmp + str[i];
//				++i;
//				++len;
//			}
//			if (len > max_len)
//			{
//				max_len = len;
//				end = tmp;
//			}
//		}
//	}
//	cout << end << endl;
//	return 0;
//}

//6.3.2
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers) 
//	{
//		if (numbers.empty())
//			return 0;
//		sort(numbers.begin(), numbers.end());
//
//		int ques = numbers[numbers.size() / 2];//如果出现次数超过数组个数一半，则其数组中间位置一定为此数
//
//		int count = 0;
//		for (int i = 0; i < numbers.size(); ++i)
//		{
//			if (numbers[i] == ques)
//			{
//				++count;
//			}
//		}
//		if (count > numbers.size() / 2)
//			return ques;
//		else
//			return 0;
//	}
//};

//#include <stdio.h>
//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	fib(8);
//	printf("%d", cnt);
//}
//6.4.1
#include <iostream>

using namespace std;

int main()
{
	int m1, m2, m3, m4;
	cin >> m1 >> m2 >> m3 >> m4;
	int A = (m1 + m3) / 2;
	int B = (m2 + m4) / 2;
	int C = (m4 - m2) / 2;
	if (A - B == m1 && B - C == m2 && A + B == m3 && B + C == m4)
	{
		cout << A << " " << B << " " << C << " " << endl;
	}
	else
		cout << "NO" << endl;
	return 0;
}

