// // distructor

// #include<iostream>
// using namespace std;
// class Greet
// {
//     public:
//     string name;
//     Greet(string na)
//     {
//         name = na;
//         cout<<"Hello "<<name<<endl;
//     }

//     ~Greet()
//     {
//         cout<<"Bye Bye "<<name<<endl;   
//     }
// };


// int main()
// {
//     Greet obj1("obj1");
//     {
//         Greet obj2("obj2");
//         {
//             Greet obj3("obj3");
//             {
//                 Greet obj4("obj4");
//             }
//             Greet obj5("obj5");
//         }
//     }
//     Greet obj6("obj6");
//     return 0;
// }


// =======================================


#include<iostream>
using namespace std;
class chess
{
    private:
    int age,rating;
    public: 
    chess(int a,int b)
    {
        age= a;
        rating= b;
        
    }
    ~chess()
    {
        cout<<"age and rating data destroyed";
    }
};
int main()
{
    chess obj1(10,90);
}