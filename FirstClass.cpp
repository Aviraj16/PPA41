#include<iostream>
using namespace std;
// Class Declaration
class Maths     
{
    public:                     // Access Specifier
        int iNo1;               // Characteristics
        int iNo2;               // Characteristics

    Maths()                     // Constructor (Default)
    {
        iNo1 = 0;
        iNo2 = 0;
    }

    Maths(int A, int B)         // Constructor (Parametrised)
    {
        iNo1 = A;
        iNo2 = B;
    }

    int Addition()              // Behaviour
    {
        return iNo1 + iNo2;
    }

    int Substraction()          // Behaviour
    {
        return iNo1 - iNo2; 
    }
};

int main()
{
    Maths mobj1;
    Maths mobj2(11,10); 
    int ret = 0;

    ret = mobj2.Addition();
    cout<<"Addition is : "<<ret<<"\n";

    ret = mobj1.Addition();
    cout<<"Addition is : "<<ret<<"\n";

    return 0;
}