#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        //const int k = 11; //Not allowed
        //const int l = 21; //not allowed

        const int k;
        const int l;
        //default constructor
        Demo() :k(11), l(21)
        {
            //k = 11;
            //l = 21;
            i = 51;
            j= 101;

        }
        //parameterised constructor
        Demo(int a, int b, int c, int d) :k(c),l(d)
        {
            i = a;
            j = b;
        }
};

int main()
{
    Demo obj1;
    Demo obj2(10,20,30,40);
    //obj1.k++; NA
    //obj2.k++; NA
    obj1.i++;
    obj2.i++;

    return 0;
}
