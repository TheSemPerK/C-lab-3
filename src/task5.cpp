#include "task5.h"

int getSumInt(int arr[], int N)
{
	int i = 0, j = 0, sum = 0;
	for (i = 0; arr[i] >= 0; i++) {}
	for (j = N - 1; arr[j] <= 0; j--) {}
	i++;
	for (; i < j; i++)
	{
		sum += arr[i];
	}
	return sum;
}