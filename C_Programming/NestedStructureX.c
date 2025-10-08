#include <stdio.h>


struct Hello
{
    int no;
    float Marks;
struct Demo
{
    int i;
    float f;
}dobj;

};

int main()
{

    printf("Size of Hello structure is : %lu\n ", sizeof(struct Hello)); //16

    return 0;
}