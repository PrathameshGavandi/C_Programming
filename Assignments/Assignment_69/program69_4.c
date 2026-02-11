#include<stdio.h>

void Display(int iNo)
{
    static char i = 'A';

    if(i < 'A' + iNo)
    {
        printf("%c\t",i);
        i++;

        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
