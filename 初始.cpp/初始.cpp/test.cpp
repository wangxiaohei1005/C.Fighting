//#include <iostream>
//using namespace std;//C++�������ж�������

//namespace N1
//{
//	int ret;
//	int tmp;
//	int Add(int left, int right)
//	{
//		return left;
//	}
//}
//
//using N1::ret;
//int main()
//{
//	printf("%d\n", ret);
//	return 0;
//}

//using namespace N1;


//int main()
//{
//	//�Զ�ʶ������
//	std :: cout << "hello world"<<std::endl;
//	int i = 1;
//	double d = 1.11;
//	std::cout << i << "" << d << std::endl;
//	return 0;
//}

//#include <iostream>
////��ȫչ��������
////using namespace std;
////���õĿ�����һЩ����������Ϳ���չ��
////�����г��õ��÷�
//using std:: cout;
//using std:: endl;
//
//int main()
//{
//	//�Զ�ʶ������
//	std :: cout << "hello world"<<std::endl;
//	int i = 1;
//	double d = 1.11;
//	std::cin >> i >> d;
//	std::cout << i << "" << d << std::endl;
//	return 0;
//}

#include <iostream>
using namespace std;

//ȱʡ����
//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//ȫȱʡ
void Func1(int a = 10, int b = 20, int c = 30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "b = " << c << endl;
}
//��ȱʡ�����������������ȱʡ
void Func2(int a, int b = 10, int c = 20)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "b = " << c << endl;
}
//�����Ǵ������ҵ���,�����α�������������δ���
//int main()
//{
//	/*Func1();
//	Func1(1);
//	Func1(1, 2);
//	Func1(1, 2, 3);*/
//	Func2(1);//δȱʡ���ֱ��붨��
//	Func2(1, 2);
//	Func2(1, 2, 3);
//	//cout << "hello world" << endl;
//	return 0;
//}

//�������أ���������ͬ������ͬ�����Ͳ�ͬ��˳��ͬ��������ͬ��
//�Է���ֵû��Ҫ��
//int Add(int left, int right)
//{
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	return left + right;
//}
//
//long Add(long left, long right)
//{
//	return left + right;
//}
//int Add()//�ղ���ҲΪ����������
//{
//
//}
//void Add()
//{
//}
//��ע�⣬ֻ�з���ֵ��ͬ���ɹ�������

//int main()
//{
//	Add(10, 20);
//	Add(10.0, 20.0);
//	Add(10L, 20L);//ʶ��Ϊlong
//	return 0;
//}

//����������
//1.ʲô�Ǻ������ء�����������ͬ������ͬ��������ѡ��
//2.C++�����֧�ֺ������صģ�ΪʲôC���Բ�֧�֣�

#include <iostream>
using namespace std;

//int main()
//{
//	int a = 1;
//	int& ra = a;//ra��a�����ã�Ҳ�����Ϊ����
//	//�������ַ��ͬ
//	int& b = a;//���ñ����ڶ���ʱ��ʼ��
//	return 0;
//}

int main()
{
	const int a = 0;
	const int& b = a;


	int c = 1;
	int& d = c;
	const int& e = c;
	return 0;
}