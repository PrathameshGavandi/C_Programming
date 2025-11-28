#include<stdio.h>
#include<fcntl.h>


int main()
{
    int fd = 0, iRet = 0;
    char FileName [20];
    char DATA [] = "India is my country";

    printf("Enter the name of file \n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR);
    if(fd == -1)
    {
        printf("Unable tot open\n");
        return -1;
    }

    iRet = write(fd,DATA,11);

    printf("%d bytes gets successfully writtened\n", iRet);

    close(fd);


    return 0;
}