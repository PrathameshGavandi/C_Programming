#include <stdio.h>

int KMtoMeter(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iMeter = 0;
    const int ConversionFactor = 1000;

    iMeter = iNo * ConversionFactor;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter  Distance : \n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meter is %d", iRet);

    return 0;
}

// Time complexity : O(1)