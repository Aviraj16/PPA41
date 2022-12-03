//find maximum of 2 numbers using object oriented approach
#include<iostream>
using namespace std;
class Maximum
{
    public:
    int iNo1 = 0;
    int iNo2 = 0;
    Maximum()
    {
        cout<<"Memory allocated successfully for this program\n";
    }
    ~Maximum()
    {
        cout<<"\nMemory deallocated successfully for this program\n";
    }
    int Max()
    {
        cout<<"Enter first Number\n";
        cin>>iNo1;
        cout<<"Address first Number is"<<&iNo1<<endl;
        cout<<"Enter Second Number\n";
        cin>>iNo2;
        cout<<"Address Second Number is"<<&iNo2<<endl;
        if(iNo1>iNo2)
        {
        cout<<"\nMaximum Number is "<<iNo1;
        }
        else
        {
        cout<<"\nMaximum Number is "<<iNo2;
        }
    }
};
int main()
{
    Maximum obj1;
    obj1.Max();

    return 0;
}