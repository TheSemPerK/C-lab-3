#include <stdio.h>
#include <string.h>


int wordCount(char buf[])
{
	int inWord = 0, count = 0;
	int i = 0;
	//for (int i = 0; buf[i] != '\0'; i++)
	while(buf[i])
	{
		if (buf[i] != ' ' && inWord == 0)
		{
			count++;
			inWord = 1;
		}
		else if (buf[i] == ' ' && inWord == 1)
			inWord = 0;
		i++;
	}
	return count;
}