// #include<iostream>
// using namespace std;

// class Employee
// {
//     private:
//         int a, b, c;
//     public:
//         int d, e;
//         void setData(int a1, int b1, int c1); // Declaration
//         void getData()
//         {
//             cout<<"The value of a is "<<a<<endl;
//             cout<<"The value of b is "<<b<<endl;
//             cout<<"The value of c is "<<c<<endl;
//             cout<<"The value of d is "<<d<<endl;
//             cout<<"The value of e is "<<e<<endl;
//         }
// };

// void Employee :: setData(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main()
// {
//     Employee piyush;
//     piyush.setData(15,26,48);
//     piyush.d = 12;
//     piyush.e = 99;
//     piyush.getData();
//     cout<<endl;
//     Employee anjali;
//     anjali.d = 1;
//     anjali.e = 2;
//     anjali.setData(4,5,6);
//     anjali.getData();
// }




#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        string name;
        void setData(int a1, int b1, int c1); // Declaration
        void getData()
        {
            cout<<name<<" - The value of a is "<<a<<endl;
            cout<<name<<" - The value of b is "<<b<<endl;
            cout<<name<<" - The value of c is "<<c<<endl;
            cout<<name<<" - The value of d is "<<d<<endl;
            cout<<name<<" - The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee piyush;
    piyush.setData(15,26,48);
    piyush.name = "Piyush";
    piyush.d = 12;
    piyush.e = 99;
    piyush.getData();
    cout<<endl;
    Employee anjali;
    anjali.name = "anjali";
    anjali.d = 1;
    anjali.e = 2;
    anjali.setData(4,5,6);
    anjali.getData();
}