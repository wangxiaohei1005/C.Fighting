#include <iostream>

using namespace std;
//
//class String{
//
//};



//void test()
//{
//	const int a = 10;
//	int* pa = (int*)&a;
//	*pa = 100;
//	cout << a << endl;
//	cout << *pa << endl;
//}
//
//int   main()
//{
//	test();
//	return 0;
//}


//class Point{
//int x, y;
//
//public:
//Point(int a, int b) { x = a; y = b; }
//
//void MovePoint(int a, int b){ x += a; y += b; }
//
//void print()
//{
//	cout << "x=" << endl;
//}
//};
//
//void main()
//{
//
//	Point point1(10, 10);
//
//	point1.MovePoint(2, 2);
//
//	point1.print();
//
//}

//#include <iostream>
//
//using namespace std;
//class A
//{
//public:
//	int b;
//	//virtual int b; //���󣬲��ܰѳ�Ա��������Ϊ���е�
//	virtual void f()
//	{
//		cout << "����" << endl;
//	}
//	virtual void h(int i = 1, int j = 2)
//	{
//		cout << "����H" << endl;
//	}
//	~A(){
//		cout << "����A" << endl;
//	}
//};
//class B :public A
//{
//public:
//	int b;
//	void f(int i)//�����麯��f
//	{
//		cout << "paif()" << endl;
//	}
//	void f(){//�����������ض����麯��f
//		cout << "paixu" << endl;
//	}
//	void h(){ //�����麯��h�İ汾��ע�����ﲻ�ǶԻ����麯�����ض��塣
//		int b;
//		b = 5;
//		cout << "B��" << b << endl;
//	}
//	void h(int i, int j = 3){
//		int b;
//		b = j;
//		cout << "paixuH" << b << endl;
//	}//�������е��麯����Ĭ���β�ʱ�����������ض�������е��麯���İ汾��������ͬ�������βΣ�
//	//�βο�����Ĭ��ֵ��Ҳ����û�С�����β�������һ�������Ƕ��麯�������ء�
//	~B(){
//		cout << "����B" << endl;
//	}
//};
//int main(){
//	B m;
//	A *p = &m;
//	//p->b=3/����ָ��������Ļ���ָ�벻�ܵ����������еĳ�Ա��ֻ�ܵ��û����еĳ�Ա��
//	//���Ǹó�Ա���麯��
//	p->f(); W//�����������еĺ���f
//		//p->f(4);����ע�����ﲻ���ڵ����������д�һ���βε�f��������Ϊ��һ��������f���������麯����
//		//��ָ��������Ļ���ָ��ʱ��������������еĺ�������������������麯�������������û�ж������� //��һ���βε�f������������ʱ����ִ���
//
//		p->A::f(); W//���û�����麯��f�������������������ʹ��ָ��������Ļ���ָ����û�����麯��
//		p->h();//�����������е��麯���汾h����ָ��������Ļ���ָ������麯��ʱ�������е��麯����Ĭ��ֵ�����ﲻ�����á���Ȼ�������е��麯����Ҫһ��������
//
//	//�����ﲻ���������ǵ��õ�������Ĵ������������麯��h�������ǵ����������еĲ���������h����
//
//	m.h(); //�����������в���������h���������Ҫ�ö�������������д������βε�h�������ڱ����б���ʹ��һ��ʵ��ֵ��
//	m.h(1);//�����������д������βε�h�������ö�������������е��麯��ʱ������Ĭ��ֵ���ܻ����麯��Ĭ��ֵ��Ӱ��
//	m.A::h(1);// ���û����е��麯��h.
//}

//template<class iterator,class T>
//iterator find(iterator first, iterator last, const T& data)
//{
//	while (first != lasy)
//	{
//		if (*first != last)
//		{
//			return first;
//		}
//		++first;
//	}
//	return last;
//}


#if 0
int main()
{
	string s;
	size_t sz = s.capacity();
	for (size_t i = 0; i < 200; i++)
	{
		s.push_back('a');
		if (sz != s.capacity())
		{
			cout << sz << endl;
			sz = s.capacity();
		}
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>  
#include <stdlib.h>  
#include <pthread.h>//�̲߳�������ͷ�ļ�  

int main(void)
{
	size_t stack_size = 0; //��ջ��С����  
	pthread_attr_t attr; //�߳����Խṹ�����  

	//��ʼ���߳�����  
	int ret = pthread_attr_init(&attr);
	if (ret != 0)
	{
		perror("pthread_attr_init");
		return -1;
	}

	//��ȡ��ǰ���߳�ջ��С  
	ret = pthread_attr_getstacksize(&attr, &stack_size);
	if (ret != 0)
	{
		perror("pthread_attr_getstacksize");
		return -1;
	}

	//��ӡ��ջֵ  
	printf("stack_size = %dB, %dk\n", stack_size, stack_size / 1024);

	return 0;
}
#endif
/*
#include <vector>
#include <iostream>

using namespace std;
//���������
vector();//����һ���յ�vector
vector(size_t n, const T& data = T());//��n��ֵΪdata��Ԫ�ع���vector
vector(first, last);//��[first, kast)�����е�Ԫ�ع���vector
vector(const vector<t> &);//�������캯��
//C++11�����������Բ���{}�ķ�ʽ����
*/
int main()
{
	printf("%s, %5.3s\n", "computer", "computer");
	cout << (11 | 10) << endl;
	return 0;
}

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	// IO��OJ���ܻ��ж��������������������Ҫ������������������������
	int n;
	while (cin >> n)
	{
		long long sum = 0;
		vector<int> a; a.resize(3 * n);
		for (int i = 0; i < (3 * n); i++) {
			cin >> a[i];
		}
		/*
		����Ȼ��ȡ�±�Ϊ3n - 2��3n - 4 ��3n - 4... n+2��nλ�õ�Ԫ���ۼӼ��ɣ�
		�൱�±�Ϊ[0,n-1]��n������ÿ�������ߵ�����ʣ�µ�2����������Ϊһ�飬
		���ֵ�����ұߵ������δ�����м�ֵ��������ǰ�����δ��ֵ������
		*/
		std::sort(a.begin(), a.end());
		for (int i = n; i <= 3 * n - 2; i += 2)
			���ؿƼ�����
		{
			sum += a[i];
		}
		cout << sum << endl;
	}
}