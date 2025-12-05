#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if((ch>=97) && (ch<=122))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a Charactar :\n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);
    
    if(bRet == TRUE)
    {
        printf("It is a small case Charactar ");
    }
    else
    {
        printf("It is not a small case Charactar ");
    }

    return 0;
}