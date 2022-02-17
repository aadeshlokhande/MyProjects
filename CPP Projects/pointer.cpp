#include<iostream>
using namespace std;
int main()
{
    int var = 10;
    int* pointer = &var;
    cout<<"address of var = "<<pointer<<endl;
    cout<<"value of var = "<<var<<endl;
    cout<<"address of var = "<<&var<<endl;
    cout<<"value of var = "<<*pointer<<endl;
    cout<<"value of var = "<<*&pointer<<endl;

    int** ptr;
    ptr = &pointer;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr<<endl;

    int*** p;
    p = &ptr;
    cout<<"address of p = "<<&p<<endl;
    cout<<"value of p = "<<p<<endl;
    cout<<"value of *p = "<<*p<<endl;
    cout<<"value of **p = "<<**p<<endl;
    cout<<"value of ***p = "<<***p<<endl;
    return 0;
}



