#include<stdio.h>

int Min(int iNo)
{
    static int iRem = 0, iMin = 10;
    
    if(iNo > 0)
    {
        iRem = iNo % 10;

        if(iRem < iMin)
        {
            iMin = iRem;
        }

        iNo = iNo / 10;

        Min(iNo);
    }

    return iMin;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Min(iValue);

    printf("%d",iRet);

    return 0;
}