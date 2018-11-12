#include<iostream>
using namespace std;
int main ()
{
     int a,b;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    if(a==b)
    {
        cout<<a;
        return 0;
    }
    if(a==0 || b==0)
    {
        if(a)
        {
            cout<<a;
            return 0;
        }
        else
        {
            cout<<b;
            return 0;
        }
    }
    while(a!=b)
    {
        if(a>b)
            a-=b;
        else
            b-=a;
    }
    cout<<a;
}




