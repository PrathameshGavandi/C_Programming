#include <stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double fArea = 0.0;

    fArea = fWidth * fHeight;

    return fArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0; 
    double dRet = 0.0;

    printf("Enter  Width : \n");
    scanf("%f", &fValue1);

    printf("Enter  Height : \n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of reactangle is %.3f", dRet);

    return 0;
}

// Time complexity : O(1)