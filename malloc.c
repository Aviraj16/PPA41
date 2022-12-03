#include<stdio.h>
#include<stdlib.h>

struct demo
{
    int i;
    float f;
};

int main()
{
    struct demo obj;        //static memory allocation

    struct demo *ptr = NULL;
    ptr = (struct demo *)malloc(sizeof(struct demo));   //dynamic memory allocation;

    obj.i = 11;
    obj.f = 9.0;

    ptr->i = 11;
    ptr->f = 9.0;

    printf("%d\n",obj.i);
    printf("%d\n",ptr->i);

    free(ptr);
    //code

    return 0;
}