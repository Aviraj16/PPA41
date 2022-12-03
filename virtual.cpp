#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        void Fun()
        {
            cout<<"Base Fun\n";
        }
        virtual void Gun()
        {
            cout<<"Base Gun\n";
        }
        virtual void Sun()
        {
            cout<<"Base Sun\n";
        }
};
class Derived: public Base
{
    public:
        int X,Y;
        void Gun()
        {
            cout<<"Derived Gun\n";
        }
        void Run()
        {
            cout<<"Derived Run\n";
        }
        virtual void Mun()
        {
            cout<<"Derived Mun\n";
        }

};
int main()
{
    cout<<"Size of Base class :"<<sizeof(Base)<<"\n";           //12,16
    cout<<"Size of Derived class :"<<sizeof(Derived)<<"\n";     //20,24
    
    Base *bp = NULL;
    Derived dobj;
    bp = &dobj;          //Upcasting

    bp->Fun();
    bp->Gun();
    bp->Sun();

    return 0;
}