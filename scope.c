#include<stdio.h>

int X=10;		//global variable

void Demo()
{
	int B=30;	//local variable

	printf("Value of A from Demo : %d\n",B);
	printf("Value of X from Demo : %d\n",X);
	
	//printf("%d",A);	//not allowed
	
	}

int main()
{
	int A=20;	//local variable
	
	printf("Value of A from Main : %d\n",A);
	printf("Value of A from Demo : %d\n",X);
	
	//printf("%d",B);	//not allowed

	return 0;		//function call
}