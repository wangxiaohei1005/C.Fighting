#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	/**
	* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
	*
	* @param originData int���� ����ʮ��������
	* @return int����
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
//	* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//	* ���������˳ʱ����ת90�ȣ�������ת��ľ���
//	* @param matrix int����vector<vector<>> �������
//	* @return int����vector<vector<>>
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