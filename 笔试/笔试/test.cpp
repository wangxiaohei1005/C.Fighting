//#include <iostream>
//using namespace std;
//
//typedef struct Queue
//{
//	int count;
//	int front;
//	int rear;
//	int mis;
//	int MAX_SIZE;
//}Queue;
//
//void Init(Queue* str)
//{
//	str->count = 0;
//	str->front = 0;
//	str->rear = -1;
//	str->mis = 0;
//}
//
//bool QueueEmpty(Queue* str)
//{
//	return str->count >= MAX_SIZE;
//}
//
//bool QueNULL(Queue* str)
//{
//	return str->count <= 0;
//}
//
//void P(Queue* str, int n)
//{
//	if (QueueEmpty(str))
//	{
//		str->mis + 1;
//		return;
//	}
//	else
//	{
//		str->count++;
//		str->rear = (str->rear + 1) % MAX_SIZE;
//		str->data[str->rear] = n;
//	}
//}
//
//void D(Queue* str)
//{
//	if (QueNULL(str))
//	{
//		str->mis + 1;
//		return;
//	}
//	else
//	{
//		str->count--;
//		str->front = (str->rear + 1) % MAX_SIZE;
//	}
//}
//
//int main()
//{
//	Queue* xiaohei = (Queue*)malloc(sizeof(Queue));
//	int MAX_SIZE;
//	cin >> MAX_SIZE;
//	return 0;
//}


//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//int jinzhi(int n, int k)
//{
//	int i, j[1001];
//	for (i = 0; i < 100; i++)
//	{
//		j[i] = n % k;
//		if (n == 0 || n == 1)
//			break;
//		n /= k;
//	}
//	if (i < k)
//	{
//		for (; i < k; i++)
//		{
//			j[i + 1] = 0;
//		}
//	}
//	for (i = k - 1; i >= 0; i--)
//		cout << j[i] << endl;
//	return 0;
//}
//
//int main()
//{
//	int n;//位数
//	int k;
//	cin >> n >> k;
//	for (int i = 0; i < n; i++)
//	{
//		jinzhi(n, k);
//	}
//}

//#include <vector>
//using namespace std;
//
//
//class Solution {
//public:
//	/**
//	* 合并数组
//	* @param arrayA int整型一维数组 数组A
//	* @param arrayALen int arrayA数组长度
//	* @param arrayB int整型一维数组 数组B
//	* @param arrayBLen int arrayB数组长度
//	* @return int整型vector
//	*/
//	vector<int> mergerArrays(int* arrayA, int arrayALen, int* arrayB, int arrayBLen) 
//	{
//		if (arrayA == NULL || arrayB == NULL)
//			return;
//		int newA = arrayALen - 1;
//		int newB = arrayBLen - 1;
//		int newlen = arrayALen + arrayBLen - 1;
//		while (arrayALen - 1 >= 0 && arrayBLen - 1 >= 0)
//		{
//			if ((arrayA[newA]))
//		}
//	}
//};
//
//int* countBits(int num, int* returnSize) {
//	unsigned int hold = 1;
//	if (num == 0)
//	{
//		return 0;
//	}
//	for (int i = 0; i < num; i++)
//	{
//		int count = 0;
//		while (hold)
//		{
//			if (i & hold)
//				count++;
//			else
//				hold = hold << 1;
//		}
//		returnSize[i] = count;
//	}
//	return returnSize;
//}
//
//
//#define P_IOA_Data (volatile unsigned int *)0x7000
//#define P_IOA_Dir (volatile unsigned int *)0x7002
//#define P_IOA_Attrib (volatile unsigned int *)0x7003
//
//unsigned int scan();//检测黑线函数定声明
//unsigned int num = 0;
//void delay();
//
//void init_1()//输入初始化
//{
//	[P_IOA_Dir] = 0x00f0;
//	[P_IOA_Attrib] = 0x00f0;
//	[P_IOA_Data] = 0x000f;
//}
////void init_2()//输出初始化
////{
////[P_IOA_Dir]=1;
////[P_IOA_Attrib]=1;
////[P_IOA_Data]=0;
////}
//void main()
//{
//	while (1)
//	{
//		void init_1();
//		num = scan();
//		//void init_2();
//		switch (num)
//		{
//		case 1:
//		{
//			while (1)
//			{
//				[P_IOA_Data] = 0x9f;
//				delay(500);
//				//     if([P_IOA_Data]==1)//传感器返回1，则终止转弯，下同
//				break;
//			}
//		}
//		case 2:
//		{
//			while (1)
//			{
//				[P_IOA_Data] = 0x9f;
//				delay(500);
//				break;
//			}
//		}
//		case 4:
//		{
//			while (1)
//			{
//				[P_IOA_Data] = 0x6f;
//				delay(500);
//				break;
//			}
//		}
//		case 5:
//		{
//			while (1)
//			{
//				[P_IOA_Data] = 0x6f;
//				delay(500);
//				break;
//			}
//		}
//		case 0:
//		{
//			while (1)
//			{
//				[P_IOA_Data] = 0x5f;
//				delay(500);
//				break;
//			}
//		}
//
//		}
//		[P_IOA_Data] = 0x5f;//直走
//		delay(500);
//
//	}
//}
//
//
//
//
//void delay(uint z)
//{
//	uint x, y;
//	for (x = z; x>0; x--)
//		for (y = 110; y>0; y--);
//}
//unsigned int scan()
//{
//	if (P_IOA_Data == 0xfe)
//	{
//		num = 1;
//		return num;
//	}
//	if (line_2 == 0xfd)
//	{
//		num = 2;
//		return num;
//	}
//
//	if (line_4 == 0xfb)
//	{
//		num = 4;
//		return num;
//	}
//	if (line_5 == 0xf7)
//	{
//		num = 5;
//		return num;
//	}
//	return 0;
//}




//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	int m, int n;
//	cin >> m >> n;
//	long sum[1000];
//	for (int i = i; i <= n; i++)
//	{
//		for (int j = m; j >= 1; j--)
//		{
//			sum[j] = sum[j] + sum[j - 1];
//		}
//	}
//	cout << sum[m];
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int leet(long nums)
//{
//	if (nums <= 1)
//		return 1;
//	else
//		return nums * leet(nums - 1);
//}
//
//int SumChoose(int m, int n)
//{
//	int tmp;
//	if (m < n)
//	{
//		tmp = m;
//		m = n;
//		n = tmp;
//	}
//	return leet(m) / (leet(n) * leet(m - n));
//}
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	int sum = SumChoose(m, n);
//	cout << sum << endl;
//	return 0;
//}

//
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//
//int main()
//{
//	str p1;
//	str p2;
//	int number = 0;
//	cin >> number;
//	
//
//	return 0;
//}





#include <iostream>
#include <string>
using namespace std;


int main()
{
	char* Dou;
	char* Sir;
	gets(Dou);
	gets(Sir);
	int count = 0;
	int number = (strlen(Sir) - 1);
	if (Dou == NULL || Sir == NULL)
		return 0;
	for (int i = 0,j = 0; i < number,j < (strlen(Dou)- 1); i++,j++)
	{
		char tmp = Sir[i];
		if (Dou[j] = Sir[i])
			count++;
		if (tmp == '*')
		{
			if (Dou[j] = Sir[i - 1])
			{
				while (Dou[j] = Sir[i - 1])
				{
					i = i - 1;
					count++;
				}
			}
			else if (Dou[j] != Sir[i - 1])
				break;
		}
	}
	cout << count << endl;
	return 0;
}