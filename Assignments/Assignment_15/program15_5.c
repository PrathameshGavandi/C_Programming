#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iEsum = 0, iOsum = 0, iDiff = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit % 2) == 0)
        {
            iEsum = iEsum + iDigit;
        }
        else
        {
            iOsum = iOsum + iDigit;
        }

        iNo = iNo / 10;
    }

    iDiff = (iEsum - iOsum);

    return iDiff;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d", iRet);

    return 0;
}

// Time complexity : O(number of digits(d))