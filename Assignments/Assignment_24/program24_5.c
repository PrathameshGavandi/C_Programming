#include <stdio.h>
#include <stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0,iNum = 0, iRem = 0, iSum = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNum = Arr[iCnt];
        iSum = 0;

        while (iNum != 0)
        {
            iRem = iNum % 10;

            iSum = iSum + iRem;

            iNum = iNum / 10;
        }

        printf("%d\t",iSum);
        
    }

}

int main()
{
    int iSize = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : ");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if (NULL == ptr)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter the elements : \n");

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    DigitsSum(ptr, iSize);

    free(ptr);

    return 0;
}