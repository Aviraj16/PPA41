#include<stdio.h>

int Addition(int iValue1, int iValue2)	//Dukan
{
 int iOutput =0;
 
 iOutput = iValue1 + iValue2;

return iOutput;
}

int main()	//Ghar
{

 int iNo1=10;
 int iNo2=11;
 int iAns=0;

 iAns = Addition(iNo1,iNo2);

 printf("Addition is %d \n" , iAns);
 return 0;
}