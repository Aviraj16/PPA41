#include<stdio.h>
#include "Marvellous.h"

int main()      //This is entry point function
{
    struct Demo obj;
    int no = 11;
    float Radius = 30.6f;
    float Area = PI * Radius * Radius;

    IPTR ptr = &no;

    printf("Area is : %fn",Area);

    printf("Value of no is : %dn",*ptr);

    return 0;
}
# define NULL (void *)0