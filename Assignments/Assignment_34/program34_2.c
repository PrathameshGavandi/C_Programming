#include<stdio.h>

char Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')       // Capital → Small
    {
        ch = ch + 32;
    }
    else if(ch >= 'a' && ch <= 'z')  // Small → Capital
    {
        ch = ch - 32;
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

    printf("Output: %c\n", cRet);

    return 0;
}
