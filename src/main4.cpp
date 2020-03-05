#include "task4.h"
#include <stdio.h>
#include <string.h>
int main()
{
	char str[256] = { '\0' };
	printf("Enter the string:\n");
	fgets(str, 256, stdin);
	printf("Sum of numbers in the string: %d", getSum(str));
	return 0;
}