#include <stdlib.h>

int getSum(char buf[])
{
    int i = 0, j = 0, m = 0, s = 0, sum = 0, flag = 0, count = 0;
    char arr[3 + 1] = { '\0' };
    while (buf[i])
    {
        if (buf[i] >= '0' && buf[i] <= '9' && flag == 0)
        {
            flag = 1;
            arr[j] = buf[i];
            count++;
            j++;
        }
        else if (buf[i] >= '0' && buf[i] <= '9' && flag == 1)
        {
            if (count == 3)
            {
                s = 0;
                for (int k = 0; k < count; k++)
                    s = 10 * s + (arr[k] - '0');
                sum += s;
                for (int m = 0; m < count; m++)
                    arr[m] = '\0';
                j = 0;
                count = 0;
                continue;
            }
            arr[j] = buf[i];
            count++;
            j++;
        }
        else if (!(buf[i] >= '0' && buf[i] <= '9') && flag == 1)
        {
            flag = 0;
            j = 0;
            s = 0;
            for (int k = 0; k < count; k++)
                s = 10 * s + (arr[k] - '0');
            sum += s;
            for (int m = 0; m < count; m++)
                arr[m] = '\0';
            count = 0;
        }
        i++;
    }
    if (flag == 1)
    {
        s = 0;
        for (int k = 0; k < count; k++)
            s = 10 * s + (arr[k] - '0');
        sum += s;
    }
    return sum;
}