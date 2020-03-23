#include <stdio.h>
#include <string.h>

int getMaxWord(char buf[], char word[])
{
	int inWord = 0, countSymb = 0;
	int maxStart = 0, maxWord = 0;

	
	for (int i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			countSymb++;
		}
		else if (buf[i] != ' ' && inWord == 1)
		{
			countSymb++;
		}
		else if (buf[i] == ' ' && inWord == 1)
		{
			inWord = 0;
			countSymb = 0;
		}
		if (maxWord < countSymb)
		{
			maxWord = countSymb;
			maxStart = i - maxWord + 1;
		}
	}
	for (int j = 0; j < maxWord; j++)
	{
		word[j] = buf[maxStart + j];
		word[maxWord] = '\0';
	}
	return maxWord;
}
