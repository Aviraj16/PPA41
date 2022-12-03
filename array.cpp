#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;

        Array(int iLength)
        {
            cout<<"Inside constructor\n";
            iSize = iLength;
            Arr = new int[iSize];
        }
        ~Array()
        {
            cout<<"Inside destructor\n";
            delete []Arr;
        }
        void Accept()
        {
            cout<<"Enter the value\n";
            int i = 0;

            for(i=0;i<iSize; i++)
            {
                cin>>Arr[i];
            }
        }
        void Display()
        {
            cout<<"Elements of array are : \n";
            int i = 0;
            for(i=0;i<iSize;i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
        int Summation()
        {
            int iSum = 0; i = 0;
            for(i = 0; i<iSize;i++)
            {
                iSum = iSum
            }
        }
};

int main()
{
    cout<<"Inside main\n";
    Array obj1(4);
    Array obj2(6);
    obj1.Accept();
    obj1.Display();


    return 0;
}