#include<stdio.h>

void Display()
{
    static char i = 'A';
    if(i <= 'E' )
    {
        printf("%c\t",i);
        i++;

        Display();
    }
}
int main()
{
    Display();


    return 0;
}