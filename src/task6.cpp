#include <stdio.h>

int getSumMaxMin(int arr[], int N)
{
	int i = 0, j = N - 1;
	int sum = 0;
	int minNum = 0, maxNum = 0;
	int max = 0, min = 0;

	for (int a = 0; a < j; a++)
	{
		if (arr[a] < minNum)
		{
			minNum = arr[a];
			min = a;
		}
		if (arr[a] > maxNum)
		{
			maxNum = arr[a];
			max = a;
		}
	}
	if (min < max)
	{
		for (int b = min + 1; b < max; b++)
		{
			sum = sum + arr[b];
		}
	}
	else
	{
		for (int b = max + 1; b < min; b++)
		{
			sum = sum + arr[b];
		}

	}
	return sum;
}