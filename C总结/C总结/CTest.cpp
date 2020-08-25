#include <iostream>
using namespace std;


//#include <stdio.h>
//
//int addfun(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int(*add)(int, int) = addfun;
//	//��������
//	//int(*add)(int, int) = &addfun;
//
//	int result = (*add)(1, 2);
//	//��������,����ʹ�õ�һ��
//	//int result = add(1, 2);
//	cout << "ͨ������ָ����ú�������Ϊ��" << result << endl;
//	
//	result = addfun(1, 2);
//	cout << "ͨ��ֱ�ӵ��ú������м���Ϊ��" << result << endl;
//	return 0;
//}

//class bitset
//{
//public:
//	bitset(size_t bitCount)
//		: _bit((bitCount >> 5) + 1), _bitCount(bitCount)
//	{}
//	// ��which����λ��1
//	void set(size_t which)
//		// ��which����λ��0
//		void reset(size_t which)
//		// ���λͼ��which�Ƿ�Ϊ1
//		bool test(size_t which)
//		size_t size()const{ return _bitCount; }
//
//private:
//	vector<int> _bit;
//	size_t _bitCount;
//};

#include <vector>
class bitset
{
public:
	bitset(size_t bitCount)
	{
		_bitTable.resize((range >> 4) + 1);
	}

	void SetBit(size_t x)
	{
		size_t index = x >> 4;
		size_t num = x % 16;
		num *= 2;

		bool first = _bitTable[index] & (1 << num);
		bool second = _bitTable[index] & (1 << (num + 1));

		if (!(first && second))
		{
			_bitTable[index] += (1 << num);
		}
	}

	bool TestBit(size_t x)
	{
		size_t index = x >> 4;
		size_t num = x % 16;
		num *= 2;

		return (_bitTable[index] >> num) & 0x03;
	}

private:
	vector<int> _bitTable;
	size_t _bitTable;
};