#include<stdio.h>
#include<Stdlib.h>

int main()
{
    int *p = NULL;
    int *q = NULL;

    p = (int *)malloc(10 * sizeof(int));

    //use the memory

    q = (int *)realloc(p,15 * sizeof(int));
    if(q==NULL)
    {
        printf("reaalloc fails");
        q = p;
    }

    //use the memory

    free(q);

    return 0;
}

