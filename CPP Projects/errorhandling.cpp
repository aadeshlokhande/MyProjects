// error handling
// syntax error
// logical error

// try 
// throw
// catch


#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the two valus = ";
    cin>>a>>b;
    try
    {
        if(b!=0)
        {
            cout<<"answer = "<<a/b<<endl;
        }
        else 
        {
            throw(b);
        }
    }
    catch(int abc)
    {
        cout<<"not divisible by 0"<<endl<<"b = "<<abc;
    }
}