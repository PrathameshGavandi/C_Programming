#include <stdio.h>

void PrintEven(int iNo)
{
    if (iNo <= 0)
    {
        return;
    }

    int iCnt = 0;
    int iCount = 0;

    for (iCnt = 1; iCount < iNo; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            printf("%d\t", iCnt);
            iCount++;
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter your number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}
