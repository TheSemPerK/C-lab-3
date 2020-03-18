#include <stdio.h>
#include <locale>
#include <string.h>
#include "task1.h"

int wordCount(char buf[])
{
	int flag = 0;
	int i = 0;
	int count = 0;
	int len = strlen(buf);
	for (i = 0;i<len-1;)
	{
		while(buf[i] != ' '&& i<len-1)
		{
			i++;
			flag = 1;
		}
		if (flag == 1)
			count++;
		while (buf[i] == ' '&& i<len-1)
		{
			i++;
			flag = 0;
		}		
	}
	return count;
}