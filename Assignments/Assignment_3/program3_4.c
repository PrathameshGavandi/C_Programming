#include <stdio.h>
#include <ctype.h>

void DisplayConvert(char CValue)
{

    if (islower(CValue))
    {
        printf("%c", toupper(CValue));
    }
    else if (isupper(CValue))
    {
        printf("%c", tolower(CValue));
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");

    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}
