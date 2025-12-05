#include<stdio.h>


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Difference(char str[])
{
    while (*str != '\0')
    {
        if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' ||
            *str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U')
            {

                return 1;
            }
         
            *str++;

    }

    return FALSE;
    

    
}

int main()
{
    char arr[20];;
    BOOL bRet = FALSE;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);
    
    bRet = Difference(arr);
    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    
    return 0;
}