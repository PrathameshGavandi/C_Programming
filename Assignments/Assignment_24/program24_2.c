#include <stdio.h>
#include <stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0, iMin = Arr[0];

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt]) < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
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

    iRet = Minimum(ptr, iSize);

    printf("Smallest number is : %d",iRet);

    free(ptr);

    return 0;
}