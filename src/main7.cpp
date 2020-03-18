#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<locale>


int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	char line[255] = { 0 };
	int sym[255] = { 0 };
	char sym1[255] = { 0 };
	int count[255] = { 0 };
	int len = 0;
	int i = 0;
	int j = 0;
	printf("Ведите  строку \n");
	fgets(line, 255, stdin);
	len = strlen(line);
	for (i = 0; i < len - 1; i++)
	{
		sym[line[i]]++;
	}
	for (i = 0; i < 255; i++)
	{
		if (sym[i] != 0)
		{
			sym1[j] = i;
			count[j] = sym[i];
			j++;
		}
	}
	for(i=0;i<j;i++)
	{
		for (int k = 0; k < j - 1; k++)
		{
			if (count[k] < count[k + 1])
			{
				int tmp = count[k];
				count[k] = count[k + 1];
				count[k + 1] = tmp;
				tmp = sym1[k];
				sym1[k] = sym1[k + 1];
				sym1[k + 1] = tmp;				
			}
		}
		
	}
	for ( i = 0; i < j; i++)
	{
		printf("%c - %d\n", sym1[i], count[i]);
	}
	return 0;
}
