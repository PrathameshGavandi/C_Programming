#include <stdio.h>
#include <stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iIndex = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt]) == iNo)
        {
            iIndex = iCnt;
        }
    }

    return iIndex;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : ");
    scanf("%d", &iSize);

    printf("Enter the number for searching occurance : ");
    scanf("%d", &iValue);

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

    iRet = LastOcc(ptr, iSize, iValue);

    if (iRet > 0)
    {
        printf("Index of first occurance : %d", iRet);
    }
    else
    {
        printf("There is no such number");
    }

    free(ptr);

    return 0;
}