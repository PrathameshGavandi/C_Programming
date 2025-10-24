#include <stdio.h>

double FhtoCs(float fTemp)
{
    double iCensius = 0.0; 

    iCensius = ((fTemp-32) * (5.0/9.0));

    return iCensius;
}

int main()
{
    float fValue = 0.0; 
    double dRet = 0.0;

    printf("Enter  temprature in Fahrenhit : \n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temprature is Celcius is %.4f", dRet);

    return 0;
}

// Time complexity : O(1)