// array in class

#include<iostream>
using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
    void initCounter()
    {
        counter = 0;
    }
    void setPrice()
    {
        cout<<"Enter ID of your item no = ";
        cin>>itemId[counter];
        cout<<"Enter Price of your item = ";
        cin>>itemPrice[counter];
        counter++;
    }
    void displayPrice()
    {
        for(int i=0; i<counter;i++)
        {
            cout<<"id="<<itemId[i]<<"price = "<<itemPrice[i]<<endl;
        }
    }
};

int main()
{
    Shop lokhnde;
    lokhnde.initCounter();
    lokhnde.setPrice();
    lokhnde.setPrice();
    lokhnde.setPrice();
    lokhnde.setPrice();
    lokhnde.setPrice();
    lokhnde.displayPrice();
    return 0;
}