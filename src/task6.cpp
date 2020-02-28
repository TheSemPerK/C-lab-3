int getSumMaxMin(int arr[],int N)
{
    int max = 0, min;
    int result = 0;
    int CountMax, CountMin;

    for(int i = 0; i < N; i++)
        {
            if(arr[i] < min)
                {
                    min = arr[i];
                    CountMin = i;
                }
            else if(arr[i] > max)
                {
                    max = arr[i];
                    CountMax = i;
                }
        }
        if(CountMax> CountMin)
            {
                for(int i = CountMin + 1; i < CountMax; i++)
                    {
                        result += arr[i];
                    }
            }
        else
            {
                for(int i = CountMax + 1; i < CountMin; i++)
                    {
                        result += arr[i];
                    }
            }

    return result;
}
