#include<stdio.h>

void CheckLeapYear(int year)
{
    if((year >= 1000) && (year <= 9999))
    {
        if((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0)
        {
            printf("%d is a Leap Year" , year);
        }
        else
        {
            printf("%d is not a Leap Year" , year);
        }
    }
    else
    {
        printf("Invalid Year");
    }

}

int main()
{
    int yr;
    printf("Enter year : \n");
    scanf("%d", &yr);

    CheckLeapYear(yr);
    return 0;
}