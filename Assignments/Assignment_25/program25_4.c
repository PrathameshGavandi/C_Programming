#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0,iNum = 0, iRem = 0, iSum = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNum = Arr[iCnt];
        iSum = 0;

        if(((iNum % 3) == 0) &&(iNum % 5) == 0)
        {
            printf("\n%d\t", iNum);
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

    Display(ptr, iSize);

    free(ptr);

    return 0;
}