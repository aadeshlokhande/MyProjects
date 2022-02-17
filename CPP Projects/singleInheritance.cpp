#include<iostream>
using namespace std;
class Vehicle
{
    public:
        int a = 10;
        void car()
        {
            cout<<"I'm a car\n";
        }
        Vehicle()
        {
            cout<<"I'm a vehicle's constructor\n";
        }
};


class Evehicle : public Vehicle
{
    public :
    int b = 20;
    void ev()
    {
        cout<<"I'm a EV\n";
    }
};


int main()
{
    Vehicle alto800;
    // alto800.car();
    // alto800.a;
    Evehicle Tesla;
    // Tesla.ev();
    // Tesla.car();
    // Tesla.a;
    // Tesla.b;
}
