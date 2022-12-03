#include<iostream>
using namespace std;

class Electricity
{
    
};

int main()
{
    double units;
    cout<<"Enter No of units"<<endl;
    cin>>units;

    double billpay;

    if(units<100)
    {
        billpay = 100+units*1.20;
    }
    else if(units<300)
    {
        billpay = 100+100*1.20+(units-100)*2;
    }
    else if(units>300)
    {
        billpay = 100+100*1.20+200*2+(units-300)*3;
    }
    else
    {
        cout<<"Enter Valid Data"<<endl;
    }

    cout<<"Your bill to pay is\t"<<billpay;



    return 0;
}