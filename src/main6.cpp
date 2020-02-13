#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task6.h"
#define W 256

int main()
{
	int arr[W] = { 0 };
	time_t now;
	time(&now);
	srand(now);
	for (int i = 0; i < W; i++)
	{
		if (rand() % 2 * -1)
			arr[i] = rand() % 100;
		else
			arr[i] = -rand() % 100;
	}
	printf("\nGenerate: %d\n", getSumMaxMin(arr, W));
	return 0;
}