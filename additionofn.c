//Accepts N numbers from user and perform the addition
/*
    Steps
    Step1: Understand the problem statement
    Step2: Write the algorithm
    Step3: Decide the programming language(C/C++/Java/Python/_____)
    Step4: Write the program
    Step5: Test the program

// Input
// value = N = 5
// values : 10,20,30,40,50

// Output
// Addition is : 150

//Algorithm

    START
        Accept the number of element from user
        Allocate the memory to store that numbers
        Accepts the numbers from user
        Perform addition of all numbers
        Display the addition
    END
*/

#include<stdio.h>       //for printf and scanf
#include<stdlib.h>      //for malloc and free

////////////////////////////////////////////////////////////////
/*
  Application Name : Addition of N numbers 
  Input            : N numbers
  Output           : Addition
  Author           : Aviraj Bhausaheb Latpate
  Date             : 18th Sept 2022
*/
////////////////////////////////////////////////////////////////

int main()
{
    int *Arr = NULL;        //pointer to hold the address pf array
    int iSize = 0;          //variable to hold size of array
    register int i = 0;     //loop counter
    int iSum = 0;           //to hold the addition

    printf("Please enter how many elements you want?\n");
    scanf("%d",&iSize);

    //Allocate the memory
    Arr = (int *)malloc(iSize * sizeof(int));

    printf("Memory allocation successful\n");
    printf("Please enter the elements\n");

    for(int i=0; i<iSize;i++)
    {
        scanf("%d",&Arr[i]);
    }

    //Perform addition
    for(i=0; i<iSize;i++)
    {
        iSum = iSum + Arr[i];
    }
    printf("Addition is : %d\n",iSum);

    free(Arr);
    printf("Memory Deallocation Successful");

    return 0;
}