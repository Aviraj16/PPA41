#include<iostream>
using namespace std;

int add(int a, int b)
{
    int Ans;
    Ans=a+b;
    return Ans;
}
int main()
{
    int iNo1 = 10;
    int iNo2 = 21;
    //double b;

    int ret =add(10,21);

    int*b = &ret;

    int **a = &b;
    
    cout<<"Addition is :"<<ret<<"\n";
    cout<<"address of ret is "<<&ret<<"\n";
    cout<<"size of ret is"<<sizeof(ret)<<"\n";

    cout<<"size of pointer is "<<sizeof(b)<<"\n";

    cout<<"size of pointer is "<<sizeof(b)<<"\n";




    return 0;
}