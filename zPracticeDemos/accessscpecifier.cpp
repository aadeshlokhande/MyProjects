// access specifier

// protected
// private 
// public 

#include<iostream>
using namespace std;

class Abc
{
    private:
        int a,b;
        void hello()
        {
            cout<<"Hello";
        }

    public:
        int c,d;
        void getData(int num1, int num2)
        {
            a = num1;
            b = num2;
            hello();
        }
};


int main()
{
    Abc obj1;
    // obj1.a = 10;
    // obj1.b = 20;
    // obj1.d = 10;
    // cout<< obj1.a;

    // obj1.getData(10,20);
    return 0;
}