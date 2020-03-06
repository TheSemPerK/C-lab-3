#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int getSum(char buf[])
{
	int sum = 0, num = 0;
	int inNumber = 0, a = 0;
	char atoiNum[4] = { 0 };
	for (int i = 0; buf[i] != '\0'; i++)
	{
		if ((buf[i] >= '0' && buf[i] <= '9') && inNumber == 0)
		{
			inNumber = 1;
			atoiNum[a] = buf[i];
			a++;
		}
		else if ((buf[i] >= '0' && buf[i] <= '9') && inNumber == 1)
		{
			if (a == 3)
			{
				atoiNum[a] = '\0';
				num = atoi(atoiNum);
				sum = sum + num;
				a = 0;
			}
			atoiNum[a] = buf[i];
			a++;
		}
		else if ((buf[i] < '0' || buf[i] > '9') && inNumber == 1)
		{
			atoiNum[a] = '\0';
			num = atoi(atoiNum);
			sum = sum + num;
			a = 0;
			inNumber = 0;
		}
	}
		if (inNumber == 1)
		{
			num = atoi(atoiNum);
			sum = sum + num;
		}
	

	return sum;
}