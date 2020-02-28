#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getSumInt(int arr[], int N)
{
	int result = 0;
	int x, y;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] < 0)
		{
		    x = i;
			break;
		}
	}

	for (int j = N-1; j > 0; j--)
	{
		if (arr[j] > 0)
		{
		    y = j;
			break;
		}
	}

	for (int i = x + 1; i < y; i++)
	{
		result += arr[i];
	}

	return result;
}
