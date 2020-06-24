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
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int m1, m2, m3, m4;
//	cin >> m1 >> m2 >> m3 >> m4;
//	int A = (m1 + m3) / 2;
//	int B = (m2 + m4) / 2;
//	int C = (m4 - m2) / 2;
//	if (A - B == m1 && B - C == m2 && A + B == m3 && B + C == m4)
//	{
//		cout << A << " " << B << " " << C << " " << endl;
//	}
//	else
//		cout << "NO" << endl;
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	int x = 1;
//	do
//	{
//		printf("%2d", x++);
//	} while (x--);
//	return 0;
//}

//int main()
//{
//	char a = 0, cj;
//	while ((cj = getchar() != '\n'))
//	{
//		if (a % 2 != 0 && (cj >= 'a' && cj <= 'z'))
//			cj = cj - 'a' + 'A';
//		a++;
//		putchar(cj);
//	}
//	printf("\n");
//
//	return 0;
//
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int m = 0123, n = 123;
//	printf("%o %o\n", m, n);
//	return 0;
//}

//struct A
//{
//	long A1;
//	short A2;
//	int A3;
//	int *A4;
//};
//int main()
//{
//	int D = sizeof(struct A);
//	printf("%d", D);
//	return 0;
//}

//int f(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return (f(n - 1) + n * n * n);
//}


//int main()
//{
//	int s = f(3);
//	cout << s << endl;
//	return 0;
//}

//char fun(char x, char y)
//{
//	if (x < y)
//		return x;
//	return y;
//}
//
//int main()
//{
//
//	int a = '1', b = '1', c = '2';
//	cout << fun(fun(a, b), fun(b, c)) << endl;
//	return 0;
//}

//6.6.1
//#include <string>
//#include <algorithm> 
//#include <iostream>
//using namespace std;
//int a[100][100] = {0};
//int main()
//{
//	int W, H;
//	cin >> W >> H;
//	int i, j, max;
//	for (i = 0; i < W; ++i)
//	{
//		for (j = 0; j < H; ++j)
//		{
//			if (a[i][j] == 0)
//			{
//				max++;
//				if ((i + 2) < W)
//					a[i + 2][j] = -1;
//				if ((j + 2) < H)
//					a[i][j + 2] = -1;
//			}
//		}
//	}
//	cout << max << endl;
//	return 0;
//}

//6.6.2
//class Solution 
//{
//public:
//	int StrToInt(string str) 
//	{
//		int size = str.size(),s = 1;
//		long long tmp = 0;
//		if (!size)
//			return 0;
//		if (str[0] == '-')
//			s = -1;
//		for (int i = (str[0] == '-' || str[0] == '+') ? 1 : 0; i < size; ++i)
//		{
//			if (!('0' <= str[i] && str[i] <= '9'))
//				return 0;
//			tmp = (tmp << 1) + (tmp << 3) + (str[i] & 0xf);
//		}
//		return tmp * s;
//	}
//};

#include <iostream>
#include <string>
using namespace std;
//
//class A
//{
//	friend long fun(A s)
//	{
//		if (s.x < 3)
//		{
//			return 1;
//		}
//		return s.x + fun(A(s.x - 1));
//	}
//public:
//	A(long a)
//	{
//		x = a--;
//	}
//private:
//	long x;
//};
//
//
//int main()
//{
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		sum += fun(A(i));
//	}
//	cout << sum << endl;
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	int a = 1, b = 2, c = 3, d = 0;
//	if (a == 1 && b++ == 2)
//		printf("%d, %d, %d\n", a, b, c);
//	else
//		printf("%d, %d, %d\n", a, b, c);
//	return 0;
//}

//void main()
//{
//	int a = 1, b = 0, c = -1, d = 0;
//	d = ++a || ++b && ++c;
//	cout << d << endl;
//	return;
//}

//class parent
//{
//	int i;
//protected:
//	int x;
//public:
//	parent()
//	{
//		x = 0; 
//		i = 0;
//	}
//	void change()
//	{
//		x++; 
//		i++;
//	}
//	void display();
//};
//
//class son :public parent
//{
//public:
//	void modify();
//};
//
//void parent::display()
//{
//	cout << "x=" << endl;
//}
//
//void son::modify()
//{
//	x++;
//}
//
//int main()
//{
//	son A;
//	parent B;
//	A.display();
//	A.change();
//	A.modify();
//	A.display();
//	B.change();
//	B.display();
//}

//template <class T> class BigNumber
//{
//	long n;
//public:
//	BigNumber (T i) :n(i)
//	{}
//	BigNumber operator+(BigNumber b)
//	{
//		return BigNumber(n + b.n);
//	}
//};

//int main()
//{
//	int N, l, r, f0 = 0, f1 = 1, f;
//	cin >> N;
//	while (1)
//	{
//		f = f0 + f1;
//		f0 = f1;
//		f1 = f;
//		if (f < N)
//			l = N - f;
//		else
//		{
//			r = f - N;
//			break;
//		}
//	}
//	cout << min(l, r) << endl;
//	return 0;
//}

//class Parentthesis
//{
//public:
//	bool chkParenthesis(string A, int n)
//	{
//		if (n % 2 == 1)
//			return false;
//		stack<char> s1;
//		for (int i = 0; i < A.size(); i++)
//		{
//			if (A[i] == '(')
//				s1.push(A[i]);
//			else if (A[i] == ')')
//			{
//				if (s1.empty())
//					return false;
//				s1.top();
//			}
//			else
//				return false;
//		}
//		if (s1.empty())
//			return true;
//	}
//};

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr = (int*)(&a + 1);
//	printf("%d", *(ptr - 1));
//	return 0;
//}

//#include <iostream>
//class cla
//{
//	static int n;
//public:
//	cla()
//	{
//		n++;
//	}
//	~cla()
//	{
//		n--;
//	}
//	static int get_n()
//	{
//		return n;
//	}
//};
//
//int cla::n = 0;
//int main()
//{
//	cla *p = new cla;
//	delete p;
//	cout << "n = " << cla::get_n() << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	A()
//		:m_iVal(0)
//	{
//		test();
//	}
//	virtual void func()
//	{
//		std::cout << m_iVal << ' ';
//	}
//	void test()
//	{
//		func();
//	}
//public:
//	int m_iVal;
//};
//
//class B :public A
//{
//public:
//	B()
//	{
//		test();
//	}
//	virtual void func()
//	{
//		++m_iVal;
//		std::cout << m_iVal << ' ';
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	A *p = new B;
//	p->test();
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	int n, i, j;
//	int x = 0, y = 0;
//	char a[100][100];
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (strlen(a[i]) > strlen(a[i + 1]))
//		{
//			x = 1;
//			break;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (strcmp(a[i], a[i + 1]) > 0)
//		{
//			y = 1;
//			break;
//		}
//	}
//	if (x == 1 && y == 0)
//		cout << "lexicographically" << endl;
//	else if (x == 0 && y == 1)
//		cout << "lenngths" << endl;
//	else if (x == 0 && y == 0)
//		cout << "both" << endl;
//	else
//		cout << "none" << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int m, n, i;
//	cin >> m >> n;
//	for (i = m;; i++)
//	{
//		if (i %m == 0 && i%n == 0)
//			break;
//	}
//	cout << i << endl;
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	string in;
//	while (cin >> in)
//	{
//		vector<bool> a(256, 0);
//		string res = "";
//		for (int i = 0; i < in.size(); ++i)
//		{
//			if (a[in[i]] == false)
//			{
//				a[in[i]] = true;
//				res += in[i];
//			}
//		}
//		cout << res << endl;
//	}
//	return 0;
//}

//class Finder 
//{
//public:
//	int findElement(vector<int> A, int n, int x) 
//	{
//		int begin = 0, end = n - 1;
//		int tmp;
//		while (begin <= end)
//		{
//			tmp = (begin + end) / 2;
//			if (A[tmp] == x)
//			{
//				return tmp;
//			}
//			else if (A[tmp] <= A[end])
//			{
//				if (A[tmp] < x && A[end] >= x)
//				{
//					begin = tmp + 1;
//				}
//				else
//				{
//					end = tmp - 1;
//				}
//			}
//			else
//			{
//				if (A[tmp] > x && A[begin] <= x)
//				{
//					end = tmp - 1;
//				}
//				else
//				{
//					begin = tmp + 1;
//				}
//			}
//		}
//		return -1;
//	}
//};

#include <iostream>
using namespace std;
//
//class MyClass
//{
//
//public:
//	MyClass(int i = 0)
//	{
//		cout << 1;
//	}
//	MyClass(const MyClass&x)
//	{
//		cout << 2;
//	}
//	MyClass& operator=(const MyClass&x)
//	{
//		cout << 3;
//		return *this;
//	}
//	~MyClass()
//	{
//		cout << 4;
//	}
//};
//
//int main()
//{
//	MyClass obj1(1), obj2(2), obj3(obj1);
//	return 0;
//}

//class Test
//{
//public:
//	int a;
//	int b;
//	virtual void fun()
//	{}
//	Test(int tmp1 = 0, int tmp2 = 0)
//	{
//		a = tmp1;
//		b = tmp2;
//	}
//	int getA()
//	{
//		return a;
//	}
//	int getB()
//	{
//		return b;
//	}
//};
//
//int main()
//{
//	Test obj(5, 10);
//	int* pInt = (int*)&obj;
//	*(pInt + 0) = 100;
//	*(pInt + 1) = 200;
//	cout << "a = " << obj.getA() << endl;
//	cout << "b = " << obj.getB() << endl;
//	return 0;
//}

//void func(char **m)
//{
//	++m;
//	cout << *m << endl;
//}
//
//int main()
//{
//	static char *a[] = { "morning", "afternoon", "evening" };
//	char **p;
//	p = a;
//	func(p);
//	return 0;
//}

//class UnusualAdd 
//{
//public:
//	int addAB(int A, int B)
//	{
//		if (A == 0)
//		{
//			return B;
//		}
//		if (B == 0)
//		{
//			return A;
//		}
//		int sum = A^B, SUM = (A^B) << 1;
//		return addAB(sum, SUM);
//	}
//};

//class UnusualAdd 
//{
//public: 
//	int addAB(int A, int B)
//	{        
//		// write code here     
//		if(B == 0)       
//			return A;     
//		int sum = A ^ B;  
//		int flag = (A & B) << 1;       
//		return addAB(sum,flag); 
//	}
//};

//int main()
//{
//	int m, n;
//	while (cin >> m)
//	{
//		cin >> n;
//		int GoUp = 1;
//		int GoDown = 1;
//		for (int i = 0; i < n; i++)
//		{
//			GoUp *= (m + n) - i;
//			GoDown *= i + 1;
//		}
//		cout << GoUp / GoDown << endl;
//	}
//}
//#include <iostream>
//#include <vector>
//using namespace std;
//class Board
//{
//public:
//	bool checkWon(vector<vector<int> > board)
//	{
//		int bow = board.size();
//		int i, j, sum;
//		for (i = 0; i < bow; ++i)//判断行
//		{
//			sum = 0;
//			for (j = 0; j < bow; ++j)
//			{
//				sum += board[i][j];
//			}
//			if (bow == sum)
//				return true;
//		}
//		for (i = 0; i < bow; ++i)//判断列
//		{
//			sum = 0;
//			for (j = 0; j < bow; ++j)
//			{
//				sum += board[j][i];
//			}
//			if (bow == sum)
//				return true;
//		}
//
//		sum = 0;
//		for (i = 0; i < bow; ++i)
//		{
//			sum += board[i][i];
//		}
//		if (bow == sum)
//			return true;
//		sum = 0;
//		for (i = 0; i < bow; ++i)
//		{
//			sum += board[j][j];
//		}
//		if (bow == sum)
//			return true;
//	}
//};
//
//int main()
//{
//	Board b;
//	int n;
//	cin >> n;
//	vector<vector<int>> a(n, vector<int>(n));
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < n; ++j)
//		{
//			cin >> a[i][j];
//		}
//	}
//	if (b.checkWon(a))
//	{
//		cout << "win" << endl;
//	}
//	else
//	{
//		cout << "lose" << endl;
//	}
//
//	return 0;
//}

//int fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * fun(n + 1);
//}
//
//int main()
//{
//	int tmp = fun(2);
//	cout << tmp;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//class printer
//{
//public:
//	printer(std::string name)
//	{
//		std::cout << name;
//	}
//};
//class container
//{
//public:
//	container() :b("b"), a("a")
//	{}
//	printer a;
//	printer b;
//};
//int main()
//{
//	container c;
//	return 0;
//}
//int main()
//{
//	int I = 1;
//	if (I <= 0)
//		printf("*********\n");
//	else
//		printf("%%%%%%%%%\n");
//	return 0;
//}

//class LCA
//{
//public:
//	int getLCA(int a, int b)
//	{
//		if (a == b || a == b / 2)
//			return a;
//		if (b == a / 2)
//			return b;
//		while (a != b)
//		{
//			if (a > b)
//				a /= 2;
//			else
//				b /= 2;
//		}
//		return a;
//	}
//};

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int byte;
//	while (cin >> byte)
//	{
//		int max = 0;
//		int count = 0;
//		while (byte)
//		{
//			int flag = 0;
//			while (byte && (byte & 1))
//			{
//				byte = byte >> 1;
//				count++;
//			}
//			if (!(byte & 1))
//			{
//				if (count > max)
//					max = count;
//				count = 0;
//				byte = byte >> 1;
//			}
//		}
//		cout << max << endl;
//	}
//	return 0;
//}

#include <iostream>
//#define SQR(A) A*A
//void main()
//{
//	int x = 6, y = 3, z = 2;
//	x /= SQR(y + z) / SQR(y + z);
//	cout << x << endl;
//}
//void main()
//{
//	int n[][3] = { 10, 20, 30, 40, 50, 60 };
//	int(*p)[3];;
//	p = n;
//	cout << p[0][0] << "," << *(p[0] + 1) << "," << (*p)[2] << endl;
//}

//void func(const int& v1, const int& v2)
//{
//	std::cout << v1 << ' ';
//	std::cout << v2 << ' ';
//}
//
//
//int main(int argc, char* argv[])
//{
//	int i = 0;
//	func(++i, i++);
//	return 0;
//}

//#include "stdio.h"
//class Base
//{
//public:
//	int Bar(char x)
//	{
//		return (int)(x);
//	}
//	virtual int Bar(int x)
//	{
//		return(2 * x);
//	}
//};
//class Derived : public Base
//{
//public:
//	int Bar(char x)
//	{
//		return (int)(-x);
//	}
//	int Bar(int x)
//	{
//		return(x / 2);
//	}
//};
//
//int main()
//{
//	Derived Obj;
//	Base *pObj = &Obj;
//	printf("%d", pObj->Bar((char)(100)));
//	printf("%d", pObj->Bar(100));
//	return 0;
//}

//class BinInsert
//{
//public:
//	int binInsert(int n, int m, int j, int i)
//	{
//		return (n + (m << j));
//	}
//};

//#include <iostream>
//using namespace std;
//
//bool IsPrime(int n)
//{
//	for (int i = 2; i < n; ++i)
//	{
//		if (n % i == 0)
//			return false;
//		return true;
//	}
//}
//
//void Parse(int& n)
//{
//	int ret1 = n / 2;
//	int ret2 = n - ret1;
//	while (1)
//	{
//		if (IsPrime(ret1) && IsPrime(ret2))
//			break;
//		ret1--;
//		ret2++;
//	}
//	cout << ret1 << endl;
//	cout << ret2 << endl;
//}
//
//int main()
//{
//	int n;
//	while (cin >> n)
//		Parse(n);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i, a[10];
//	for (i = 9; i >= 0; i--)
//	{
//		a[i] = 10 - i;
//	}
//	printf("%d %d %d", a[2], a[5], a[8]);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class A
//{
//public:
//	virtual void print()
//	{
//		cout << "A::print()" << "\n";
//	}
//};
//
//class B :public A
//{
//public:virtual void print()
//{
//	cout << "B::print()" << "\n";
//}
//};
//
//class C :public A
//{
//public:virtual void print()
//{
//	cout << "C::print()" << "\n";
//}
//};
//
//void print(A a)
//{
//	a.print();
//}
//
//int main()
//{
//	A a, *aa, *ab, *ac;
//	B b;
//	C c;
//	aa = &a;
//	ab = &b;
//	ac = &c;
//	a.print();
//	b.print();
//	c.print();
//	aa->print();
//	ab->print();
//	ac->print();
//	print(a);
//	print(b);
//	print(c);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class B
//{
//public:
//
//	B()
//	{
//		cout << "default constructor" << " ";
//	}
//	~B()
//	{
//		cout << "destructed" << " ";
//	}
//	B(int i) : data(i)
//	{
//		cout << "constructed by parameter" << data << " ";
//	}
//private:int data;
//};
//
//B Play(B b)
//{
//	return b;
//}

//int main(/*int argc, char *argv[]*/)
//{
//	/*B temp = Play(5);*/
//	int i = 0, a = 1, b = 2, c = 3;
//	i = ++a || ++b || ++c;
//	printf("%d %d %d %d", i, a, b, c);
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	string str;
//	while (getline(cin, str))
//	{
//		bool flag = false;
//		vector<string> dev;
//		string row;
//		for (int i = 0; i < str.size(); i++)
//		{
//			if (flag)
//			{
//				if (str[i] != '\"')
//					row += str[i];
//				else
//
//					flag = false;
//			}
//			else
//			{
//				if (str[i] == ' ')
//				{
//					dev.push_back(row);
//					row = "";
//				}
//				else if (str[i] == '\"')
//					flag = true;
//				else
//					row += str[i];
//			}
//		}
//		dev.push_back(row);
//		cout << dev.size() << endl;
//		for (auto i : dev)
//			cout << i << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int Search(int N, int M)
//{
//	if (N == M)
//		return 0;
//	int tmp = 0;
//	for (int i = 2; i < N; i++)
//	{
//		if (i * (N / i) == N)
//		{
//			tmp++;
//			if (Search(N + N / i, M) != 0)
//			{
//				tmp += Search(N + N / i, M);
//				return tmp;
//			}
//			else
//			{
//				tmp--;
//			}
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int N, M;
//	while (cin >> N >> M)
//	{
//		cout << Search(N, M) << endl;
//	}
//	return 0;
//}

#include <iostream>
//#include <string.h>
using namespace std;
//
//int main()
//{
//	char ccString1[] = "Is page Fault??";
//	char ccString2[] = "No page Fault??";
//	strcpy(ccString1, "No");
//	if (strcmp(ccString1, ccString2) == 0)
//		cout << ccString2;
//	else
//		cout << ccString1;
//	return 0;
//}


//class S
//{
//public:
//	int GetValue() const
//	{
//		vv = 1;
//		return vv;
//	}
//private:
//
//	mutable int vv;
//};

//int main()
//{
//	char str[] = " glad to test something";
//	char *p = str;
//	p++;
//	int *p1 = reinterpret_cast<int *>(p);
//	p1++;
//	p = reinterpret_cast<char *>(p1);
//	printf("result is %s\n", p);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//const int days[] = { 0,31,59,90,120,151,181,212,243,273,304,334,365 };
//int main() 
//{   
//	int y, m, d;    
//	while (cin >> y >> m >> d) 
//	{       
//		int ans = days[m - 1] + d;   
//		if (m >= 13 || m < 0)
//			return -1;
//		if (d > 31 || d < 0)
//			return -1;
//		if (((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) && m > 2) 
//			ans++;     
//		cout << ans << endl;   
//	}   
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int count = 0;
//		while (n > 0)
//		{
//			if (n & 1)
//				++count;
//			n >>= 1;
//		}
//		cout << count << endl;
//	}
//	return 0;
//}
//#include <vector>
//class Gloves
//{
//public:
//	int findMinimum(int n, vector<int> left, vector<int> right)
//	{
//		int left_sum = 0, left_min = INT_MAX;
//		int right_sum = 0, right_min = INT_MAX;
//		int sum = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (left[i] * right[i] == 0)
//			{
//				sum += left[i] + right[i];
//			}
//			else
//			{
//				left_sum += left[i];
//				right_sum += right[i];
//				left_min = min(left[i], left_min);
//				right_min = min(right[i], right[i]);
//			}
//		}
//		return sum + min(left_sum - left_min, right_sum - right_min + 1) + 1;
//	}
//};

//myclass::foo()
//{
//	delete this;
//}
//void func()
//{
//	myclass *a = new myclass();
//	a->foo();
//}

//int main()
//{
//	const int a = 10;
//	int * p = (int *)(&a);
//	*p = 20;
//	cout << "a = " << a << ", *p = " << *p << endl;
//	return 0;
//}

//#include <algorithm>
//
//int Count(int n)
//{
//	int count = 0;
//	if (n < 0 || n>50000)
//	{
//		return -1;
//	}
//	for (int i = 2; i <= n; ++i)
//	{
//		int sum = 0;
//		for (int j = 2; j <= sqrt(i); ++j)
//		{
//			if (i % j == 0)
//			{
//				if (i / j == j)
//				{
//					sum += j;
//				}
//
//				else
//				{
//					sum += j + (i / j);
//				}
//			}
//		}
//		if (sum + 1 == i)
//		{
//			++count;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		cout << Count(n) << endl;
//	}
//	return 0;
//}

//class A
//{
//public:
//	void print()
//	{
//		cout << "A:print()";
//	}
//};
//
//class B: private A
//{
//public:
//	void print()
//	{
//		cout << "B:print()";
//	}
//};
//
//class C: public B
//{
//public:
//	void print()
//	{
//		A::print();
//	}
//};
//
//int main()
//{
//	C b;
//	b.print();
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int month;
//	while (cin >> month)
//	{
//		int a = 1, b = 0, c = 0;
//		while (--month)
//		{
//			c += b;
//			b = a;
//			a = c;
//		}
//		cout << a + b + c << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int fun(int n)
//{
//	if (n == 1)
//		return 0;
//	if (n == 2)
//		return 1;
//	return fun(n - 2) + 1;
//}
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		if (n == 0)
//			break;
//		else
//			cout << fun(n) << endl;
//	}
//
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//	int end = s.size();
//	for (int i = end - 1; i >= 0; --i)
//	{
//		cout << s[i];
//	}
//	return 0;
//}

#include <iostream>
#include <string>
using namespace std;
//int main()
//{
//	string s1, s2;
//	while (cin >> s1 >> s2)
//	{
//		int n = 0;
//		for (int i = 0; i < s1.size(); i++)
//		{
//			for (int j = s1.size(); j > i; i--)
//			{
//				if (s2.find(s1.substr(i, j - i)) != string::npos)
//				{
//					n = n > (j - i) ? n : (j - i);
//				}
//			}
//		}
//		cout << n << endl;
//	}
//	return 0;
//}
int main()
{
	string s1;
	while (cin >> s1)
	{
		unsigned int i;
		for (i = 0; i < s1.size(); ++i)
		{
			if (s1.find(s1[i] == s1.rfind(s1[i])))
				cout << s1[i] << endl;
			break;
		}
		if (i == s1.size())
			cout << -1;
	}

	return 0;
}