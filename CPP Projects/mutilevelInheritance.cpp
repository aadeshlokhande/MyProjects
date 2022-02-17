// multilevel inheritance

#include<iostream>
using namespace std;

class Grandpa
{
    public:
        void grandpa()
        {
            cout<<"I'm a grandpa"<<endl;
        }
};

class Papa : public Grandpa
{
    public:
        void papa()
        {
            cout<<"I'm your papa"<<endl;
        }
};

class Son : public Papa
{
    public:
        void son()
        {
            cout<<"I'm a son"<<endl;
        }
};

int main()
{
    Son obj1;
    obj1.son();
    obj1.papa();
    obj1.grandpa();

    Papa obj2;
    obj2.papa();
    obj2.grandpa();
}
