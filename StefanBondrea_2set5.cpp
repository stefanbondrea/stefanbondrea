#include<iostream>
using namespace std;
int main ()
{
    int n,biti=0;
    cout<<"n=";cin>>n;
    if(n==0)
        cout<<"1";
        else
    {
        if(n>0)
        {
            while(n!=0)
            {
                n=n>>1;
                biti++;
            }
        }
        else
            while(n<-1)
        {
            n=n>>1;
            biti++;
        }
    }
    cout<<biti;
    return 0;
}

