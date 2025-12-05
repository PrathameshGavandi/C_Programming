#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char chDiv)
{
    if((chDiv==65) || (chDiv==97))
    {
        printf("Your exama at 7 AM");
    }
    if((chDiv==66) || (chDiv==98))
    {
        printf("Your exama at 8.30 AM");
    }
    if((chDiv==67) || (chDiv==99))
    {
        printf("Your exama at 9.20 AM");
    }
    if((chDiv==68) || (chDiv==100))
    {
        printf("Your exama at 10.30 AM");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter your division :\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    
    return 0;
}