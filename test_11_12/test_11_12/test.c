#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <malloc.h>

void ReverseArr(int* arr, int sz)
{
	int start = 0;
	int end = sz - 1;
	while (start < end)
	{
		while (start < end && arr[start] % 2 != 0)
		{
			++start;
		}
		while (start < end && arr[end] % 2 == 0)
		{
			--end;
		}
		int tmp = arr[start];
		arr[start] = arr[end];
		arr[end] = tmp;
		++start;
		--end;
	}
}
//int main()
//{
//	int input;
//	printf("请输入你需要排查的数字个数：\n");
//	scanf("%d", &input);
//	int* arr = (int*) malloc (sizeof(int)* input);
//	printf("请输入你所需排查的数字：\n");
//	for (int i = 0; i < input; ++i)
//	{
//		scanf("%d", &arr[i]);
//	}
//	ReverseArr(arr, input);
//	for (int i = 0; i < input; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

void Find(int** arr, int row, int col, int key, int* px, int* py)
{
	int startx = row - 1;
	int starty = 0;

	while (startx >= 0 && starty < col)
	{
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
	}
	*px = -1;
	*py = -1;
	return;
}

int main()
{
	int row, col;
	int px, py;
	int key;
	printf("row,col\n");
	scanf("%d %d", &row, &col);
	printf("intput:\n");
	int** arr = (int**)malloc(sizeof(int*)* row);
	for (int i = 0; i < row; ++i)
	{
		arr[i] = (int*)malloc(sizeof(int)* col);
		for (int j = 0; j < col; ++j)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("input key;\n");
	scanf("%d", &key);
	Find(arr, row, col, key, &px, &py);
	printf("%d %d\n", px, py);
	return 0;
}