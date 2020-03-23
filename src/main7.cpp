#include <stdio.h>
#include <string.h>

int main()
{
	char buf[256] = { 0 };
	char count[256] = { 0 };
	int max = 0;

	printf("Enter any numbers\n");
	fgets(buf, 256, stdin);
	if (buf[strlen(buf - 1)] == '\n')
		buf[strlen(buf - 1)] = '\0';
	for (int i = 0; buf[i] != '\0'; i++)
	{
		count[buf[i]]++;
		i++;
	}
	for (int j = 0; j < 256; j++)
	{
		if (count[j] > max)
			max = count[j];
	}
	for (max; max > 0; max--)
	{
		for (int j = 0; j < 256; j++)
		{
			if (count[j] == max)
				printf("%c - %d\n", j, count[j]);
		}

	}



	return 0;
}