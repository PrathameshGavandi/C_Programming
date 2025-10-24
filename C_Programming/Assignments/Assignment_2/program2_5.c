#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{

    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false ;

    printf("Enter number\n");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("%d Number is even",iValue);
    }
    else
    {
        printf("%d Number is odd", iValue);
    }

    return 0;

}