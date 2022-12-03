#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5];         //Static memory allocation
    
    int *p = NULL;

    p= (int *)malloc(sizeof(int) *5);

    //use the memory

    free(p);

    printf("size of p is : %d\n",sizeof(p));

    //code
    
    return 0;       //memory of Arr gets deallocated at this point
}