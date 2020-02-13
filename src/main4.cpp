#include"task4.h"

int main()
{
    char buf[256] = { 0 };
    int b = 0;
    printf("enter a line\n");
    fgets(buf, 256, stdin);
    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = '\0';
    printf("SUM=%d", getSum(buf));
    return 0;
}