#include"task5.h"
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
            arr[i] = 1 + rand() % 9; 
        if (a == 1)
            arr[i] = -1 * (1 + rand() % 9); 
    }
    for (int j = 0; j < N; j++)
        printf("%d ", arr[j]);
    putchar('\n');
    printf("sum = %d", getSumInt(arr, N));
    return 0;
}