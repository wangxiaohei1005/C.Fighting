//#include <stdio.h>
//
//int Student(char student[])
//{
//	int number = 62;
//	int average;
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < number; i++)
//	{
//		sum = sum + student[i];
//		average = sum / number;
//	}
//	return average;
//}
//
//int main()
//{
//	char student[62];
//	int i = 0;
//	for (i = 0; i < 62; i++)
//	{
//		scanf("%d", &student[i]);
//	}
//	int tmp = Student(student);
//	printf("%d\n", tmp);
//}

//#include <stdio.h>
//
//int main()
//{
//	char a[3][2], b[2][3];
//	for (int i = 0; i <= 3; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			scanf("%d", &a[i][j]);
//			b[j][i] = a[i][j];
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int mark;
//	char end;
//	scanf("%d", &mark);
//	if (mark >= 90)
//		end = 'A';
//	else if (mark >= 60 && mark <= 89)
//		end = 'B';
//	else
//		end = 'C';
//	printf("%c", end);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int lifang = 0;
//	int pingfang = 0;
//	pingfang = (a*a) + (b*b);
//	lifang = (a*a*a) + (b*b*b);
//	printf("平方和为：%d  立方和为： %d\n", pingfang, lifang);
//	return 0;
//}

//#include <stdio.h>
//void average(int m[20], int n[25])
//{
//	int sumA = 0, sumB = 0;
//	for (int i = 0; i < 20; i++)
//	{
//		sumA = sumA + m[i];
//	}
//	for (int j = 0; j < 25; j++)
//	{
//		sumB = sumB + n[j];
//	}
//	int averageA = sumA / 20;
//	int averageB = sumB / 25;
//}
//
//int main()
//{
//	int one[20], two[25];
//	for (int i = 0; i < 20; i++)
//	{
//		scanf("%d", one[i]);
//	}
//	for (int i = 0; i < 25; i++)
//	{
//		scanf("%d", two[i]);
//	}
//	average(one, two);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int mark[20];
//	int sum = 0;
//	int average = 0;//平均成绩
//	int a;
//	int end[20];//排序后的数组
//	for (int i = 0; i < 20; i++)
//	{
//		scanf("%d", &a);
//		mark[i] = a;
//		sum = sum + mark[i];
//		end[i] = mark[i];
//	}
//	average = sum / 20;
//	printf("平均数是：%d\n", average);
//	int min = 0;
//	for (int i = 0; i < 20; i++)    
//	{
//		for (int j = 0; j < 20 - i; j++)    
//		{
//			if (end[j]>end[j + 1])
//			{
//				int t = end[j];
//				end[j] = end[j + 1];
//				end[j + 1] = t;
//			}
//		}
//	}
//	printf("排序后的顺序是：\n");
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d", end[i]);
//	}
//	printf("\n");
//	printf("第19位同学的成绩是：%d", end[18]);
//	return 0;
//}

//#include "stm32f10x.h"
//
//void LED_GPIO_Init(void) 
//{
//
//	GPIO_InitTypeDef GPIO;
//
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOF, ENABLE);
//
//	GPIO.GPIO_Pin  = GPIO_Pin_6;
//
//	GPIO.GPIO_Mode  = GPIO_Mode_Out_PP;
//
//	GPIO.GPIO_Speed  = GPIO_Speed_50MHz;
//
//	GPIO_Init(GPIOF, &GPIO);
//
//	GPIO_Write(GPIOF, 0XFFFF);
//
//}
//
//void delay(uint32_t counter)
//{
//
//	while (counter --);
//
//}
//
//int main (void)
//{
//
//	int i, b;
//
//	LED_GPIO_Init();
//
//	b  = 20000;
//
//	while (1) 
//	{
//
//		for (i  = 0; i  < b; i ++) 
//		{
//
//			GPIO_ResetBits(GPIOF, GPIO_Pin_6);
//
//			delay(b  - i);
//
//			GPIO_SetBits(GPIOF, GPIO_Pin_6);
//
//			delay(i);
//
//		}
//
//		for (i  = 0; i  < b; i++) ///利用循环，将次数控制并传入写入的函数中
//		{
//
//			GPIO_ResetBits(GPIOF, GPIO_Pin_6);
//
//			delay(i);
//
//			GPIO_SetBits(GPIOF, GPIO_Pin_6);
//
//			delay(b  - i);
//
//		}
//
//		delay(100);
//
//	}
//
//}


public class HashSearch {

	public static void main(String[] args) {
		//“除法取余法”  
		int hashLength = 13;

		int[] array = { 13, 29, 27, 28, 26, 30, 38 };

		//哈希表长度  
		int[] hash = new int[hashLength];
		//创建hash  
		for (int i = 0; i < array.length; i++)
		{
			insertHash(hash, hashLength, array[i]);
		}

		int result = searchHash(hash, hashLength, 29);

		if (result != -1)
			System.out.println("已经在数组中找到，索引位置为：" + result);
		else
			System.out.println("没有此原始");
	}


	public static int searchHash(int[] hash, int hashLength, int key) {
		// 哈希函数  
		int hashAddress = key % hashLength;

		// 指定hashAdrress对应值存在但不是关键值，则用开放寻址法解决  
		while (hash[hashAddress] != 0 && hash[hashAddress] != key) {
			hashAddress = (++hashAddress) % hashLength;
		}

		// 查找到了开放单元，表示查找失败  
		if (hash[hashAddress] == 0)
			return -1;
		return hashAddress;

	}


	public static void insertHash(int[] hash, int hashLength, int data) {
	
		int hashAddress = data % hashLength;

		 
		while (hash[hashAddress] != 0) {
			
			hashAddress = (++hashAddress) % hashLength;
		}
 
		hash[hashAddress] = data;
	}
}