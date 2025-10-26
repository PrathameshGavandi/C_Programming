#include <stdio.h>

void print_odd_numbers(int limit)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= limit; iCnt++)
    {
        if ((iCnt % 2) != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int limit = 0;

    printf("Enter number : \n");
    scanf("%d", &limit);

    print_odd_numbers(limit);

    return 0;
}

// Time complexity : O(n)