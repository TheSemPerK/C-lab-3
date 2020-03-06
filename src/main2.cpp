#include <stdio.h>
#include <string.h>


int main()
{
	char buf[256] = { 0 };
	int inWord = 0, countSymb = 0, countWord = 0;

	printf("Enter any words\n");
	fgets(buf, 256, stdin);
	if (buf[strlen(buf - 1)] == '\n')
		buf[strlen(buf - 1)] = '\0';
	for (int i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			countSymb++;
			countWord++;
			putchar(buf[i]);
		}
		else if (buf[i] != ' ' && inWord == 1)
		{
			countSymb++;
			putchar(buf[i]);
		}
		else if (buf[i] == ' ' && inWord == 1)
		{
			printf(" %d\n", countSymb);
			inWord = 0;
			countSymb = 0;
		}
	}
	if (inWord == 1)
		printf(" %d\n", countSymb);
	printf("There are %d words\n", countWord);
	return 0;
}