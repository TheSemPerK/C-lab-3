#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"

#define N 10
int main()
{
    int arr[N];
    srand(time(NULL));
    int sum = 0;
    for(int i = 0; i < N; i++)
        {
            int x = rand() % 2;
            if (x == 1)
                {
                    arr[i] = rand() % 9 + 1;
                }
            else
                {
                    arr[i] = rand() % 9 - 9;
                }
        }
    for(int i = 0; i <N; i++)
        {
            printf("%d ", arr[i]);
        }
    sum = getSumMaxMin(arr,N);
    printf("=> ");
    printf("%d", sum);
}
