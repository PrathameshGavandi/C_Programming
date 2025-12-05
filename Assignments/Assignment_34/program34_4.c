#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkSpecial(char ch)
{
    if((ch>=33) && (ch<=42))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a Charactar :\n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);
    
    if(bRet == TRUE)
    {
        printf("It is a special character");
    }
    else
    {
        printf("It is not a special character");
    }

    return 0;
}