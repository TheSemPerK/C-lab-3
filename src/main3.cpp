#include <stdio.h>
#include <string.h>
#include "task3.h"

int main()
{
	char str[256] = { 0 }, word[256] = { 0 };
	printf("Enter line: ");
	fgets(str, 255, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	int maxLetters = getMaxWord(str, word);
	printf("\nThe longest word - %s, it is length - %d\n", word, maxLetters);
	return 0;
}
