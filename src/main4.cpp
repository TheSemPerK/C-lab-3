#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale>
#include "task4.h"
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	char buf[255] = { 0 };	
	printf("Ведите  строку \n");
	fgets(buf, 255, stdin); 	
	printf("%d", getSum(buf));

	return 0;
}