#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale>
#include <random>
#include <time.h>
#include "task5.h"
int main()
{
	const int N = 10;
	int sum = 0;
	int i = 0, j = 0;
	int arr[N] = { 0 };
	srand(time(0));
	for (i = 0; i < N; i++)
	{
		switch (rand() % 2)
		{
		case 0:
			arr[i] = rand() % 9;
			break;
		case 1:
			arr[i] = -rand() % 9;
			break;
		}
		printf("%d", arr[i]);
	}
	puts("\n");
	printf("%d", getSumInt(arr, N));
	return 0;
}