#include<iostream>
using namespace std;

class Base
{
    public:
        int A;
        int B;

        Base()
        {
            cout<<"Inside Base constructor\n";
        }
         ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Base Fun\n";
        }
};

class Derived :public Base
{
    public:
        int X;
        int Y;

        Derived()
        {
            cout<<"Inside Derived Constructor\n";
        }
        ~Derived()
        {
            cout<<"Inside Derived destructor\n";
        }
        void Gun()
        {
            cout<<"Inside Gun of Derived\n";
        }
};

class DerivedX : public Derived
{
    public:
        int i,j;

        DerivedX()
        {
            cout<<"Inside DerivedX class Constructor\n";
        }
        ~DerivedX()
        {
            cout<<"Inside DerivedX class destructor\n";
        }
        void Sun()
        {
            cout<<"Inside Derived Sun\n";
        }

};


int main()
{
    cout<<"Size of Base :"<<sizeof(Base)<<"\n";
    cout<<"Size of Derived :"<<sizeof(Derived)<<"\n";
    cout<<"Size of DerivedX :"<<sizeof(DerivedX)<<"\n";

    DerivedX dobj;

    dobj.Fun();   
    dobj.Gun();
    dobj.Sun();


    return 0;
}