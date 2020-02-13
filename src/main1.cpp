#include<stdio.h>
#include<string.h>

int main()
{
    char buf[256] = { 0 };
    printf("enter a line\n");
    fgets(buf, 256, stdin);

    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = 0;
    printf("line contains: %d words\n", wordCount(buf));
    return 0;
}
   /* while (str[i])
    {
        if (str[i] != ' ' && inWord == 0)
        {
            inWord = 1;
            len++;
            printf("%c", str[i]);
        }
        else if (str[i] != ' ' && inWord == 1)
        {
            len++;
            printf("%c", str[i]);
        }
        else if (str[i] == ' ' && inWord == 1)
        {
            printf("-%d\n", len);
            len = 0;
            inWord = 0;
        }
        i++;
    }
    if (inWord == 1)
        printf("-%d\n", len);
    return 0;
}*/