#include <stdio.h>
#include <string.h>
#define SIZE 256

int main()
{
    char str[SIZE];
    int i = 0;
    int Flag = 0;
    int Count = 0;

    printf("Enter some text: \n");
    fgets(str, SIZE, stdin);

    if (str[strlen(str) - 1] == '\n')
        {
            str[strlen(str) - 1] = '\0';
        }

    while (str[i])
    {
        if (str[i] != ' ' && Flag == 0)
        {
            Count++;
            Flag = 1;
            putchar(str[i]);
        }
        else if (str[i] != ' ' && Flag == 1)
        {
            Count++;
            putchar(str[i]);
        }
        else if (str[i] == ' ' && Flag == 1)
        {
            Flag = 0;
            printf(" = %d\n", Count);
            Count = 0;
        }
        i++;
    }

    if (str[i] == '\0' && Flag == 1)
        printf(" = %d \n", Count);

    return 0;
}
