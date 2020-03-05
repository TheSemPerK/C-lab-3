#include<string.h>

int wordCount(char buf[])
{
	int count = 0;
	int inWord = 0;
	int i = 0;

	if(buf[strlen(buf)-1]=='\n')
        {
            buf[strlen(buf)-1]='\0';
        }
	for (i = 0; buf[i] != '\0'; i++)
        {
		if (buf[i] != ' ' && inWord == 0)
            {
                inWord = 1;
                count++;
            }
		else if (buf[i] == ' ' && inWord == 1)
            {
                inWord = 0;
            }
        }
    return count;
}
