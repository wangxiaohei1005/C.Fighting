#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	/**
	* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
	*
	* @param originData int整型 输入十进制数据
	* @return int整型
	*/
	void change2(int num)
	{
		vector<int> ive;
		int num = num;
		while (num != 0)
		{
			ive.push_back(num % 2);
			num = num / 2;
		}
		vector<int>::size_type sz = ive.size();
		vector<int> ive2;
		for (vector<int>::size_type index = 0; index != sz; ++index)
		{
			ive2.push_back(ive[sz - 1 - index]);
		}
		vector<int> item = ive2;
		

	}
	void display(int num)
	{

	}
	int ConvertData(int originData) {
		cin >> originData;
		change(originData);
	}
};

//class Solution {
//public:
//	/**
//	* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//	* 将输入矩阵顺时针旋转90度，返回旋转后的矩阵
//	* @param matrix int整型vector<vector<>> 输入矩阵
//	* @return int整型vector<vector<>>
//	*/
//	vector<vector<int> > RotateMatrix(vector<vector<int> >& matrix) {
//		
//		void rotation(int arr[row][col])
//		{
//			int tmp[col][row];
//			int ddt = row - 1;
//			for (int i = 0; i < row; i++, ddt--)
//			{
//				for (int j = 0; j < col; j++)
//				{
//					tmp[j][ddt] = arr[i][j];
//				}
//			}
//
//			for (int i = 0; i < col; i++)
//			{
//				for (int j = 0; j < row; j++)
//				{
//					arr[i][j] = tmp[i][j];
//				}
//			}
//		}
//	}
//};