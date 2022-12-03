// Accept N numbers from user and perform the multiplication

// Input
// Value of N = 5
// Values : 1  2  3  4  5

// Output
// Addition is : 120

// Algoithm
/*
    START
        Accept the number of elements from user
        Allocate the memory to store that numbers
        Accept the numbers from user
        Perform multiplication of all numbers
        Display the multiplication
    END
*/

#include<stdio.h>       // For printf and scanf
#include<stdlib.h>      // For malloc and free

//////////////////////////////////////////////////////////
//
//  Application Name : Addition of N numbers
//  Input :     N numbers
//  Output :    Addition
//  Author :    Piyush Manohar Khairnar
//  Date :      18 September 2022
//
//////////////////////////////////////////////////////////

int main()
{
    int *Arr = NULL;        // Poiter to hold the address of array
    int iSize = 1;          // Variable to hold size of array
    int i = 1;              // Loop counter
    int iSum = 1;           // To hold the addition

    printf("Please enter how many elements you want?\n");
    scanf("%d",&iSize);

    // Allocate the memory
    Arr = (int *)malloc(iSize * sizeof(int));
    printf("Memory allocation is succesful\n");

    printf("Please enter the elements\n");
    
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }

    // Perform addition
    for(i = 0; i < iSize; i++)
    {
        iSum = iSum * Arr[i];
    }

    printf("Multiplication is : %d\n",iSum);

    free(Arr);
    printf("Memory gets deallocated.\n");
    
    return 0;
}