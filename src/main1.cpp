#include<stdio.h>
#include<string.h>
#include"task1.h"
#define SIZE 256

int main()
{
    char buf[SIZE]={ 0 };
    printf("Enter some string: \n");
    fgets(buf, SIZE, stdin);
    wordCount(buf);
    printf("%d\n", wordCount(buf));

    return 0;
}
