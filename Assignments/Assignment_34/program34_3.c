#include<stdio.h>

char Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')       
    {
        int iCnt = 0;
        for(iCnt = ch; iCnt<='Z'; iCnt++)
        {
            printf("%c\t",iCnt);
        }
    }
    else if(ch >= 'a' && ch <= 'z')  
    {
        int iCnt = 0;
        for(iCnt = ch; iCnt>='a'; iCnt--)
        {
            printf("%c\t",iCnt);
        }
    }
    

    return ch;
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter a character:\n");
    scanf("%c", &cValue);

    cRet = Display(cValue); 

    return 0;
}
