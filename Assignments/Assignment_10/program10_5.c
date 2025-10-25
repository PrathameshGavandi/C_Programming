#include <stdio.h>

double SquareMeter(int iValue)
{
    
    double iSmeter = 0.0;
    const double ConversionFactor = 0.0929;

    iSmeter = iValue * ConversionFactor;

    return iSmeter;

}

int main()
{
    int  iValue = 0; 
    double dRet = 0.0;

    printf("Enter area in square feet : \n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %.4f", dRet);

    return 0;
}

// Time complexity : O(1)