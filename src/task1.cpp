#include <string.h>
int wordCount(char buf[])
{
	int i = 0, end = 0;
	int a = 0;

	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	while (buf[i])
	{
		if (buf[i] != ' ' && a == 0)
		{
			a = 1;
			end++;
		}

		else if (buf[i] == ' ' && a == 1)
			a = 0;
		i++;
	}
	return end;
}

