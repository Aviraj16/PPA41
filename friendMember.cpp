#include<iostream>
using namespace std;

class Marvellous
{
    public:
        void fun();          //Naked function
        
};

class Demo 
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
    Demo()
    {
        i = 10;
        j = 20;
        k = 30;
    }
    //friend class Marvellous;
    friend void Marvellous::fun();
};
void Marvellous::fun()
{
    Demo obj;
    cout<<"Value of i :"<<obj.i<<endl;
    cout<<"Value of j :"<<obj.j<<endl;
    cout<<"Value of k :"<<obj.k<<endl;
}
int main()
{
    Marvellous mobj;
    mobj.fun();
    
    return 0;
}