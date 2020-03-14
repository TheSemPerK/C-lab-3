
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale>

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	char buf[255] = { 0 };
	printf("Ведите  строку \n");
	fgets(buf, 255, stdin); 
	int len = strlen(buf);
	int flag = 0;
	int j = 0;
	int i = 0;
	int count = 0;
	for (i = 0;i<len-1;)
	{
		while (buf[i] != ' ' && i < len - 1)
		{
			printf("%c", buf[i]);
			i++;
			j++;
			flag = 1;
		}
		if(flag!=0)
		printf(" - %d \n", j);
		if (flag == 1)
			count++;		
		while (buf[i] == ' '&&i<len-1)
		{
			i++;
			flag = 0;
			j = 0;
		}
	}	
	printf(" %d",  count);
	return 0;	
}