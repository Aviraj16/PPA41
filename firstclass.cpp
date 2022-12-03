#include<iostream>

using namespace std;

class Maths
{
    public:                 //Access Specifier
        int iNo1;           //Characteristics
        int iNo2;           //Characteristics

        Maths()             //Constructor(Default)
        {
            cout<<"Inside Default countructor\n";
            iNo1 = 0;
            iNo2 = 0;
        }
        
        Maths(int A, int B) //Constructor(Parameterised)
        {
            cout<<"Inside Parameterised countructor\n";
            iNo1 = A;
            iNo2 = B;
        }

        ~Maths()
        {
            cout<<"Inside Destructor\n";
            //Destructor
        }
        // int Addition(Maths *this)
        int Addition()      //Behaviour
        {
            return iNo1 + iNo2;
        }
        
        int Substraction()  //Behaviour
        {
            return iNo1 - iNo2;
        }
};

int main()
{
    cout<<"Inside main function\n";
    
    Maths mobj1;
    Maths mobj2(10,11);     // ret = Addition(&obj2);

    int ret = 0;

    ret = mobj2.Addition();
    //ret = Addition(200);
    cout<<"Addition is :"<<ret<<"\n";

    ret = mobj1.Substraction();
    cout<<"Addition is :"<<ret<<"\n";


    return 0;
}