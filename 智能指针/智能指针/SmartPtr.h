
class wxh
{
	int *ptr;
public:
	shared_ptr(T* ptr)
		:ptr(ptr)
		, pcount(new int(1))
	{}

	shared_ptr(shared_ptr<T> & sp)
		:_otr(sp._ptr)
		, _pcount(sp._pcount)
	{
		++(*_pcount);
	}

	shared_ptr operator =
	{
		if (_ptr != sp._ptr)
		{
			
		}
	}


private:
};

#include<vector>
#include<list>
#include<forward_list>
#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
//
//int main()
//{
//	vector<int> v1 = { 1, 2, 3, 4, 5 };
//	vector<int> v2 = { 10, 20, 30, 40, 50 };
//	swap(v1, v2); 
//	// C++98�в����飬��Ϊ�漰�������������vector�����������Ľ������������������
//	v1.swap(v2);  
//	// C++98���Ƽ������
//
//	// C++11,�����
//	swap(v1, v2);
//
//
//	return 0;
//}


int main()
{
	vector<int> v = { 1, 2, 3, 4, 5 }; // ���
	list<int> l = { 1, 2, 3, 4, 5 };   // ˫�� 
	forward_list<int> fl = { 1, 2, 3, 4, 5 }; // ����

	reverse(v.begin(), v.end());
	reverse(l.begin(), l.end());
	//reverse(fl.begin(), fl.end());

	sort(v.begin(), v.end());
	//sort(l.begin(),  l.end());


	// ����ָ����Ե�������������ã���Ϊ���Ǿ߱���ͬ�Ĺ��ܡ�
	// ��������ʵstring/vector�ĵ���������Ҳ�����������
	int a[] = { 1, 2, 3, 5, 1, 5 };
	sort(a, a + sizeof(a) / sizeof(int));

	return 0;
}

//int main()
//{
//	vector<int> v = { 5, 1, 3, 4, 2, 2};
//	// ȫ����Ҫ����������
//	sort(v.begin(), v.end());
//
//	// Ҫ������
//	do
//	{
//		for (auto e : v)
//			cout << e << " ";
//		cout << endl;
//	} while (next_permutation(v.begin(), v.end()));
//
//
//	//sort(v.begin(), v.end(), greater<int>());
//
//	//// Ҫ����
//	//do
//	//{
//	//	for (auto e : v)
//	//		cout << e << " ";
//	//	cout << endl;
//	//} while (prev_permutation(v.begin(), v.end()));
//
//	return 0;
//}