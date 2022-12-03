#include<iostream>
using namespace std;
class Base
{
    public:                             //access specifier
        int A,B;
        void Fun()                      //function defination               1000
        {
            cout<<"Base Fun\n";
        }
        void Gun(int i)                      //function defination               2000                        
        {
            cout<<"Base Gunwith one integer \n";
        }
        void Gun(int i,int j)           //overloaded function defination    3000
        {
            cout<<"Base Gun with two integer \n";
        }
};
class Derived : public Base
{
    public:
        int X,Y;
        void Sun()                      //function defination
        {
            cout<<"Derived Sun\n";
        }
        void Fun()                      //function redefination
        {
            cout<<"Derived Fun\n";
        }
};
int main()
{
    Derived dobj;
    dobj.Fun();
    dobj.Gun(11);
    dobj.Gun(11,21);
    dobj.Sun();
    
    return 0;
}