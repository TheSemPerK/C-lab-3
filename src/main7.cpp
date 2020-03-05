#include <stdio.h>
#include <string.h>
#define N 256

int main()
{
	char str[N] = { 0 };
	char count[N] = { 0 };
	int i = 0;
	int max = 0;

	printf("Enter your line: ");
	fgets(str, N, stdin);

	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';

	while (str[i])
	{
		count[str[i]]++;
		i++;
	}

	for (int j = 0; j < N; j++)
	{
		if (count[j] > max)
			max = count[j];
	}

	for (max; max > 0; max--)
	{
		for (int j = 0; j < N; j++)
		{
			if (count[j] == max)
				printf("%c = %d \n", j, count[j]);
		}
	}

	return 0;
}
