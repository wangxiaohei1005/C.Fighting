//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	/**
//	* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//	*
//	* @param originData int���� ����ʮ��������
//	* @return int����
//	*/
//	void change2(int num)
//	{
//		vector<int> ive;
//		int num = num;
//		while (num != 0)
//		{
//			ive.push_back(num % 2);
//			num = num / 2;
//		}
//		vector<int>::size_type sz = ive.size();
//		vector<int> ive2;
//		for (vector<int>::size_type index = 0; index != sz; ++index)
//		{
//			ive2.push_back(ive[sz - 1 - index]);
//		}
//		vector<int> item = ive2;
//		
//
//	}
//	void display(int num)
//	{
//
//	}
//	int ConvertData(int originData) {
//		cin >> originData;
//		change(originData);
//	}
//};
//
////class Solution {
////public:
////	/**
////	* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
////	* ���������˳ʱ����ת90�ȣ�������ת��ľ���
////	* @param matrix int����vector<vector<>> �������
////	* @return int����vector<vector<>>
////	*/
////	vector<vector<int> > RotateMatrix(vector<vector<int> >& matrix) {
////		
////		void rotation(int arr[row][col])
////		{
////			int tmp[col][row];
////			int ddt = row - 1;
////			for (int i = 0; i < row; i++, ddt--)
////			{
////				for (int j = 0; j < col; j++)
////				{
////					tmp[j][ddt] = arr[i][j];
////				}
////			}
////
////			for (int i = 0; i < col; i++)
////			{
////				for (int j = 0; j < row; j++)
////				{
////					arr[i][j] = tmp[i][j];
////				}
////			}
////		}
////	}
////};


#define _CRT_SECURE_NO_WARNINGS
#include <string>

using namespace std;
//
//class String{
//public:
//	String(char *str = "")
//	{
//		if (str == NULL){
//			_str = new char[1];;
//			*_str = '\0';
//			size = 0;
//		}
//		else{
//			int length = strlen(str);
//			_str = new char[length + 1];
//			strcpy(_str, str);
//			size = length;
//		}
//	}
//	~String()
//	{
//		if (NULL != _str)
//		{
//			delete[] _str;
//		}
//	}
//private:
//	char *_str;//ָ���ַ�����ָ��
//	size_t size;//���浱ǰ�ַ�������
//};
//
//String::String(const String& s)
//	:_str(new char[strlen(s._str) + 1])
//{
//	strcpy(_str, s._str);
//	size = strlen(s._str);
//}


//String& String::operator=(const String& s)
//{
//	if (this != &s){
//		delete[] _str;
//		_str = new char[strlen(s._str) + 1];
//		strcpy(_str, s._str);
//		size = strlen(s._str);
//	}
//	return *this;
//}
//
//
//String& String::operator=(const String& s)
//{
//	if (this != &s){//����Ը�ֵ
//		char *tmp = new char[strlen(s._str) + 1];//������ʱ��������÷�����ڴ�ռ䣬����ԭ��������
//		strcpy(tmp, s._str);
//		delete[]_str;//�ͷ�ԭ���ڴ�
//		tmp = s._str;
//		size = strlen(s._str);
//	}
//	return *this;//���ر������������
//}

//�������캯��Ҳ�����ô��ִ�д����
//String::String(const String&s)
//	:_str(NULL)//��ʼ��
//{
//	String tmp(s._str);
//	swap(tmp._str, _str);
//}
//
//
//
////��ֵ���������Ҳ�������ô��ִ�д����
//String& String::operator=(String s)
//{
//	std::swap(_str, s._str);
//	return *this;
//}


class String
{
public:
	String(const char *str = NULL);//��ͨ���캯��
	String(const String &other);//�������캯��
	~String(void);
	String & operator = (const String &other);//��ֵ��������
private:
	char *m_data;//�����ַ�������
};



//��ͨ���캯��
//String::String(const char *str = NULL)
//{
//	if (str == NULL){
//		m_data = new char[1];//�Կ��ַ����Զ������Ž�����־'\0'�ģ��ӷֵ㣺��m_data��NULL�ж�
//		*m_data = '\0';
//	}
//}

// String����������  
String::~String(void)
{
	delete[] m_data; // ��delete m_data;  
}

//�������캯��
String::String(const String &other)
{
	int length = strlen(other.m_data);
	m_data = new char[length + 1];
	strcpy(m_data, other.m_data);
}


String & String::operator=(const String &other)
{
	if (this == &other){
		return *this;//�Ը�ֵ���
	}
	if (m_data){
		delete m_data;//�ͷ�ԭ���ڴ���Դ
	}
	int length = strlen(other.m_data);
	m_data = new char[length + 1];//��m_data���м�NULL�ж�
	strcpy(m_data, other.m_data);
	return *this;//����ԭ�ж�������
}
