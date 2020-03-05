int getSum(char buf[])
{
	int inNumber = 0, sum = 0, i = 0, bufer = 0; 
	while (buf[i]) 
	{
		if (47 > buf[i] || buf[i] > 58)
		{
			if (inNumber == 1)
			{
				sum = sum + bufer;
				bufer = 0;
				inNumber = 0;
			}
			i++;
		}
		else if ((47 < buf[i] < 58) && inNumber == 0)
		{
			inNumber = 1;
			bufer = bufer * 10 + (buf[i] - 48);
			i++;
		}
		else if ((47 < buf[i] < 58) && inNumber == 1)
		{
			bufer = bufer * 10 + (buf[i] - 48);
			if (bufer > 99999)
			{
				sum = sum + bufer;
				bufer = 0;
				inNumber = 0;
			}
			i++;
			if (!buf[i])
				sum = sum + bufer;
		}
		else
			i++;
	}
	return sum;
}