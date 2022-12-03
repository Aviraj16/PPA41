#include<stdio.h>

struct Demo
{
	int no;
	float f;
};

int main()
{
	struct Demo Arr[3];
	
	Arr[0].no=11;
	Arr[0].f=10.9;
	
	Arr[1].no=21;
	Arr[1].no=90.7;
	
	Arr[3].no=51;
	Arr[3].no=78.9;

	printf("Size of whole array : %d \n",sizeof(Arr));
	printf("Size of structue : %d \n",sizeof(struct Demo));
	printf("Value of first structure element is : %d \n",Arr[0].no);
	
	return 0;
}