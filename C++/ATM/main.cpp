#include<iostream>
#include<fstream>
using namespace std;

int readPin()
{
    int a;
    ifstream MyFile("pin.txt");
    MyFile>>a;
    MyFile.close();
    return a;
}

int readBal()
{
    int a;
    ifstream MyFile("bal.txt");
    MyFile>>a;
    MyFile.close();
    return a;
}

void writePin(int a)
{
    ofstream MyFile("pin.txt");
    MyFile<<a;
    MyFile.close();
}

void writeBal(int a)
{
    ofstream MyFile("bal.txt");
    MyFile<<a;
    MyFile.close();
}

int main()
{
    int pin,bal,upin,npin,cpin,amount,choice;
    cout<<"Press 1 : withdraw\n";
    cout<<"Press 2 : Check balance\n";
    cout<<"Press 3 : change pin\n";
    cout<<"Press 4 : Deposite\n";
    cout<<"Enter your choice = ";
    cin>>choice;

    if(choice==1)
    {
        cout<<"enter your pin = ";
        cin>>upin;
        pin = readPin();

        if(pin==upin)
        {
            cout<<"enter a amount = ";
            cin>>amount;
            bal = readBal();
            if(amount<bal)
            {
                bal = bal-amount;
                writeBal(bal);
                cout<<"Transaction successfull\n";
                cout<<"current bal = "<<bal<<endl;
            }
            else
            {
                cout<<"insuficient Balance\n";
            }
        }
        else
        {
            cout<<"wrong pin\n";
        }
    }
    else if(choice==2)
    {
        cout<<"enter your pin = ";
        cin>>upin;
        pin = readPin();

        if(pin==upin)
        {
            bal = readBal();
            cout<<"current bal = "<<bal<<endl;
        }
        else
        {
            cout<<"wrong pin\n";
        }
    }
    else if(choice==3)
    {
        cout<<"enter your pin = ";
        cin>>upin;
        pin = readPin();

        if(pin==upin)
        {
            cout<<"Enter your new pin = ";
            cin>>npin;
            cout<<"Confirm your pin = ";
            cin>>cpin;
            if(npin==cpin)
            {
                writePin(npin);
                cout<<"pin changed successfully\n";
            }
            else
            {
                cout<<"pin doesn't match\n";
            }
        }
        else
        {
            cout<<"wrong pin\n";
        }
    }
    else if(choice==4)
    {
        cout<<"enter your pin = ";
        cin>>upin;
        pin = readPin();

        if(pin==upin)
        {
            cout<<"Enter a amount = ";
            cin>>amount;
            bal = readBal();
            bal = amount + bal;
            writeBal(bal);
            cout<<"current bal = "<<bal;
        }
    }
    cout<<"********* Thanks for using our service **********\n";
}