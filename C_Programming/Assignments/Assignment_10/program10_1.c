#include <stdio.h>

double CircleArea(float fRadius)
{
    if (fRadius < 0)
    {
        fRadius = -fRadius;
    }
    double dArea = 0.0; 
    const double PI = 3.14;

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0; 
    double dRet = 0.0;

    printf("Enter  radius : \n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %.4f", dRet);

    return 0;
}

// Time complexity : O(1)
