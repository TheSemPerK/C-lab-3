#include <stdio.h>
#include <string.h>
#include "task4.h"

int getSum(char buf[])
{
    int i = 0;
    int value = 0;
    int sum = 0;
    while(buf[i])
    {
        if (buf[i] >= '0' && buf[i] <= '9')
		{
			value = value * 10 + (buf[i] - '0');
		}
        else
		{
			sum += value;
			value = 0;
		}
        i++;
    }
    return sum;
}
