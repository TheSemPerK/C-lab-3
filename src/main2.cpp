#include <stdio.h>
#include <string.h>

int main()
{
	char str[255] = { 0 };
	printf("Enter line: ");
	fgets(str, 255, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	int inWord = 0, i = 0, k = 0, count = 0;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			if (inWord == 1)
			{
				inWord = 0;
				printf(" - Word contains %d letters\n", k);
				k = 0;
			}
			i++;
		}
		else if (str[i] != ' ' && inWord == 0)
		{
			printf("%c", str[i]);
			inWord = 1;
			count++;
			k++;
			i++;
		}
		else if (str[i] != ' ' && inWord == 1)
		{
			printf("%c", str[i]);
			i++;
			k++;
			if (!str[i])
				printf(" - Word contains %d letters\n", k);
		}
	}
	printf("\nTotal words - %d \n", count);
	return 0;
}