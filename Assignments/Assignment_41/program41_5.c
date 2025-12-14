#include<stdio.h>

int Mult(int iNo)
{
    int iRem = 0;
    static int iProduct = 1;

    if (iNo != 0)
    {
        iRem = iNo % 10;
        iProduct = iProduct * iRem;
        Mult(iNo / 10);
    }
    return iProduct;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Mult(iValue);

    printf("%d",iRet);
    
    return 0;
}
