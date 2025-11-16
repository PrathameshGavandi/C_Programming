#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0,iNum = 0, iCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNum = Arr[iCnt];
        iCount = 0;

        while (iNum != 0)
        {
            iNum = iNum / 10;
            iCount++;
        }

        if(iCount == 3)
        {
            printf("\n%d",Arr[iCnt]);
        }
        
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

    Digits(ptr, iSize);

    free(ptr);

    return 0;
}