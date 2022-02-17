#include<iostream>
using namespace std;
int main()
{
    int num;
    string aa;
    string c;
    char a[6]={'a','e','i','o','u','\0'};
    char b;
    int check;
    cout<<"press 1: converted small char to capital char"<<endl;
    cout<<"press 2: converted capital char to small char"<<endl;
    cout<<"press 3: find out vowel or consonant"<<endl;
    cout<<"enter your choice=";
    cin>>num;
    switch(num)
    {
        case 1:
       
        char h;
        cout<<"enter a string=";
        cin>>aa;
        for(int i=0;i<aa.size();i++)
        {
            if((aa[i]>=97)&&(aa[i]<=122))
            {
                cout<<char (aa[i]-32); 
            }
        }
        break;

        case 2:
        char g;
        cout<<"enter a string=";
        cin>>c;
        for(int i=0;i<c.size();i++)
        {
            if((c[i]>=65)&&(c[i]<=90))
            {
                cout<< char (c[i]+32);
            }
        }
        break ;
    
        case 3:
        
        cout<<"enter a string=";
        cin>>b;
        for(int i=0;i<6;i++)
        {
            if(a[i]==b)
            {
                check=1;
            }
        }
     
        if(check==1)
        {
            cout<<"vowel";
        }
        else
        {
            cout<<"consonant";
        }
        break;
    }
    return 0;
}