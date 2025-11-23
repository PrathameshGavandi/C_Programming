#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iEven = 2;
    int iOdd = 1;

    for(i = 1; i <= iRow; i++)
    {
        iEven = 2; 
        iOdd = 1;

        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 1)
            {
                printf("%d\t", iEven);
                iEven++;
                iEven++;
            }
            else
            {
                printf("%d\t", iOdd);
                iOdd++;
                iOdd++;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and columns : \n");
    scanf("%d%d", &iValue1, &iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
