#include<iostream>
using namespace std;

class Base
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Base()
        {
            int i = 10;
            int j = 20;
            int k = 30;
        }
};

class Derived : public Base
{
    public:
        void Fun()
        {
            cout<<"value of public i of Base :"<<i<<"\n";
            cout<<"value of private j of Base :"<<j<<"\n";
            cout<<"value of protected k of Base :"<<k<<"\n";
        }
}

int main()
{
    Base bobj;

    cout<<"Value of public i : "<<bobj.i<<"\n";      //A
    //cout<<"Value of private j : "<<bobj.j<<"\n";     //NA
    //cout<<"Value of protected k : "<<bobj.k<<"\n";   //NA

    bobj.Fun();

    return 0;
}