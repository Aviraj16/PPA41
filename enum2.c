#include<stdio.h>

enum days { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main()
{
	enum days obj;
	
	printf("size of enum %d \n",sizeof(obj));
	printf("Monday : %d \n",Monday);
	printf("Tuesday : %d \n",Tuesday);
	printf("Wednesday : %d \n",Wednesday);
	printf("Thursday : %d \n",Thursday);
	printf("Friday : %d \n",Friday);
	printf("Saturday : %d \n",Saturday);
	printf("Sunday : %d \n",Sunday);
	
	//Monday++;
	
	//printf("%d\n",&Monday);
	
	return 0;
}