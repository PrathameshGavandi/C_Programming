#include <stdio.h>

void CheckNumberType(int num)
{
    if (num > 0)
    {
        printf("Number is Positive");
    }
    else if (num < 0)
    {
        printf("Number is Negative");
    }
    else
    {
        printf("Number is Zero");
    }
}

int main()
{
    int number;
    printf("Enter number : \n");
    scanf("%d", &number);

    CheckNumberType(number);
    return 0;
}

