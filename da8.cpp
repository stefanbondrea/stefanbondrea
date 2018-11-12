#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int a=1,n,x,b=3,g,cz;
    cout<<"n=";cin>>n;
    cout<<2<<' ';
    while(a<n)
    {
        cz=1;
        x=3;
        g=(int)sqrt(b)+1;
        if(x*x==b)
            cz=0;
        else
            while(x<b)
            {
                if(b%x==0)
                {
                    x=b;
                    cz=0;
                }
                x+=2;
            }
            if(cz==1)
            {
                cout<<b<<' ';
                a++;
            }
            b+=2;
    }
}
