#include<stdio.h>

void StrCpyToggle(char *src, char *dest)
{

    while (*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *src = (*src + 32);
        }
        else if ((*src >= 'a') && (*src <= 'z'))
        {
            *src = (*src - 32);
        }
        
        *dest = *src; 
        dest++;   
        src++;
        
    }
    
    *dest = '\0'; 

}


int main()
{
    char Arr[50] = "Marvellous Python 2";
    char Brr[50];

    

    StrCpyToggle(Arr,Brr);

    printf("Updated string is : %s\n",Brr);

    return 0;
}