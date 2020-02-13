#include"task5.h"

int getSumInt(int arr[], int N)
{
    int sum = 0;
    int i = 0;
    int j = N - 1;
    while (i < j)
    {
        if (arr[i] < 0 && arr[j] > 0) 
        {
            for (int a = i; a < j; a++)
                sum += arr[a];
            break;
        }
        else if (arr[i] > 0 && arr[j] > 0) 
            i++;
        else if (arr[i] < 0 && arr[j] < 0) 
            j--;
        else  
        {
            i++;
            j--;
        }
    }
    return sum;
}