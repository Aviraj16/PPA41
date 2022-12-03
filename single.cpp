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


int main()
{
    Derived * ptr = NULL;

    ptr = new Derived;

    ptr->Fun();
    ptr->Gun();

    delete ptr;

    return 0;
}