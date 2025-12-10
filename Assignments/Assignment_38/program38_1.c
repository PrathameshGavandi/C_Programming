#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{

    char *end = src;

    while (*end != '\0')
    {
        *end++;
    }
    *end--;

    while (end >= src)
    {
        *dest = *end;

        dest++;
        end--;
    }

    *dest = '\0';
    
    
}

int main()
{
    char Arr[50] = "Marvellous Python";
    char Brr[50];

    

    StrCpyRev(Arr,Brr);

    printf("Updated string is : %s\n",Brr);

    return 0;
}
