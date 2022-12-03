#include<stdio.h>

int Addition(int iNo1,int iNo2)
{
    int Ans = 0;

    printf("Inside Addition\n");

    Ans = iNo1 + iNo2;

    return Ans;


}

int main()
{
    int A = 21;
    int B = 10;
    int Ret = 0;

    printf("Inside Main\n");

    Ret = Addition(A,B);

    printf("Addition is :%d\n",Ret);


    return 0;
}