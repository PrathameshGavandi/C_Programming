#include <stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) != 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter  number : \n");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d", iRet);

    return 0;
}

// Time complexity : O(n)