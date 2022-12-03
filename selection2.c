#include<stdio.h>

//11 mulachi chappal
//21 mulichi chappal
//51 aai chi chappal
//101 wadilanchi chappal

int main()
{
	int iToken = 0;
	
	printf("tumcha token number sanga\n ");
	scanf("%d",&iToken);
	
	switch(iToken)
	{
		case11:
			printf("Mulachi chappal milali\n");
			break;
		case21:
			printf("Mulichi chappal milali\n");
			break;
		case51:
			printf("Aai chi chappal milali\n");
			break;
		case101:
			printf("Wadilanchi chappal milali\n");
			break;
		Default:
			printf("sorry asa token nahiye...\n");
			break;
	}
	return 0;
}