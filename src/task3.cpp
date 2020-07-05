#include <stdio.h>
#include <string.h>
#include "task3.h"

int getMaxWord(char buf[], char word[])
{
	int inWord = 0, i = 0, j = 0, position = 0, maxLetters = 0, count = 0;
	while (buf[i])
	{
		if (buf[i] == ' ')
		{
			if (maxLetters < count)
			{
				maxLetters = count;
				for (j = 0; position < i; position++, j++)
				{
					word[j] = buf[position];
				}
				count = 0;
			}
			count = 0;
			inWord = 0;
			i++;
		}
		else if (buf[i] != ' ' && inWord == 0)
		{
			position = i;
			inWord = 1;
			count++;
			i++;
		}
		else if (buf[i] != ' ' && inWord == 1)
		{
			i++;
			count++;
			if (!buf[i])
			{
				if (maxLetters < count)
				{
					maxLetters = count;
					for (j = 0; position < i; position++, j++)
					{
						word[j] = buf[position];
					}
					count = 0;
				}
			}
		}
	}
	return maxLetters;
}