#include<iostream>
using namespace std;
int main ()
{
    int a=0,b=0,c=0,x,n;
    cout<<"n=";cin>>n;
    for(x=1;x<=n;x++)
    {
        cout<<"a=";cin>>a;
        b=c;
        if(a==b)
        {
            c=a;
        }
        else
            if(a==0 || b==0)
            {
                if(a)
                {
                    c=a;
                }
                else
                {
                    c=b;
                }
            }
            else
                while(a!=b)
            {
                if(a>b)
                    a-=b;
                else
                    b-=a;
            }
            c=a;
    }
    cout<<a;
    return 0;
}
