#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream lol("EvenOdd.cpp");
    lol<<"#include<iostream>\n";
    lol<<"using namespace std;\n";
    lol<<"int main()\n";
    lol<<"{\n";
    lol<<"\tint aadesh;\n";
    lol<<"\tcout<<\"enter a number = \";\n";
    lol<<"\tcin>>aadesh;\n";
    lol<<"\tif(aadesh==0)\n";
    lol<<"\t{\n";
    lol<<"\t\tcout<<\"Even Number\";\n";
    lol<<"\t}\n";

    for (int i =1; i<=10000; i++)
    {
        lol<< "\telse if(aadesh=="<<i<<")\n";
        lol<< "\t{\n";
        lol<< "\t\tcout<<\"Odd Number\";\n";
        lol<< "\t}\n";
        ++i;
        lol<< "\telse if(aadesh=="<<i<<")\n";
        lol<< "\t{\n";
        lol<< "\t\tcout<<\"Even Number\";\n";
        lol<< "\t}\n";
    }

    lol<<"\telse\n";
    lol<<"\t{\n";
    lol<<"\t\tcout<<\"Invalid number\";\n";
    lol<<"\t}\n";
    lol<<"\treturn 0;\n";
    lol<<"}\n";


    lol.close();
    return 0;
}