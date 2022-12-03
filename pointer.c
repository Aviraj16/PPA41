#include<stdio.h>

int main()
{

    long int no = 11;
    int *p = &no;
    int **q = &p;
    int ***x = &q;
    int ****y = &x;
    int **a = &p;
    int ***b = &q;

    printf("\nvalue of no is %d \n",no);
    printf("address of no is %d \n",&no);
    printf("size of no is %d \n\n",sizeof(no));

    printf("value of p is %d \n",p);
    printf("size of p is %d \n\n",sizeof(p));

    printf("value of q is %d \n",q);
    printf("size of q is %d \n\n",sizeof(q));
    


    return 0;
}