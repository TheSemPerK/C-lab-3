#include <locale>
#include "task4.h"
int getSum(char buf[])
{
	char line[4] = { 0 };
	int len = strlen(buf);
	int flag = 0;
	int j;
	int i;
	for (i = 0, j = 0; i < len - 1; i++)
	{
		if (isdigit(buf[i]))
		{
			if (j >= 3)
			{
				flag += atoi(buf);
				line[0] = 0;
				line[1] = 0;
				line[2] = 0;
				j = 0;
			}
			line[j] = buf[i];
			j++;
		}
		else if (j != 0)
		{
			flag += atoi(line);
			line[0] = 0;
			line[1] = 0;
			line[2] = 0;
			j = 0;
		}
	}
	if (j != 0)flag += atoi(line);
	return flag;
}