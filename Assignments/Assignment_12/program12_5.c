#include <stdio.h>
#include <stdbool.h>

bool is_divisible_by_five(int number)
{
    bool bCheck = false;

    if ((number % 5) == 0)
    {
        bCheck = true;
    }

    return bCheck;
}

int main(void)
{
    int number = 0;

    printf("Enter number : \n");
    scanf("%d", &number);

    printf("%s\n", is_divisible_by_five(number) ? "Yes" : "No");

    return 0;
}

// Time complexity : O(1)