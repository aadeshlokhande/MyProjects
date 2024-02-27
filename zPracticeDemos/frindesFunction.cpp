// friend function

//     3+8i
//  +  4+7i
//  --------------
//     7+15i 

#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b;
        friend Complex add(Complex o1, Complex o2);
    public:
        void getData(int a1,int b1)
        {
            a = a1;
            b = b1;
        }

        void printComplex()
        {
            cout<<a<<" + "<<b<<" i\n";
        }
};

Complex add(Complex o1, Complex o2)
{
    Complex ans;
    ans.getData(o1.a + o2.a, o1.b + o2.b);
    return ans;
}

int main()
{
    Complex eq1;
    eq1.getData(2,5);
    eq1.printComplex();

    Complex eq2;
    eq2.getData(3,7);
    eq2.printComplex();

    Complex answer;
    answer = add(eq1,eq2);
    answer.printComplex();
    return 0;
}