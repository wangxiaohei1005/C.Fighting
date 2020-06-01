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
#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;
int main()
{
	vector<int> c;
	long long nums;
	cin >> nums;
	c.reserve(3 * nums);
	for (size_t i = 0; i < 3 * nums; ++i)
	{
		int t;
		cin >> t;
		c.push_back(t);
	}
	sort(c.begin(), c.end());//排序  
	long long tmp = 0, j = 0;
	for (int i = (3 * nums) - 2; i >= 0; i -= 2) //1 2 5 5 7 8，每次取 7 5 即可  
	{
		if (j < nums)
		{
			tmp += c[i];
			++j;
		}
		else
			break;
	}
	cout << tmp << endl;
	return 0;
}