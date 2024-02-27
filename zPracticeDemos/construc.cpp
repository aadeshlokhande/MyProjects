// constructor 

// #include<iostream>
// using namespace std;

// class Hello
// {
//     public:
//     Hello(string name)
//     {
//         cout<<"Hello "<<name<<endl;
//     }

// };

// int main()
// {
//     Hello parth("parth");
//     Hello shreya("Shreya");
//     return 0;
// }




// ==================================
/*

#include<iostream>
using namespace std;
class car
{
    public:
    car(string name,int price)
    {
        cout<<"Car name is "<<name<<endl;
        cout<<"It costs "<<price<<endl;
    }
};
int main()
{
    car Sachin("Ferrari",988877777);
    car Tata("Safari",50000000);   
    return 0;
}
*/



#include <iostream>
using namespace std;
class info
{
    public:
    string name;
    int age;
    string gender;
    string working;

    info(string na,int a,string gen,string work)
    {
        name = na;
        age = a;
        gender = gen;
        working = work;
    }
    
    
    void printData()
    {
     cout<<"***"<<name<<"***"<<endl;
     cout<<"Age is "<<age<<endl;
     cout<<"Gender is "<<gender<<endl;
     cout<<"Working is "<<working<<endl;    
    }
};
int main()
{
    info Parth("Parth",21,"male","student");
    info Yash("Yash",20,"male","student");
    info Shrutika("Shrutika",21,"female","student");

    Yash.printData();
    return 0;
}