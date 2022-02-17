#include<iostream>
using namespace std;
//call by value - not working to swap 2 number
// void swap(int a,int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

//call by referance - this is working
void swapRef(int* a,int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10,b = 20;
    cout<<"a = "<<a<<" & b = "<<b<<endl;
    // swap(a,b);       //call by value - not working to swap 2 number
    swapRef(&a,&b);
    cout<<"a = "<<a<<" & b = "<<b<<endl;
}


// opps 
// class 
// object 
// inheritance
// polimorphism 
// encapsulation - abstract


