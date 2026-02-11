#include<stdio.h>

int Mult(int iNo)
{
    static int iRem = 0, iProduct = 1;
    
    if(iNo > 0)
    {
        iRem = iNo % 10;

        iProduct = iProduct * iRem;

        iNo = iNo / 10;

        Mult(iNo);
    }

    return iProduct;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("%d",iRet);

    return 0;
}