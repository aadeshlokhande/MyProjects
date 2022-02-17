// #include<iostream>
// using namespace std;

// class Employee
// {
//     private:
//         int a, b, c;
//     public:
//         int d, e;
//         string name;
//         void setData(int a1, int b1, int c1); // Declaration
//         void getData();
        
// };

// void Employee :: setData(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }

// void Employee :: getData()
//         {
//             cout<<name<<" - The value of a is "<<a<<endl;
//             cout<<name<<" - The value of b is "<<b<<endl;
//             cout<<name<<" - The value of c is "<<c<<endl;
//             cout<<name<<" - The value of d is "<<d<<endl;
//             cout<<name<<" - The value of e is "<<e<<endl;
//         }

// int main()
// {
//     Employee piyush;
//     piyush.setData(15,26,48);
//     piyush.name = "Piyush";
//     piyush.d = 12;
//     piyush.e = 99;
//     piyush.getData();
//     cout<<endl;
//     Employee anjali;
//     anjali.name = "anjali";
//     anjali.d = 1;
//     anjali.e = 2;
//     anjali.setData(4,5,6);
//     cout<<anjali.d<<endl;
//     anjali.getData();
// }












// #include<iostream>
// using namespace std;
// void hello();

// int main()
// {
//     hello();
// }

// void hello()
// {
//     cout<<"Hello\n";
// }









// C++ program to demonstrate
// accessing of data members

// #include <bits/stdc++.h>
// using namespace std;
// class Geeks
// {
// 	// Access specifier
// 	public:

// 	// Data Members
// 	string geekname;

// 	// Member Functions()
// 	void printname()
// 	{
// 	    cout << "Geekname is: " << geekname;
// 	}
// };

// int main() 
// {

// 	// Declare an object of class geeks
// 	Geeks obj1;

// 	// accessing data member
// 	obj1.geekname = "Abhi";

// 	// accessing member function
// 	obj1.printname();

//     Geeks piyush;
//     piyush.geekname = "piyush kawale";
//     piyush.printname();
// 	return 0;
// }









// Cars 
//     brand name 
//     price 
//     milage 
//     fuel type
//     type car
// obj 
//     ecosport
//     audi x1 

    

// #include<iostream>
// using namespace std;

// class Boy
// {
//     private:
//         int a,b,c;
//     public: 
//         int d,e;
//         void valueLelo(int a1,int b1,int c1)
//         {
//             a = a1;
//             b = b1;
//             c = c1;
//         }

//         void Dederebaba()
//         {
//             cout<<"a = "<<a<<endl;
//             cout<<"b = "<<b<<endl;
//             cout<<"c = "<<c<<endl;
//             cout<<"d = "<<d<<endl;
//             cout<<"e = "<<e<<endl;
//         }

// };

// int main()
// {
//     Boy Darshan;
//     Darshan.d = 10;
//     Darshan.e = 20;
//     Darshan.valueLelo(11,22,33);
//     // cout<<Darshan.d<<endl;
//     // cout<<Darshan.e<<endl;
//     Darshan.Dederebaba();
// }




// #include<iostream>
// using namespace std;
// class Student
// {
//     int rollNumber;
//     string Name, subject;
//     public:
//         Student(int roll, string name, string sub)
//         {
//             rollNumber = roll;
//             Name = name;
//             subject = sub;

//         }

//         void printKro()
//         {
//             cout<<"Roll number = "<<rollNumber<<endl;
//             cout<<"Name  = "<<Name<<endl;
//             cout<<"Subject = "<<subject<<endl;
//         }
// };

// int main()
// {
//     Student vedant(101,"Vedant","C plus plus");
//     vedant.printKro();
// }

