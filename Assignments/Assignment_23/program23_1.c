/////////////////////////////////////////////////////////////////////////////////////
//
//  Reuired Header files
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>               // For Input Output
#include<stdlib.h>              // For Dynamic memory allocation
#include<stdbool.h>             // For include boolean datatype

/////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Frequency
//  Description :       It is used to accepted number as NO and check whether NO is present or not 
//  Input :             Integer
//  Author :            Prathamesh Rajendra Gavandi
//  Date :              14/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[] , int iLength, int iNo)
{
    int iCnt = 0;
    float fAvailable = FALSE;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            fAvailable = TRUE;
            break;
        }
    }

    return fAvailable;
}


/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iCnt = 0, iValue = 0;
    int *p = NULL;
    bool bRet = FALSE;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    printf("Enter the number : ");
    scanf("%d", &iValue);
    
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

    bRet = Check(p, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(p);

    return 0;
}
