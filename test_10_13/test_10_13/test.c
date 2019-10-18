#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Empty(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//
//	}
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[] = { 3, 2, 1, 3, 5, 6, 10, 23, 25 };
//	int sz = (sizeof(arr) / sizeof(arr[0]));
//	Print(arr, sz);
//	Init(arr, sz);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	Empty(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

//int my_strlen(char* str)//abcdef\0
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
////º¯ÊýµÄÄæÖÃ
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	char tmp = *str;
//	*str = *(str+len-1);
//	*(str+len-1) = '\0';
//	if(my_strlen(str+1) > 1)
//		reverse_string(str+1);//++str
//	*(str+len-1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "hello";
//	reverse_string(arr);
//	printf("%s\n", arr);//olleh
//	return 0;
//}

//double Pow(int n, int k)
//{
//	if(k==0)
//		return 1;
//	else if(k>0)
//		return n*Pow(n, k-1);
//	else
//		return 1.0/(Pow(n, -k));
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	double ret = 0;
//	scanf("%d%d", &n, &k);
//	ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}