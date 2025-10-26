#include <stdio.h>

int sum_natural_numbers(int limit)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt <= limit; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int limit = 0;

    printf("Enter number : \n");
    scanf("%d", &limit);

    printf("%d\n",sum_natural_numbers(limit));

    return 0;
}

// Time complexity : O(n)