#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(true)
    {
        cout<<"Enter the two elements: ";
        cin>>a>>b;
        cout<<a<<" "<<b<<endl;
        int act;
        cout<<"Enter the Action to be Performed : \n Addition = 1 \n Subraction = 2 \n Multiplication = 3 \n Division = 4 \n: ";
        cin>>act;
        cout<<act<<endl;
        if(act==1)
        {
            cout<<"Addition of the given elements "<<a<<" and "<<b<<" is : "<<(a+b)<<endl;
        }
        else if(act==2)
        {
            cout<<"Subraction of the given elements "<<a<<" and "<<b<<" is : "<<(a-b)<<endl;
        }
        else if(act==3)
        {
            cout<<"Multiplicaton of the given elements "<<a<<" and "<<b<<" is : "<<(a*b)<<endl;
        }
        else if(act==4)
        {
            cout<<"Division of the given elements "<<a<<" and "<<b<<" is : "<<(float)(a/b)<<endl;
        }
        int close;
        cout<<"Do you want to end the session ?\n  Yes = 1 \n No = 0 \n";
        cin>>close;
        if(close==1)
        {
            break;
        }
    }
    return 0;
}
