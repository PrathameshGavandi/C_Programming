/////////////////////////////////////////////////////////////////////////////////////
//
//  Reuired Header files
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>               // For Input Output
#include<stdlib.h>              // For Dynamic memory allocation

/////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Frequency
//  Description :       It is used to return frequency of 11 
//  Input :             Integer
//  Author :            Prathamesh Rajendra Gavandi
//  Date :              14/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[] , int iLength)
{
    int iCnt = 0, iFrequency = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}


/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d" ,&p[iCnt]);
    }

    iRet = Frequency(p, iSize);

   printf("Number of 11 : %d", iRet);

    free(p);

    return 0;
}