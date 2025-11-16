#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0,iNum = 0, iRem = 0, iEsum = 0, iOsum = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNum = Arr[iCnt];

        if((iNum % 2) == 0)
        {
            iEsum = iEsum + iNum;
        }
        else
        {
             iOsum = iOsum + iNum;
        } 
        
    }

    return (iEsum - iOsum);

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

    printf("Result is %d", iRet);

    free(ptr);

    return 0;
}
