#include "task3.h"
#include <stdio.h>
#include <string.h>
#include<locale>
int getMaxWord(char buf[], char word[])
{
	int len = strlen(buf);
	int flag = 0;
	int max = 0;
	int start = 0;
	int i = 0, j = 0;
	int count = 0;
	for (i = 0; i < len - 1;i++)
	{
		if (buf[i] != ' ' && flag==0)
		{
			flag = 1;
			count++;
		}
		else if (buf[i] != ' ' && flag == 1)
		{
			count++;
		}
		else if (buf[i] == ' ' && flag == 1)
		{
			flag = 0;
			count = 0;
		}
		if (max < count)
		{
			max = count;
			start = i - max + 1;
		}
	}
	
	for (int j = 0; j < max; j++)
	{
		word[j] = buf[start+j];
		word[max] = '\0';
	}
	
	puts(word);
	return (max);
}
