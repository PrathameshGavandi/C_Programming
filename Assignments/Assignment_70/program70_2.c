#include<stdio.h>

int Sum(int iNo)
{
    static int iRem = 0;
    static int iSum = 0;
    
    if(iNo > 0 )
    {
        iRem = iNo % 10;

        iSum = iSum + iRem;
        
        iNo = iNo / 10;

        Sum(iNo);
    }

    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("%d",iRet);

    return 0;
}