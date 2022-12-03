#include<stdio.h>


int main()
{
    int iNo1,iNo2,iNo3;
    int iRet ;

    printf("Enter First Number :");
    scanf("%d",&iNo1);

    printf("Enter Second Number :");
    scanf("%d",&iNo2);

    printf("Enter Third Number :");
    scanf("%d",&iNo3);
    if(iNo1==0)
    {
        iNo1 = 1;
        if(iNo2==0 && iNo3==0)
        {
            iNo2=iNo3=0;
        }
    }
    else if(iNo2==0)
    {
        iNo2 = 1;
        if(iNo1==0 && iNo3==0)
        {
            iNo1=iNo3=0;
        }
    }
    else if(iNo3==0)
    {
        iNo3 = 1;
        if(iNo2==0 && iNo3==0)
        {
            iNo1=iNo2=0;
        }
    }

    iRet = iNo1*iNo2*iNo3;

    printf("Multiplication is :%d\n",iRet);


    return 0;
}
