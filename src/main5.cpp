#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"
#define N 10


int main()
{
    int arr[N];
    srand(time(NULL));
    int sum = 0;

    int count = 0;
    for(int i = 0; i < N; i++)
        {
            int count = rand() % 2;
            if(count == 1)
                {
                    arr[i] = rand() % 9 + 1;
                }
            else
                {
                    arr[i] = rand() % 9 - 9;
                }
        }
    sum = getSumInt(arr, N);
    for(int i = 0; i < N; i++)
        {
            printf("%d ", arr[i]);
        }
    printf("=>");
    printf(" %d", sum);
}
