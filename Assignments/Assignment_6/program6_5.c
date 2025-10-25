#include <stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float fPercentage = ((float)iNo2 / iNo1) * 100;

    return fPercentage;
}

int main()
{
    int iValue1 = 0, iValue2 = 0; 
    float fRet = 0.0;

    printf("Please enter total marks : ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks : ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is %.1f%%", fRet);

    return 0;
}

// Time complexity : O(1)