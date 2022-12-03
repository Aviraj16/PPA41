#include<stdio.h>
#include<stdbool.h>

//% Mod Operator
//== Equality operator

bool CheckEven(int iNo)
{
	if((iNo % 2) == 0)
	{
		//printf("No is Even");
		return true;
	}
	else
	{
		//printf("No is Odd");
		return false;
	}
}

int main()
{
	int iValue1 = 0;
	bool bRet = false; //false is internally considered as 0 because it is binary and in binary 0 is false and 1 is true
	
	printf("Enter Number\n");
	scanf("%d",&iValue1);
	
	bRet = CheckEven(iValue1);
	if(bRet == true)
	{
		printf("It is even Number\n");
	}
	else
	{
		printf("It is Odd Number\n");
	}
	
	return 0;
}