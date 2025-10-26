#include <stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if(iEnd < iStart || iStart < 0 || iEnd < 0)
    {
        printf("Invalid range");
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2 ) == 0)
        {
            iSum = iSum + iCnt;  
        }

    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0; 

    printf("Enter staring point : \n");
    scanf("%d", &iValue1);

    printf("Enter ending point : \n");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    if(iRet != -1)
    {
        printf("Addition is %d", iRet);
    }

    return 0;
}

// Time complexity : O(n)