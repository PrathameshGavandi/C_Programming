#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0,iMax = Arr[0], iMin = Arr[0];

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt]) < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt]) > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return(iMax - iMin);
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
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

    iRet = Difference(ptr, iSize);

    printf("Difference is : %d",iRet);

    free(ptr);

    return 0;
}