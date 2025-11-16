#include <stdio.h>
#include <stdlib.h>

typedef int *IPTR;

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0;
    iMin = Arr[0];

    for (iMin = Arr[iCnt], iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    IPTR iPtr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d", &iLength);

    // Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if (NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
    }

    printf("Enter the values : \n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }

    // Step2 : Use the Memory
    iRet = Minimum(iPtr, iLength);

    printf("Maximum number is :%d\n", iRet);

    // Step 3 : Free the memory

    free(iPtr);

    return 0;
}