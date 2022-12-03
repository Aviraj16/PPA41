#include<iostream>
using namespace std;

void fun(int no)        //call by value
{
    cout<<"\nInside call by value\n"<<no;
    no++;
}

void gun(int * p)       //call by address
{
    cout<<"\nInside call by address\n"<<*p;
    (*p)++;
}

void sun(int &ref)      //call by reference
{
    cout<<"\nInside call by reference\n"<<ref;
    ref++;
}

int main()
{

    int i = 10;
    int j = 10;
    int k = 10;

    fun(i);         //fun(10)
    cout<<i<<"\n";
    gun(&j);        //fun(200)
    cout<<j<<"\n";
    sun(k);         //sun(k)
    cout<<k<<"\n";

    return 0;
}