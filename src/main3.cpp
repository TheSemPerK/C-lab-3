#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale>
#include <string.h>
#include "task3.h"

int main()
{
	int max;
	setlocale(LC_ALL, "RUSSIAN");
	char buf[255] = { 0 };
	char word[255] = { 0 };
	printf("Ведите  строку \n");
	fgets(buf, 255, stdin);
	if (buf[strlen(buf - 1)] == '\n')
		buf[strlen(buf - 1)] = '\0';
	printf("%d", getMaxWord(buf,word) );
	return 0;
}