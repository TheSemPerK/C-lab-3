#include<stdio.h>
#include <string.h>

int main()
{
    char buf[256];
    int inWord = 0;
    int countWords = 0;
    int countSymbol = 0; 
    int i = 0;
    printf("enter a line\n");
    fgets(buf, 256, stdin);

    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = 0;

    while (buf[i])
    {
        if (buf[i] != ' ' && inWord == 0)
        {
            inWord = 1;
            countWords++;
            countSymbol++;
            putchar(buf[i]);
        }
        else if (buf[i] != ' ' && inWord == 1)
        {
            countSymbol++;
            putchar(buf[i]);
        }
        else if (buf[i] == ' ' && inWord == 1)
        {
            printf("-%d\n", countSymbol);
            inWord = 0;
            countSymbol = 0;
        }
        i++;
    }
    if (inWord == 1)
        printf("-%d\n", countSymbol);
    printf("line contains:%d words\n", countWords);
    return 0;
}