#include<stdio.h>

int Strlen(char *str)
{
    static int iCnt = 0, iCount = 0;
    
    if(str[iCnt] != '\0' )
    {
        iCnt++;
        iCount++;

        Strlen(str);
    }

    return iCount;
}
int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string : ");
    scanf("%s",arr);

    iRet = Strlen(arr);

    printf("%d",iRet);

    return 0;
}