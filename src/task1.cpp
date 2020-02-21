int wordCount(char str[])
{
	int inWord = 0, count = 0, i = 0;
	while (str[i]) 
	{
		if (str[i] == ' ')
		{
			inWord = 0;
			i++;
		}
		else if (str[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			count++;
			i++;
		}
		else if (str[i] != ' ' && inWord == 1)
			i++;
	}
	return count;
}
