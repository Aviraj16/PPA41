#include<stdio.h>

int main()
{
	char ch = 'A';
	int i = 11;
	float f = 9.38;
	double d = 89.9078;
	
	char *cp = &ch;
	int *ip = &i;
	float *fp = &f;
	double *dp = &d;
	
	void *vp = &ch;
	
	printf("Value of ch: %c\n",ch);
	printf("Address of ch: %p\n",&ch);
	printf("Value inside cp: %p\n",cp);
	printf("Data refer by cp: %c\n",*cp);
	printf("Size of ch : %d \n ",sizeof(ch));	//1
	printf("Size of cp : %d \n ",sizeof(cp));	//8,4
	
	printf("Data refer by vp: %c\n",*(char *)vp);
	vp=&i;
	printf("Data refer by vp: %d\n",*(int*)vp);
	vp=&f;
	printf("Data refer by vp: %f\n",*(float*)vp);
	
	return 0;
	
}