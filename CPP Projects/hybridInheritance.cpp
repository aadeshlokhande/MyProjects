// A 
// B : A 
// C : A 
// D : A 
// E : B,C,D 
// F : E 
// G : F 
// H : F 
// I : G

#include<iostream>
using namespace std;

class A 
{
    public:
        void a()
        {
            cout<<"A\n";
        }
};

class B : public A 
{
    public:
        void b()
        {
            cout<<"B\n";
        }
};

class C : public A 
{
    public:
        void c()
        {
            cout<<"C\n";
        }
};

class D : public A 
{
    public:
        void d()
        {
            cout<<"D\n";
        }
};

class E : public B,public C,public D
{
    public:
        void e()
        {
            cout<<"E\n";
        }
};

class F : public E
{
    public:
        void f()
        {
            cout<<"F\n";
        }
};

class G : public F
{
    public:
        void g()
        {
            cout<<"G\n";
        }
};

class H : public F 
{
    public:
        void h()
        {
            cout<<"H\n";
        }
};

class I : public G
{
    public:
        void i()
        {
            cout<<"I\n";
        }
};

int main()
{
    // A a;
    // a.a();

    // B b;
    // b.a();
    // b.b();

    I i;
    // i.a();
    i.b();
    i.c();
    i.d();
    i.e();
    i.f();
    i.g();
    i.i();


}