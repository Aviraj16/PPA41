#include<stdio.h>

int main()
{
	int Arr[4]={11,21,51,101};
	
	printf("Elements of array are : \n");
	
	/*
	printf("%d\n",Arr[0]);
	printf("%d\n",Arr[1]);
	printf("%d\n",Arr[2]);
	printf("%d\n",Arr[3]);
	*/
	
	int iCnt=0;
	for(iCnt=0;iCnt<=3;iCnt++)
	{
		printf("%d\n",Arr[iCnt]);
	}
		
	
	return 0;
}