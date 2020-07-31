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

//#include <stdio.h>
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

//#include <iostream>
//#include <string>
//using namespace std;
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

//#include <stdio.h>
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
//
//#include <iostream>
//using namespace std;
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

//#include <iostream>
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
//
//#include <iostream>
////#include <string.h>
//using namespace std;
////
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
//
//#include <iostream>
//#include <string>
//using namespace std;
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
//int main()
//{
//	string s1;
//	while (cin >> s1)
//	{
//		unsigned int i;
//		for (i = 0; i < s1.size(); ++i)
//		{
//			if (s1.find(s1[i] == s1.rfind(s1[i])))
//				cout << s1[i] << endl;
//			break;
//		}
//		if (i == s1.size())
//			cout << -1;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;

//int main()
//{
//	int c,v,k;
//	cin >> c;
//	while (c--)
//	{
//		cin >> v >> k;
//		int num = 2 * v;
//		vector<int> table(num);
//		for (int i = 0; i < num; ++i)
//		{
//			cin >> table[i];
//		}
//		while (k--)
//		{
//			vector<int> n1(table.begin(), table.end());
//			for (int i = 0; i < v; ++i)
//			{
//				table[2 * i] = n1[i];
//				table[2 * i + 1] = n1[i + v];
//			}
//		}
//		for (int i = 0; i < num - 1; ++i)
//		{
//			cout << table[i] << " ";
//		}
//		cout << table[num - 1] << endl;
//	}
//	return 0;
//}

//int main()
//{
//	string s1;
//	while (cin >> s1)
//	{
//		unsigned int i;
//		for (i = 0; i < s1.size(); ++i)
//		{
//			if (s1.find(s1[i] == s1.rfind(s1[i])))
//				cout << s1[i] << endl;
//			break;
//		}
//		if (i == s1.size())
//			cout << -1 << endl;
//	}
//
//	return 0;
//}

//class Bonus 
//{
//public:
//	int getMost(vector<vector<int> > board) 
//	{
//		if (board.empty())
//			return 0;
//		for (int i = 1; i < 6; ++i)
//		{
//			board[0][i] += board[0][i - 1];
//			board[i][0] += board[i - 1][0];
//		}
//		for (int i = 1; i < 6; ++i)
//		{
//			for (int j = 1; j < 6; ++i)
//			{
//				board[i][j] += max(board[i - 1][j], board[i][j - 1]);
//			}
//		}
//		return board[5][5];
//	}
//};

//#include <vector>
//using namespace std;
//class Solution
//{
//	int X, Y;//方向和大小
//	vector<vector<int>> m_maze;
//};

//#include <vector>
//#include <iostream>
//using namespace std;
//
//int GCD(int a, int b)
//{
//	int c;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	return b;
//}
//
//int main()
//{
//	int n, power;
//	vector<int> num;
//	while (cin >> n >> power)
//	{
//		num.resize(n);
//		for (int i = 0; i < n; i++)
//		{
//			cin >> num[i];
//		}
//		for (int k = 0; k < n; k++)
//		{
//			if (num[k] < power)
//			{
//				power += num[k];
//			}
//			else
//			{
//				power += GCD(power, num[k]);
//			}
//		}
//		cout << power << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v = { 1, 1 };
//	for (int i = 2; i < 10001; ++i)
//	{
//		v.push_back((v[i - 2] + v[i - 1]) % 10000);
//	}
//	int n, x;
//	while (cin >> n)
//	{
//		for (int i = 0; i < n; ++i)
//		{
//			cin >> x;
//			printf("%04d", v[x]);
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		long long sum = 0;
//		for (size_t i = 0; i < s.size(); ++i)
//		{
//			sum += s[i] - '0';
//		}
//		int ret = 0;
//		while (sum > 9)
//		{
//			ret += sum % 10;
//			sum /= 10;
//			if (sum < 10)
//			{
//				ret += sum;
//				if (ret > 9)
//				{
//					sum = ret;
//					ret = 0;
//				}
//				else
//				{
//					break;
//				}
//			}
//		}
//		ret = ret == 0 ? sum : ret;
//		cout << ret << endl;
//	}
//	return 0;
//}

//class Solution
//{
//public:
//	int jumpFloorII(int number)
//	{
//		if (number <= 0)
//			return -1;
//		else if (number == 1)
//			return 1;
//		else
//			return 2 * jumpFloorII(number - 1);
//	}
//};

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	long long l, r;
//	while (cin >> l >> r)
//	{
//		if (l > 2 * r * 3.14)
//			cout << "No" << endl;
//		else
//			cout << "Yes" << endl;
//	}
//	return 0;
//}
//class Solution
//{
//public:
//	int add(int n1, int n2)
//	{
//		while (n2 != 0)
//		{
//			int sum = n1^n2;
//			int car = (n1 & n2) << 1;
//				n1 = sum;
//			n2 = car;
//		}
//		return n1;
//	}
//};

//#include <stdio.h>
//#include <unistd,h>
//int main()
//{
//	fork();
//	fork();
//	fork();
//	printf("hello\n");
//	return 0;
//}


//class Solution 
//{
//public:
//	/**
//	*  奇数位上都是奇数或者偶数位上都是偶数
//	*  输入：数组arr，长度大于2
//	*  len：arr的长度
//	*  将arr调整成奇数位上都是奇数或者偶数位上都是偶数
//	*/
//	void oddInOddEvenInEven(vector<int>& arr, int len)
//	{
//		/*int i = 0;
//		int j = 1;
//		while (i < len && j < len)
//		{
//			while (i < len && (arr[i] & 1) == 0)
//				i += 2;
//			while (j < len && (arr[j] & 1) == 1)
//				j += 2;
//			if (i < len && j < len)
//				swap(arr[i], arr[j]);
//		}*/
//		/*for (int i = 0, j = 1; i < len && j < len;)
//		{
//			if (arr[i] & 1 == 0)
//			{
//				i += 2;
//				continue;
//			}
//			if (arr[j] & 1 == 1)
//			{
//				j += 2;
//				continue;
//			}
//			swap(arr[i], arr[j]);
//			i += 2;
//			j += 2;
//		}*/
//		int i = 0, j = 1;
//		while (i < len && j < len)
//		{
//			if (arr[len - 1] % 2 == 0)
//			{
//				swap(arr[len - 1], arr[i]);
//				i += 2;
//			}
//			else
//			{
//				swap(arr[len - 1], arr[j]);
//				j += 2;
//			}
//		}
//	}
//};

//#include <iostream>
//#include <string>
//#define ADD(x, y) ((x) + (y))
//#define CMP(x, y) ((x) > (y))
//
//int main()
//{
//	double a, b, c;
//	while (std::cin >> a >> b >> c)
//	{
//		if (CMP(ADD(a, b), c) && CMP(ADD(b, c), a) && CMP(ADD(a, c), b))
//		{
//			std::cout << "Yes" << std::endl;
//		}
//		else
//		{
//			std::cout << "No" << std::endl;
//		}
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int WeekToDay(int year, int month, int c, int w, bool B)
//{
//	int day, week, i;
//	if (month == 1)
//	{
//		month = 13;
//		year--;
//	}
//	if (month == 2)
//	{
//		month = 14;
//		year--;
//	}
//	i = 0;
//	for (day = B ? 1 : 31; day <= B ? 31 : 1; B ? (day++) : (day--))
//	{
//		week = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
//		if (week + 1 == w)
//			++i;
//		if (i == c)
//			break;
//	}
//	return day;
//}
//
//int main()
//{
//	int year;
//	while (cin >> year)
//	{
//		cout << year << "-01 -01" << endl;
//		printf("%d -01 -%02d\n", year, WeekToDay(year, 1, 3, 1, 1));
//		printf("%d -02 -%02d\n", year, WeekToDay(year, 2, 3, 1, 1));
//		printf("%d -05 -%02d\n", year, WeekToDay(year, 5, 1, 1, 0));
//		cout << year << "-07 -04" << endl;
//		printf("%d -09 -%02d\n", year, WeekToDay(year, 9, 1, 1, 1));
//		printf("%d -11 -%02d\n", year, WeekToDay(year, 11, 4, 4, 1));
//		cout << year << "-12 -25" << endl << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int main()
//{
//	int number;
//	while (cin >> number)
//	{
//		cout << number << " = ";
//		int* number1 = new int[1000];
//		int j = 0;
//		for (int i = 2; i <= sqrt(number); i++)
//		{
//			while (number % i == 0)
//			{
//				if (number != 1)
//				{
//					number1[j] = i;
//					j++;
//					number /= i;
//				}
//			}
//		}
//		if (number != 1)
//		{
//			number1[j] = number;
//			j++;
//		}
//		for (int k = 0; k < j; k++)
//		{
//			cout << number1[k];
//			if (k + 1 < j)
//			{
//				cout << " * ";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <cstdio>
//
//int main()
//{
//	int fib[100001];
//	fib[0] = 1;
//	fib[1] = 1;
//	for (int i = 2; i <= 100000; ++i)
//	{
//		fib[i] = fib[i - 1] + fib[i - 2];
//		fib[i] = fib[i] % 1000000;
//	}
//	int n;
//	while (std::cin >> n)
//	{
//		if (n < 29)
//		{
//			printf("%d\n", fib[n]);
//		}
//		else
//		{
//			printf("%06d\n", fib[n]);
//		}
//	}
//	return 0;
//}

//#include <cstdio>
//#include <cmath>
//#include <iostream>
////闰年判断函数
//inline int leap_year(int year)
//{ 
//	return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0); 
//}//足年天数 
//inline int profit_of_year(int year)
//{
//	return 2 * 31 + 1 * 28 + 1 * 31 + 2 * 30 + 1 * 31 + 2 * 30 + 1 * 31 + 2 * 31 + 2 * 30 + 2 * 31 + 1 * 30 + 2 * 31 + leap_year(year);
//}//判断这个月份是不是质数月 
//inline bool prime(int n)
//{
//	return n == 2 || n == 3 || n == 5 || n == 7 || n == 11;
//}//求出一个日子是这一年的第几天 
//int profit_of_this_year(int year, int month, int day)
//{
//	if (!prime(month))
//	{
//		day *= 2;
//	}
//	while (--month)
//	{
//		switch (month)
//		{
//		case 1:
//		case 8:
//		case 10:
//		case 12:
//			day += 62;
//			break;
//		case 3:
//		case 5:
//		case 7:
//			day += 31;
//			break;
//		case 4:
//		case 6:
//		case 9:
//			day += 60;
//			break;
//		case 11:
//			day += 30;
//			break;
//		case 2:
//			day += 28 + leap_year(year);
//			break;
//		default:;
//		}
//	}
//	return day;
//}
//
//int main()
//{
//	int year1, month1, day1, year2, month2, day2;
//	int count_profit = 0;
//	while (std::cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2)
//	{
//		count_profit = 0;
//		count_profit += profit_of_year(year1) -
//			profit_of_this_year(year1, month1, day1 - 1); //这里的day1 - 1虽然有可能会出现0日，但是实际2月0日就相当于1月31日，所以不影响结果。
//		count_profit += profit_of_this_year(year2, month2, day2);
//		if (year1 == year2) //避免起点和终点是同一年，如果是同一年，要减掉这一年的天数。
//		{
//			count_profit -= profit_of_year(year1);
//		}
//		for (int i = year1 + 1; i < year2; i++) //中间足年每一年的天数 
//		{
//			count_profit += profit_of_year(i);
//		}
//		std::cout << count_profit << std::endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s, t;
//	while (cin >> s >> t)
//	{
//		int count = 0;
//		while (s.find(t) != string::npos)
//		{
//			count++;
//			s.erase(s.find(t), t.size());
//		}
//		cout << count << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int from, to;
//	while (cin >> from >> to)
//	{
//		long long sum = 0, a1 = 1, a2 = 1;
//		for (int i = 0; i < to; ++i)
//		{
//			if (i >= from - 1)
//			{
//				sum += a1;
//			}
//			swap(a1, a2);
//			a2 += a1;
//		}
//		cout << sum << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <list>
//#include <unordered_map>
//using namespace std;
//
//struct give
//{
//	int key, value;
//};
//
//class LRU
//{
//public:
//	int key;
//	list<p> cache;
//	unordered_map<int, list<p>::iterator> map;
//
//private:
//};

//#include <iostream>
//#include <cstdio> 
//using namespace std;
//int main()
//{
//	long num[91] = { 1, 2 };
//	for (int i = 2; i <= 90; i++)
//	{
//		num[i] = num[i - 1] + num[i - 2];
//	}
//	int count;
//	while (cin >> count)
//	{
//		printf("%lld\n", num[count - 1]);
//	}
//	return 0;
//}

//#include <iostream>
//#include <fstream>
//#include <algorithm>
//#include <string>
//#include <set>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		set<string> str;
//
//		string id, conn;
//
//		int maxsize = 0;
//		for (int i = 0; i < n; ++i)
//		{
//			cin >> id >> conn;
//			
//			if (conn == "connect")
//				str.insert(id);
//			
//			else if (conn == "disconnect")
//				str.erase(id);
//			
//			int size = str.size();
//			maxsize = max(maxsize, size);
//		}
//		cout << maxsize << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <fstream>
//#include <algorithm> 
//#include <string>
//#include <vector>
//using namespace std; 
//int main() 
//{ 
//	int n;
//	while (cin >> n) 
//	{ 
//		vector<string> list(n);
//		vector<bool> flag(n, true);
//		for (int i = 0; i < n; ++i) 
//			cin >> list[i]; 
//		sort(list.begin(), list.end()); 
//		//将类似字符串经过排序，放在一起
//		for (int i = 0; i < list.size() - 1; ++i)
//		{ 
//			// 1、两串相同 
//			// 2、前串是后串的子串，而且后串后一位是 '/'
//			if (list[i] == list[i + 1])
//				flag[i] = false;
//			else if (list[i].size() < list[i + 1].size() && list[i] == list[i + 1].substr(0, list[i].size()) && list[i + 1] [list[i].size()] == '/')
//				flag[i] = false;
//		}
//		for (int i = 0; i < list.size();++i) 
//			if (flag[i])
//				cout << "mkdir -p " << list[i] << endl; 
//		cout << endl; 
//	}
//	return 0; 
//}

//#include <iostream>
//#include <string.h>
//#include <stdio.h>
//#include <cstdio>
//using namespace std;
//
//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//		int len = s.length();
//		for (int i = 0; i < len; i++)
//		{
//			if (s[i] >= '0' && s[i] <= '9')
//			{
//				cout << s[i];
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//struct pos
//{
//	int x, y, level;
//};
//
//int bfs(vector<vector<char> > & map)
//{
//	const int dir[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };
//	queue<pos> que;
//	int m = map.size(), n = map[0].size();
//	vector<vector<bool> > visit(m, vector<bool>(n, false));
//	pos start{ 0, 1, 0 }, end{ 9, 8, 0 };
//	que.push(start);
//	visit[start.x][start.y] = true;
//	while (!que.empty())
//	{
//		pos cur = que.front(), next;
//		que.pop();
//		for (int i = 0; i < 4; ++i)
//		{
//			next.x = cur.x + dir[i][0];
//			next.y = cur.y + dir[i][1]; 
//			next.level = cur.level + 1;
//			if (next.x == end.x && next.y == end.y) 
//				return next.level; 
//			if (next.x >= 0 && next.x < m && next.y >= 0 && next.y < n &&  !visit[next.x][next.y] && map[next.x][next.y] == '.') 
//			{ 
//				que.push(next); 
//				visit[next.x][next.y] = true;
//			}
//		}
//	}
//	return 0;
//}
//
//int main() 
//{
//	vector<vector<char> > map(10, vector<char>(10)); 
//	while (cin >> map[0][0]) //由多个测试用例，需要全部读取
//	{
//		for (int i = 0; i < 10; ++i)
//		{
//			for (int j = 0; j < 10; ++j)
//			{
//				if (i == 0 && j == 0)
//					continue;
//				cin >> map[i][j];
//			}
//		}
//		cout << bfs(map) << endl;
//	}
//	return 0; 
//}

//#include <iostream>
//#include <string>
//#include  <map>
//using namespace std;
//
//int main()
//{
//	string A, B;
//	while (cin >> A >> B)
//	{
//		map<char, int> A1, B1;
//		for (int i = 0; i < A.size(); i++)
//		{
//			A1[A[i]]++;
//		}
//		for (int i = 0; i < B.size(); i++)
//		{
//			B1[B[i]]++;
//		}
//		for (int i = 'A'; i <= 'Z'; i++)
//		{
//			if (B1[i] > A1[i])
//			{
//				cout << "No" << endl;
//				break;
//			}
//			if (i == 'Z')
//			{
//				cout << "Yes" << endl;
//			}
//		}
//	}
//	return 0;
//}

// 创建出的类对象只能在堆上
// 思路：正常创建对象一定要调用构造函数，或者拷贝构造
//class HeapOnly
//{
//public:
//	static HeapOnly* GetObj()
//	{
//		return new HeapOnly;
//	}
//
//private:
//	HeapOnly()
//	{}
//
//	// C++98防拷贝：声明成私有
//	//HeapOnly(const HeapOnly& );
//public:
//	// C++11 : 声明成delete
//	HeapOnly(const HeapOnly&) = delete;
//};
//
//int x7()
//{
//	//HeapOnly hp;
//	//HeapOnly* p = new HeapOnly;
//	//HeapOnly* p = HeapOnly::GetObj();
//	std::shared_ptr<HeapOnly> sp1(HeapOnly::GetObj());
//	std::shared_ptr<HeapOnly> sp2(HeapOnly::GetObj());
//
//	//HeapOnly copy(*sp1);
//
//
//	return 0;
//}
//class StackOnly
//{
//public:
//	static StackOnly GetObj()
//	{
//		return StackOnly();
//	}
//private:
//	StackOnly()
//	{}
//};

// 这种方案存在一定程序缺陷，无法阻止在数据段(静态区)创建对象
//class StackOnly
//{
//public:
//	void* operator new(size_t size) = delete;
//};
//
//int x8()
//{
//	StackOnly so;
//	//StackOnly* p = new StackOnly;
//
//	static StackOnly sso;
//
//
//	return 0;
//}


//#include <vector>
//#include <iostearm>
//using namespace std;
//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers) 
//	{
//	int n = numbers.size();
//	if (n == 0) return 0; 
//	int num = numbers[0], count = 1;
//	for (int i = 1; i < n; i++) 
//	{ 
//		if (numbers[i] == num) 
//		{ 
//			count++;
//		}
//		else 
//		{ 
//			count--; 
//		}
//		if (count == 0)
//		{ 
//			num = numbers[i]; 
//			count = 1; 
//		} 
//	}// 经过上面的操作, 已经找到该数 num 了. // 下面的操作是为了确认 num 确实是出现次数超过一半.
//	count = 0; 
//	for (int i = 0; i < n; i++) 
//	{ 
//		if (numbers[i] == num) 
//			count++;
//	}
//	if (count * 2 > n)
//		return num;
//	return 0; 
//	}
//};


//#include <iostream>
//#include <string>
//#include <vector>
//#include <sstream> 
//#include <algorithm> 
//using namespace std;
//string getFileName(string path)
//{ 
//	int pos = path.rfind('\\');
//	return path.substr(pos + 1);
//}
//string modifyName(string name)
//{ 
//	if (name.size() > 16)
//	{ 
//		name = name.substr(name.size() - 16);
//	}
//	return name; 
//}
//struct ErrRecord
//{ 
//	string file; 
//	int lineNo; 
//	int count;
//	ErrRecord(string file, int lineNo)
//	{
//		this->file = file; 
//		this->lineNo = lineNo; 
//		count = 1;
//	} // 后续需要进行查找, 所以先定义好两个错误记录什么情况算相等.
//	bool operator==(const ErrRecord & a)
//	{ 
//		return (file == a.file) && (lineNo == a.lineNo); 
//	}
//};
//int main()
//{
//	string file;
//	int lineNo;
//	vector<ErrRecord> myvec;
//	while (cin >> file >> lineNo)
//	{
//		ErrRecord record(getFileName(file), lineNo);
//		auto res = find(myvec.begin(), myvec.end(), record);
//		if (res == myvec.end())
//		{
//			myvec.push_back(record);
//		}
//		else
//		{
//			res->count++;
//		}
//	}
//	int count = 0;
//	for (auto item : myvec)
//	{
//		if (count + 8 >= myvec.size())
//		{
//			cout << modifyName(item.file) << " " << item.lineNo << " " << item.count << endl;
//		}
//		count++;
//	}
//	return 0;
//}

//int x1()
//{
//	int* p1 = new int;
//	int* p2 = p1;
//
//	//bit::auto_ptr<int> ap1(new int);
//	//bit::auto_ptr<int> ap2 = ap1;
//	// *ap1 = 1; 悬空崩溃
//
//	//bit::unique_ptr<int> up1(new int);
//	//bit::unique_ptr<int> up2(up1);
//
//	bit::shared_ptr<int> sp1(new int);
//	bit::shared_ptr<int> sp2(sp1);
//
//	bit::shared_ptr<int> sp3(new int);
//	bit::shared_ptr<int> sp4(sp3);
//	bit::shared_ptr<int> sp5(sp3);
//
//	sp1 = sp4;
//
//
//	return 0;
//}
//
//#include<thread>
//
//int x2()
//{
//	bit::shared_ptr<int> sp(new int);
//	cout << sp.use_count() << endl;
//	int n = 10000;
//
//	std::thread t1([&](){
//		for (int i = 0; i < n; ++i)
//		{
//			bit::shared_ptr<int> sp1(sp);
//		}
//	});
//
//	std::thread t2([&](){
//		for (int i = 0; i < n; ++i)
//		{
//			bit::shared_ptr<int> sp2(sp);
//		}
//	});
//
//	t1.join();
//	t2.join();
//
//	cout << sp.use_count() << endl;
//
//	return 0;
//}
//
//struct ListNode
//{
//	int val;
//	//ListNode* _next;
//	//ListNode* _prev;
//	//bit::shared_ptr<ListNode> _spnext;
//	//bit::shared_ptr<ListNode> _spprev;
//
//	bit::weak_ptr<ListNode> _spnext;
//	bit::weak_ptr<ListNode> _spprev;
//
//	~ListNode()
//	{
//		cout << "~ListNode()" << endl;
//	}
//};
//
//int x3()
//{
//	/*ListNode* n1 = new ListNode;
//	ListNode* n2 = new ListNode;
//
//	n1->_next = n2;
//	n2->_prev = n1;
//
//	delete n1;
//	delete n2;*/
//
//	bit::shared_ptr<ListNode> spn1(new ListNode);
//	bit::shared_ptr<ListNode> spn2(new ListNode);
//
//	cout << spn1.use_count() << endl;
//	cout << spn2.use_count() << endl;
//
//	// 循环引用
//	spn1->_spnext = spn2; // 解决方式：使用weak_ptr，不增加引用计数
//	spn2->_spprev = spn1;
//
//	cout << spn1.use_count() << endl;
//	cout << spn2.use_count() << endl;
//
//	return 0;
//}

//#include <vector>
//
//using namespace std;
//class MaxGap 
//{
//public:
//	int findMaxGap(vector<int> A, int n)
//	{
//		int max = 0;
//		int max_n = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (A[i] > max)
//			{
//				max = A[i];
//			}
//			max_n = i;
//		}
//		if (max_n == 0)
//		{
//			return (A[0] - A[n - 1]);
//		}
//		if (max_n == n - 1)
//		{
//			return (A[n - 1] - A[0]);
//		}
//		int Left = (A[max_n] - A[0]);
//		int Right = (A[max_n] - A[n - 1]);
//		int tmp = (Left > Right ? Left : Right);
//		return tmp;
//	}
//};

// 问题本身不复杂, 将思路考虑周全即可. 
//#include <vector>
//using namespace std;
//class Printer 
//{ 
//public: 
//	vector<int> clockwisePrint(vector<vector<int> > mat, int n, int m) 
//	{ vector<int> ret; int x1 = 0, y1 = 0; //左上角坐标 
//	int x2 = n-1, y2 = m-1;
//	//右下角坐标 
//	// 这两个坐标表示了一个矩形(最开始的矩阵) 
//	// 然后按照要求打印最外圈的数据. 
//	// 打印完毕之后, 缩小矩形的大小. 
//	while(x1 <= x2 && y1 <= y2)
//	{ 
//		for(int j = y1; j <= y2; ++j) 
//			ret.push_back(mat[x1][j]); 
//		for(int i = x1+1; i < x2; ++i) 
//			ret.push_back(mat[i][y2]);
//		for(int j = y2; x1 < x2 && j >= y1; --j) 
//			//x1 < x2：只有在不是单一的横行时才执行这个循环 
//			ret.push_back(mat[x2][j]); 
//		for(int i = x2-1; y1 < y2 && i > x1; --i)
//			//y1 < y2：只有在不是单一的竖列时才执行这个循环 
//			ret.push_back(mat[i][y1]);
//		x1++; 
//		y1++;
//		x2--;
//		y2--;
//	}
//	return ret;
//	}
//};
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <unistd.h>
//#include <sys/socket.h>
//#include <arpa/inet.h>
//#include <netinet/in.h>
//#include <fcntl.h>
//
//#include "coroutine.h"
//
//int tcp_init() {
//	int lfd = socket(AF_INET, SOCK_STREAM, 0);
//	if ( lfd == -1 ) perror("socket"),exit(1);
//
//	int op = 1;
//	setsockopt(lfd, SOL_SOCKET, SO_REUSEADDR, &op, sizeof(op));
//	
//	struct sockaddr_in addr;
//	addr.sin_family = AF_INET;
//	addr.sin_port = htons(9898);
//	addr.sin_addr.s_addr = htonl(INADDR_ANY);
//	int r = bind(lfd, (struct sockaddr*)&addr, sizeof(addr));
//	if ( r == -1 ) perror("bind"),exit(1);
//	
//	listen(lfd, SOMAXCONN);
//
//	return lfd;
//}
//
//void set_nonblock(int fd) {
//	int flgs = fcntl(fd, F_GETFL, 0);
//	flgs |= O_NONBLOCK;
//	fcntl(fd, F_SETFL, flgs);
//}
//
//void accept_conn(int lfd, schedule_t *s, int co_ids[], void *(*call_back)(schedule_t *s, void *args) ) {
//	while ( 1 ) {
//		int cfd = accept(lfd, NULL, NULL);
//		if ( cfd > 0 ) {
//			set_nonblock(cfd);
//			int args[] = {lfd, cfd};
//			int id = coroutine_create(s, call_back, args);
//			int i;
//			for (i=0; i<CORSZ; i++) {
//				if ( co_ids[i] == -1 )  {
//					co_ids[i] = id;
//					break;
//				}
//			}
//			if ( i == CORSZ ) {
//				printf("连接太多\n");
//			}
//			coroutine_running(s, id);
//		} else {
//			int i;
//			for (i=0; i<CORSZ; i++) {
//				int cid = co_ids[i];
//				if ( cid == -1 ) continue;
//				coroutine_resume(s, cid);
//			}	
//		}
//	}
//}
//
//void *handle(schedule_t *s, void *args) {
//	int *arr = (int*)args;
//	int cfd = arr[1];
//
//	char buf[1024] = {};
//	while ( 1 ) {
//		memset(buf, 0x00, sizeof(buf));
//		int r = read(cfd, buf, 1024);
//		if ( r == -1 )  {
//			coroutine_yield(s);
//		} else if ( r == 0 ) {
//			break;
//		} else {
//			printf("recv:%s\n", buf);
//			if ( strncasecmp(buf, "exit", 4) == 0 ) {
//				break;
//			}
//			write(cfd, buf, r);
//		}
//	}
//}
//
//int main( void ) {
//	int lfd = tcp_init();
//	set_nonblock(lfd);
//
//	schedule_t *s = schedule_create();
//	int co_ids[CORSZ];
//	int i;
//	for (i=0; i<CORSZ; i++)
//		co_ids[i] = -1;
//
//	accept_conn(lfd, s, co_ids, handle);
//	
//	schedule_destroy(s);
//}

//全排列算法！！！
//双向/随机都可以

//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <functional>
//using namespace std;
//
//
//int main()
//{
//	vector<int> v = { 5, 1, 2, 3, 7, 6 };
//	sort(v.begin(), v.end());
//	
//	do
//	{
//		for (auto e : v)
//			cout << e << " ";
//		cout << endl;
//
//	} while (next_permutation(v.begin(), v.end()));
//	//next要求为升序   prev要求为降序
//
//	sort(v.begin(), v.end(), greater<int>());
//
//	do
//	{
//		for (auto e : v)
//			cout << e << " ";
//		cout << endl;
//
//	} while (next_permutation(v.begin(), v.end()));
//	return 0;
//}

//指针和数组笔试题解析
//一维数组


#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	//一维数组
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(a + 0));
	//printf("%d\n", sizeof(*a));
	//printf("%d\n", sizeof(a + 1));
	//printf("%d\n", sizeof(a[1]));
	//printf("%d\n", sizeof(&a));
	//printf("%d\n", sizeof(*&a));
	//printf("%d\n", sizeof(&a + 1));
	//printf("%d\n", sizeof(&a[0]));
	//printf("%d\n", sizeof(&a[0] + 1));

	cout << endl;
	cout << endl;
	//字符数组
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr + 1));
	printf("%d\n", sizeof(&arr[0] + 1));
	cout << endl;
	cout << endl;

	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	/*printf("%d\n", strlen(*arr));报错
	printf("%d\n", strlen(arr[1]));报错
	printf("%d\n", strlen(&arr));报错
	printf("%d\n", strlen(&arr + 1));报错
	printf("%d\n", strlen(&arr[0] + 1));编译不通过*/
	cout << endl;
	cout << endl;

	/*char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr + 1));
	printf("%d\n", sizeof(&arr[0] + 1));
	cout << endl;
	cout << endl;*/

	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	//printf("%d\n", strlen(*arr));报错
	//printf("%d\n", strlen(arr[1]));报错
	//printf("%d\n", strlen(&arr));报错
	//printf("%d\n", strlen(&arr + 1));报错
	printf("%d\n", strlen(&arr[0] + 1));
	cout << endl;
	cout << endl;

	char *p = "abcdef";
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(p + 1));
	printf("%d\n", sizeof(*p));
	printf("%d\n", sizeof(p[0]));
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p + 1));
	printf("%d\n", sizeof(&p[0] + 1));

	printf("%d\n", strlen(p));
	printf("%d\n", strlen(p + 1));
	/*printf("%d\n", strlen(*p)); 报错
	printf("%d\n", strlen(p[0])); 报错
	printf("%d\n", strlen(&p)); 报错
	printf("%d\n", strlen(&p + 1)); 报错
	printf("%d\n", strlen(&p[0] + 1));*/
	cout << endl;
	cout << endl;

	//二维数组
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a[0] + 1));
	//printf("%d\n", sizeof(*(a[0] + 1)));报错
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(*(a + 1)));
	printf("%d\n", sizeof(&a[0] + 1));
	printf("%d\n", sizeof(*(&a[0] + 1)));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[3]));
	return 0;
}