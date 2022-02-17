// 3P
// public private protected

// #include<iostream>
// using namespace std;

// class abc
// {
//     private:
//         int d,e;
//     protected:
//         int f,g;
//     public:
//         int a,b,c;
//         void function(int f1,int f2)
//         {
//             d = f1;
//             e = f2;
//         }

//         void printFun()
//         {            
//             cout<<"a = "<<a<<endl;
//             cout<<"b = "<<b<<endl;
//             cout<<"c = "<<c<<endl;
//             cout<<"d = "<<d<<endl;
//             cout<<"e = "<<e<<endl;  
//         }
// };
// class xyz : public abc 
// {
//     public:
//         void pp()
//         {
//             cout<<"Hello world";
//         }
// };

// int main()
// {
//     abc z;
//     z.a = 10;
//     z.b = 30;
//     z.c = 20;
//     z.function(23,52);
//     z.printFun();
// }
// ======================================



// #include<iostream>
// using namespace std;
// class abc
// {
//     private:
//         int pri;
//     protected:
//         int pro;
//     public:
//         int pub;
// };

// class xyz : protected abc 
// {
//     public:
//         void pp()
//         {
//             cout<<"Hello world";
//         }
// };

// int main()
// {
//     xyz a1;
    // a1.pri;
    // a1.pro;
    // a1.pub;
// }



// polymorphism 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x,y;
//     cout<<"Enter the value of x = ";
//     cin>>x;
//     cout<<"Enter the value of y = ";
//     cin>>y;
//     cout<<x+y<<endl;
//     return 0;
// }



// error handling
#include<iostream>
using namespace std;
int main()
{
    try 
    {
        int age = 15;
        if (age >= 18) 
        {
            cout << "Access granted - you are old enough.";
        } 
        // else 
        // {
        //     throw (age);
        // }
    }
    // catch () 
    catch (int myNum) 
    {
        cout << "Access denied - You must be at least 18 years old.\n";
        // cout << "Age is: " << myNum;
    }
}