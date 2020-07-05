#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task5.h"

int main()
{
	int arr[255] = { 0 };
	time_t now;
	time(&now);
	srand(now);
	for (int i = 0; i < 255; i++)
	{
		if (rand() % 2 * -1)
			arr[i] = rand() % 100;
		else
			arr[i] = -rand() % 100;
	}
	printf("\nGenerate: %d\n", getSumInt(arr, 255));
	return 0;
}