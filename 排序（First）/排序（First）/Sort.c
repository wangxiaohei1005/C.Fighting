

void InsertSort(int* a, int n)
{
	int i = 0;
	int j = 0;
	int tmp;
	for (i = 1; i <= n; i++)
	{
		for (j = 0; i < i; j++)
		{
			if (a[j] < a[i])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}