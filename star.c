#include<stdio.h>
int main()
{
auto int i;
register int j;
int k;
int r;     //declaring integer variables i,j,k for loops and r for number of rows
printf("Enter the number of rows :\n");     //Asking user for input
scanf("%d",&r);      //saving number of rows in variable r
for(i=0;i<r;i++)    //outer loop for number of rows
   {
     for(k=r;k>i+1;k--)     //nested loop for number of spaces
       {
          printf(" ");     //printing spaces
       }
     for(j=0;j<=i*2;j++)     //nested loop for printing stars
       {
          printf("*");      //printing stars
       } 
    printf("\n");     //printing newline
   }
}