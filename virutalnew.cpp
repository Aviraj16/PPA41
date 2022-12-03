#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        void Fun()          {   cout<<"Base Fun\n"; }       //1000
        virtual void Gun()  {   cout<<"Base Gun\n"; }       //2000
        virtual void Sun()  {   cout<<"Base Sun\n"; }       //3000
        virtual void Run()  {   cout<<"Base Sun\n"; }       //4000
        
};
class Derived: public Base
{
    public:
        int X,Y;
        void Gun()  {   cout<<"Derived Gun\n";  }           //5000
        void Run()  {   cout<<"Derived Run\n";  }           //6000
        virtual void Mun()  {   cout<<"Derived Mun\n";  }   //7000
        
};
int main()
{
    
    Base *bp = new Derived;
    Derived dobj;

    bp = &dobj;          //Upcasting

    bp->Fun();  // Base Fun
    bp->Gun();  //Derived Gun
    bp->Sun();  //Base Sun
    bp->Run();  //Derived Run
   // bp->Mun();  //Error

    return 0;
}