#include<stdio.h>

int main()
{
    // All the belwo memory allocations are static memory allocations

    // First way to intialise the array
    int Arr[4] = {10,20,30,40};     // Member initialisation list

    //Second way to initialise the array
    int Brr[] = {10,20,30,40}; // Member initialisation list

    // Third way to initialise the array
    int Crr[3+1];
    int Drr[3+2]= {7+9,3*2,78,9-1};
    // Member by meber initialisation
    Crr[0] = 10;
    Crr[1] = 20;
    Crr[2] = 30;
    Crr[3] = 40;

    printf("%d\n",Crr[0]);
    printf("%d\n",Crr[1]);
    printf("%d\n",Crr[2]);
    printf("%d\n",Crr[3]);

    printf("\n\n%d\n",Drr[0]);
    printf("\n\n%d\n",Drr[1]);
    printf("\n\n%d\n",Drr[2]);
    printf("\n\n%d\n",Drr[3]);


    int Err[] ={10,20,30};

    int i=4;
    int aarr[i]={23,6,89,32};


    return 0;
}