#include <stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if (iEnd < iStart)
    {
        printf("Invalid range");
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t", iCnt);
        }
        
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0; 

    printf("Enter staring point : \n");
    scanf("%d", &iValue1);

    printf("Enter ending point : \n");
    scanf("%d", &iValue2);

    RangeDisplay (iValue1,iValue2);

    return 0;
}

// Time complexity : O(n)