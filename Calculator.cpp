#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a,b;
    cout<<"Enter the two elements: ";
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    int act;
    cout<<"Enter the Action to be Performed : \n Addition = 1 \n Subraction = 2 \n Multiplication = 3 \n Division = 4 \n : ";
    cin>>act;
    cout<<act<<endl;;
    if(act==1)
    {
        cout<<"Addition of the given elements "<<a<<" and "<<b<<" is : "<<(a+b);
    }
    else if(act==2)
    {
        cout<<"Subraction of the given elements "<<a<<" and "<<b<<" is : "<<(a-b);
    }
    else if(act==3)
    {
        cout<<"Multiplicaton of the given elements "<<a<<" and "<<b<<" is : "<<(a*b);
    }
    else if(act==4)
    {
        cout<<"Division of the given elements "<<a<<" and "<<b<<" is : "<<(float)(a/b);
    }
    return 0; 
}