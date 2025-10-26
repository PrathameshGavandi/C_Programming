#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0, iFrequency = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit < 6)
        {
            iFrequency++;
        }

        iNo = iNo / 10;
    }

    return iFrequency;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("%d", iRet);

    return 0;
}

// Time complexity : O(number of digits(d))