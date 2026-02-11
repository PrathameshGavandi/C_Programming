#include<stdio.h>

int Max(int iNo)
{
    static int iRem = 0, iMax = 0;
    
    if(iNo > 0)
    {
        iRem = iNo % 10;

        if(iRem > iMax)
        {
            iMax = iRem;
        }

        iNo = iNo / 10;

        Max(iNo);
    }

    return iMax;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Max(iValue);

    printf("%d",iRet);

    return 0;
}