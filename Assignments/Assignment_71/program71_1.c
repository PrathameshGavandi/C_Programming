#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCnt = 0, iCount = 0;
    
    if(str[iCnt] != '\0' )
    {
        if(str[iCnt] == ' ')
        {
            iCount++;
        }
        iCnt++;
        
        WhiteSpace(str);
    }

    return iCount;
}
int main()
{
    int iRet = 0;
    char arr[50];

    printf("Enter string : ");
    fgets(arr,50,stdin);

    iRet = WhiteSpace(arr);

    printf("%d",iRet);

    return 0;
}
