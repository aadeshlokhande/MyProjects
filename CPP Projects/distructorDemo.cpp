#include<iostream>
using namespace std;
int counter = 0;
class Abc
{
    public:
    Abc()
    {
        ++counter;
        cout<<"object "<<counter<<" is constructed"<<endl;
    }

    ~Abc()
    {
        cout<<"object "<<counter<<" is distructed"<<endl;
        --counter;
    }
};

int main()
{
    Abc a1;
    cout<<"obj a1 created"<<endl;
    {
        Abc a2;
        cout<<"obj a2 created"<<endl;
        {
            Abc a3;
            cout<<"obj a3 created"<<endl;
        }
        cout<<"In obj2"<<endl;
    }
    cout<<"In obj1"<<endl;
}
















// member function
// data member 
// class memeber