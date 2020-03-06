#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"
#define N 10


int main()
{
	int arr[N] = { 0 };
	time_t now;
	time(&now);
	srand(now);
	for (int i = 0; i < N; i++)
	{
		char a = rand() % 2;
		if (a == 0)
			arr[i] = 1 * rand() % 9;
		if (a == 1)
			arr[i] = -1 * rand() % 9;
		printf(" %d ", arr[i]);
	}		
	putchar('\n');
	printf("summ = %d", getSumInt(arr, N));
	return 0;
}