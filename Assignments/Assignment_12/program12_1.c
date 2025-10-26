#include <stdio.h>

void print_factors(int number)
{
    int iCnt = 0;
    if(number < 0)
    {
        number = -number;
    }

    for(iCnt = 1; iCnt <= number; iCnt++)
    {
        if((number % iCnt) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int  number = 0; 

    printf("Enter number : \n");
    scanf("%d", &number);

    print_factors(number);

    return 0;
}

// Time complexity : O(1)
