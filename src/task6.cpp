#include "task6.h"
#include <stdio.h>
#include<locale>

int getSumMaxMin(int arr[], int N)
{
	int sum = 0;
	int i = 0;
	int max = arr[0], maxInd = 0;
	int min = arr[0], minInd = 0;
	for (i = 0; i < N; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			maxInd = i;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			minInd = i;
		}
	}
	if (minInd < maxInd)
		for (i = minInd + 1; i < maxInd; i++)
		{
			sum += arr[i];
		}
	else
		for (i = maxInd + 1; i < minInd; i++)
		{
			sum += arr[i];
		}
	return sum;
}