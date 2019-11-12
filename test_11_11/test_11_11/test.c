#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <malloc.h>

//void reverseArr(int* arr, int sz)
//{
//	//奇偶元素交换
//	int start = 0;
//	int end = sz - 1;
//
//	while (start < end)
//	{
//		while (start < end && arr[start] % 2 != 0)
//			++start;
//		while (start < end && arr[end] % 2 == 0)
//			--end;
//		int tmp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = tmp;
//		++start;
//		--end;
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int* arr = (int*) malloc(sizeof(int)* n);
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", &arr[i]);
//	}
//	reverseArr(arr, n);
//	for (int i = 0; i < n; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

void find(int** arr, int row, int col, int key, int* px, int* py)
{
	//左下角开始查找  (row - 1, 0)
	int startx = row - 1;
	int starty = 0;

	while (startx >= 0 && starty < col)
	if (arr[startx][starty] == key)
	{
		*px = startx;
		*py = starty;
		return;
	}
	else if (arr[startx][starty] > key)
	{
		--startx;
	}
	else
	{
		++starty;
	}

	*px = -1;
	*py = -1;
	return;
}

//右上角开始
int find_r(int** arr, int row, int col,
	int key, int* px, int* py, int curx, int cury)
{
	printf("%d %d\n", curx, cury);
	//判断位置是否越界
	if (curx >= row || cury < 0)
		return -1;
	if (arr[curx][cury] == key)
	{
		*px = curx;
		*py = cury;
		return 1;
	}
	else if (arr[curx][cury] > key)
	{
		return find_r(arr, row, col, key, px, py, curx, cury - 1);
	}
	else
	{
		return find_r(arr, row, col, key, px, py, curx + 1, cury);
	}
}

int main()
{
	int row, col, key;
	int px = -1, py = -1;
	printf("row col \n");
	scanf("%d %d", &row, &col);
	printf("input element\n");
	int** arr = (int**)malloc(sizeof(int*)* row);
	for (int i = 0; i < row; ++i)
	{
		arr[i] = (int*)malloc(sizeof(int)* col);
		for (int j = 0; j < col; ++j)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("key\n");
	scanf("%d", &key);
	find(arr, row, col, key, &px, &py);
	printf("%d %d\n", px, py);
	printf("find_r\n");
	//递归，右上角开始
	find_r(arr, row, col, key, &px, &py, 0, col - 1);
	return 0;
}