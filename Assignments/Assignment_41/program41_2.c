#include<stdio.h>

int Sum(int iNo)
{
    int iDigit = 0;
    int iResult = 0;

    
    if(iNo == 0)
    {
        return 0;
    }

    iDigit = iNo % 10;

    iResult = Sum(iNo / 10);

 
    return iDigit + iResult;
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Sum of digits = %d", Sum(iValue));

    return 0;
}
