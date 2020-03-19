#include "task3.h"
#include <stdio.h>
#include <string.h>
#include<locale>
int getMaxWord(char buf[], char word[])
{
	int len = strlen(buf);
	int flag = 0;
	int max = 0;
	int j = 0;
	int i = 0;
	int count = 0;
	for (i = 0; i < len - 1;)
	{
		while (buf[i] != ' ' && i < len - 1)
		{
			i++;
			j++;
		}
		if (max < j)
			max = j;
		flag = i - j;
		while (buf[i] == ' ' && i < len - 1)
		{
			i++;
			j = 0;
		}
	}
	j = 0;
	for (i = flag; i < flag + max; i++)
	{
		word[j] = buf[i];
		j++;
	}
	word[j] = '\0';
	puts(word);
	return (max);
}
