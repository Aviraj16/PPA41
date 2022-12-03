//find maximum of 2 numbers using procedural approach
#include<stdio.h>

int main()
{
    int iNo1 = 0; 
    int iNo2 = 0;
    printf("Enter First Number\n");
    scanf("%d",&iNo1);
    printf("Enter Second Number\n");
    scanf("%d",&iNo2);
    if(iNo1>iNo2)
    {
        printf("Maximum No is %d\n",iNo1);
    }
    else
    {
        printf("Maximum No is %d\n",iNo2);
    }
    return 0;
}