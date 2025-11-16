/////////////////////////////////////////////////////////////////////////////////////
//
//  Reuired Header files
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>               // For Input Output
#include<stdlib.h>              // For Dynamic memory allocation
#include<stdbool.h>             // For include Boolen datatype

/////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Check
//  Description :       It is used to check whether that numbers contain 11 in it or not
//  Input :             Integer
//  Author :            Prathamesh Rajendra Gavandi
//  Date :              14/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////

bool Check(int Arr[] , int iLength)
{
    int iCnt = 0;
    bool bIsavailable = false;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bIsavailable = true;
            break;
        }
    }

    return bIsavailable;
}


/////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iCnt = 0;
    bool bRet = 0;
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

    bRet = Check(p, iSize);

    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present");
    }

    free(p);

    return 0;
}