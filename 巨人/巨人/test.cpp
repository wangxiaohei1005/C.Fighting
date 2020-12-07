//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	/**
//	* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//	*
//	* @param originData int整型 输入十进制数据
//	* @return int整型
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
////	* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
////	* 将输入矩阵顺时针旋转90度，返回旋转后的矩阵
////	* @param matrix int整型vector<vector<>> 输入矩阵
////	* @return int整型vector<vector<>>
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
//	char *_str;//指向字符串的指针
//	size_t size;//保存当前字符串长度
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
//	if (this != &s){//检查自赋值
//		char *tmp = new char[strlen(s._str) + 1];//创建临时变量，获得分配的内存空间，复制原来的内容
//		strcpy(tmp, s._str);
//		delete[]_str;//释放原有内存
//		tmp = s._str;
//		size = strlen(s._str);
//	}
//	return *this;//返回本对象进行引用
//}

//拷贝构造函数也可利用此现代写法：
//String::String(const String&s)
//	:_str(NULL)//初始化
//{
//	String tmp(s._str);
//	swap(tmp._str, _str);
//}
//
//
//
////赋值运算符重载也可里引用此现代写法：
//String& String::operator=(String s)
//{
//	std::swap(_str, s._str);
//	return *this;
//}


class String
{
public:
	String(const char *str = NULL);//普通构造函数
	String(const String &other);//拷贝构造函数
	~String(void);
	String & operator = (const String &other);//赋值函数重载
private:
	char *m_data;//保存字符串对象
};



//普通构造函数
//String::String(const char *str = NULL)
//{
//	if (str == NULL){
//		m_data = new char[1];//对空字符串自动申请存放结束标志'\0'的，加分点：对m_data加NULL判断
//		*m_data = '\0';
//	}
//}

// String的析构函数  
String::~String(void)
{
	delete[] m_data; // 或delete m_data;  
}

//拷贝构造函数
String::String(const String &other)
{
	int length = strlen(other.m_data);
	m_data = new char[length + 1];
	strcpy(m_data, other.m_data);
}


String & String::operator=(const String &other)
{
	if (this == &other){
		return *this;//自赋值检查
	}
	if (m_data){
		delete m_data;//释放原有内存资源
	}
	int length = strlen(other.m_data);
	m_data = new char[length + 1];//对m_data进行加NULL判断
	strcpy(m_data, other.m_data);
	return *this;//返回原有对象引用
}
