#include<stdio.h>

void Display(int iNo , int iFrequency)
{
    if(iFrequency<0)
    {
        iFrequency = -iFrequency;
    }
  int iCnt = 0;

  for(iCnt = 1; iCnt <= iFrequency; iCnt++)
  {
    printf("%d\t", iNo);
  }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    printf("Enter frequency\n");
    scanf("%d", &iCount);

    Display(iValue,iCount);

    return 0;
}
