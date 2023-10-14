#include<iostream>
using namespace std;
float p, r, t, amount, si, ci;
int simple_intrest(float x, float y, float z)
    {
        si=(x*y*z)/100;
        amount=x+si;
    }
int main()
{
    int in;
    
    cout<<"\t\t\t-------------------------\n";
    cout<<"\t\t\t MULTIPURPOSE CALCULATOR \n\t\t\t-------------------------\n";                            //  \t is used for giving a tab space
    cout<<"You Can Perform Any Of These Functions... \nEnter Your Choice"<<endl;
    cout<<"[1--> Simple Calculations]\t[2--> Simple Intrest]\t   [3--> Compound Intrest]"<<endl;
    cout<<"[] \t [] \t []"<<endl;
    cin>>in;
    switch(in)
    {
        case 1:
        {
            
        }
        case 2:
        {
            cin>>p>>r>>t;
            simple_intrest(p,r,t);
            cout<<si<<endl;
            cout<<amount;
        }
        case 3:
        {

        }
        case 4:
        {
            
        }
        case 5:
        {

        }
        case 6:
        {
            
        }
    }
    
    
}