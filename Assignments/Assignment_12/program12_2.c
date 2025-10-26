#include <stdio.h>

int count_factors(int number)
{
    int iCnt = 0;
    int iFrequency = 0;
    if(number < 0)
    {
        number = -number;
    }

    for(iCnt = 1; iCnt <= number; iCnt++)
    {
        if((number % iCnt) == 0)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int  number = 0; 

    printf("Enter number : \n");
    scanf("%d", &number);

    printf("%d\n", count_factors(number));

    return 0;
}

// Time complexity : O(n)