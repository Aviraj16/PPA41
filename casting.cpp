#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
};

class Derived : public Base
{
    public:
        int X,Y;

};
int main()
{
    Base * bp = NULL;
    Derived * dp = NULL;

    Base bobj;
    Derived dobj;

    bp = &bobj;     //No casting        Allowed
    dp = &dobj;     //No casting        Allowed
    bp = &dobj;     //up casting        Allowed
    //dp = &bobj;     //down casting      Not allowed

    return 0;

}