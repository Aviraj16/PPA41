#include<stdio.h>


void Fun()		//function defination
{
	printf("Inside Fun\n");
}

int main()
{
	Fun();		//Function call
	
	void (*fptr)();
	
	//fptr is a pointer which points to the function which 
	//accepts nothing and that function returns nothing
	
	fptr= Fun;
	
	fptr();
	printf("From Second fptr\n");
	return 0;
}

							
							
							
						//	void Fun();
							
							
						//	void (*fptr)();