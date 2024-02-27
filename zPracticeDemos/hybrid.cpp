// #include<iostream>
// using namespace std;

// class GetAB
// {
//     public:
//         int num1,num2;
//         void getdata()
//         {
//             cout<<"Enter a number = ";
//             cin>>num1;
            
//             cout<<"Enter a number = ";
//             cin>>num2;
//         }
// };

// class Add : public GetAB
// {
//     public:
//         void add()
//         {
//             cout<<num1+num2<<endl;
//         }
// };

// class Sub : public GetAB
// {
//     public:
//         void sub()
//         {
//             cout<<num1-num2<<endl;
//         }
// };




// int main()
// {
//     // GetAB obj1;
//     // obj1.getdata();

//     Add obj2;
//     // obj2.num1 = 10;
//     // obj2.num2 = 20;
//     obj2.getdata();
//     obj2.add();

//     Sub obj;
//     obj.getdata();
//     obj.sub();
// }

// =====================================================

// hybrid inheritance



#include<iostream>
using namespace std;

class A
{
    public:
        A()
        {
            cout<<"A"<<endl;
        }
};

class B : public A
{
    public:
        B()
        {
            cout<<"B"<<endl;
        }
        B(int a)
        {
            cout<<"hello"<<endl;
        }
};

class C : public A
{
    public:
        C()
        {
            cout<<"C"<<endl;
        }
};

class D : public A
{
    public:
        D()
        {
            cout<<"D"<<endl;
        }
};

class E : public B , public D
{
    public:
        E()
        {
            cout<<"E"<<endl;
        }
};

class F : public C
{
    public:
        F()
        {
            cout<<"F"<<endl;
        }
};

class G : public D , public F
{
    public:
        G()
        {
            cout<<"G"<<endl;
        }
};

class H : public G
{
    public:
        H()
        {
            cout<<"H"<<endl;
        }
};

class I : public G
{
    public:
        I()
        {
            cout<<"I"<<endl;
        }
};

class J  : public G
{
    public:
        J()
        {
            cout<<"J"<<endl;
        }
};

class K : public H , public I
{
    public:
        K()
        {
            cout<<"K"<<endl;
        }
};



int main()
{
    cout<<"qualities of A"<<endl;
    A ob1;
    cout<<"qualities of B"<<endl;
    B ob2;
    cout<<"qualities of C"<<endl;
    C ob3;
    cout<<"qualities of D"<<endl;
    D ob4;
    cout<<"qualities of E"<<endl;
    E ob5;
    cout<<"qualities of F"<<endl;
    F ob6;
    cout<<"qualities of G"<<endl;
    G ob7;
    cout<<"qualities of H"<<endl;
    H ob8;
    cout<<"qualities of I"<<endl;
    I ob9;
    cout<<"qualities of J"<<endl;
    J ob10;
    cout<<"qualities of K"<<endl;
    K ob11;
}