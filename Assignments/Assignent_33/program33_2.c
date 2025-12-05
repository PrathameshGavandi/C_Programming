#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch>=65) && (ch<=90))
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

    bRet = ChkCapital(cValue);
    
    if(bRet == TRUE)
    {
        printf("It is Capital");
    }
    else
    {
        printf("It is not a Capital");
    }

    return 0;
}