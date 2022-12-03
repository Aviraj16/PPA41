#include<iostream>
//using namespace std;

namespace 
{
    class Demo
    {
        public:
            int i,j;
            void fun()
            {
                std::cout<<"Inside Fun of Demo from unnamed namespace\n";
            }
    };
}

int main()
{
    
    Demo obj;

    obj.fun();

    return 0;
}