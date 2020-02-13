#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task5.h"
#define Q 256

int main()
{
	int arr[Q] = { 0 };
	time_t now;
	time(&now);
	srand(now);
	for (int i = 0; i < Q; i++)
	{
		if (rand() % 2 * -1)
			arr[i] = rand() % 100;
		else
			arr[i] = -rand() % 100;
	}
	printf("\nGenerate: %d\n", getSumInt(arr, Q));
	return 0;
}