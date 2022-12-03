#include<iostream>
using namespace std;

class Base1             //4
{
    public:
    int A;

    Base1()
    {
        cout<<"Base1 Constructor\n";
    }
    ~Base1()
    {
        cout<<"Base1 destructor\n";
    }
    void Fun()
    {
        cout<<"Base1 Sun\n";
    }
};

class Base2                         //12
{
    public:
        int I,J,K;
    Base2()
    {
        cout<<"Base2 Constructor\n";
    }
    ~Base2()
    {
        cout<<"Base2 destructor\n";
    }
    void Gun()
    {
        cout<<"Base2 Sun\n";
    }

};
//Not allowed in Java
class Derived : public Base2,public Base1       //24
{
    public:
        int X,Y;
    Derived()
    {
        cout<<"Derived Constructor\n";
    }
    ~Derived()
    {
        cout<<"Derived destructor\n";
    }
    void Sun()
    {
        cout<<"Derived Sun\n";
    }
};

int main()
{
    Derived dobj;

    dobj.Fun();
    dobj.Gun();
    dobj.Sun();

    return 0;
}
