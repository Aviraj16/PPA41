#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size = 0;
    int *Arr = NULL;

    printf("Enter the size of array\n");
    scanf("%d",&size);

    Arr = (int *)malloc(sizeof(int) *size);
    // Arr = (int *)malloc(28);
    
    //use the memory

    free(Arr);

    return 0;
}