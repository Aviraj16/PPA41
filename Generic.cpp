#include<iostream>
using namespace std;

template<class T>

T Add(T i,T j )
{
    T ans;
    ans = i+j;
    return ans;
}

int main()
{
    int a = 10,b = 11,iRet = 0;
    float x = 90.9f,y = 67.0f,fRet = 0.0f;
    double p =90.1 , q = 67.8,dRet = 0.0;

    iRet = Add(a,b);
    fRet = Add(x,y);
    dRet = Add(p,q);

    cout<<"Addition of Integers :"<<iRet<<endl;
    cout<<"Addition of Floats :"<<fRet<<endl;
    cout<<"Addition of Doubles :"<<dRet<<endl;

    return 0;
}