#include <stdio.h>
#include "task3.h"
#define SIZE 256

int main()
{
	char buf[SIZE] = { 0 };
	char word[SIZE] = { 0 };

	puts("Enter some string: ");
	fgets(buf, SIZE, stdin);

	printf("max word = %s  length = %d \n", word, getMaxWord(buf, word));

	return 0;
}
