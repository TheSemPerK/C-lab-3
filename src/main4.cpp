#include <stdio.h>
#include <string.h>
#include "task4.h"
#define SIZE 256

int main()
{
    char buf[SIZE];

    printf("Enter some string and numbers :\n");
    fgets(buf, SIZE, stdin);

    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = '\0';

    printf("Sum : %d\n", getSum(buf));

    return 0;
}
