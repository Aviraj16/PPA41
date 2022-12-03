#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        void fun()  {   cout<<"Base fun\n"; }
         void gun()  {   cout<<"Base gun\n"; }
         void sun()  {   cout<<"Base sun\n"; }
};

class Derived : public Base
{
    public:
        int X,Y;
        void gun()  {   cout<<"Derived gun\n";  }
        void run()  {   cout<<"Derived run\n";  }
         void mun()  {   cout<<"Derived mun\n";  }
};

int main()
{
    Base *bp = NULL;
    Derived dobj;
    bp = & dobj;        // Upcasting

    bp->fun();
    bp->gun();
    bp->sun();

    return 0;
}