#include<stdio.h>

int Strlen(char *str)
{
    static int iCount = 0;

    if (*str != '\0')
    {
        iCount++;
        str++;
        Strlen(str);
    }

    return iCount;
    
}

int main()
{
    int iRet = 0;
    char Arr[20];

    printf("Enter String : ");
    scanf("%s",Arr);

    iRet = Strlen(Arr);

    printf("%d",iRet);

    return 0;
}
