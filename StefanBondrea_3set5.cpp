#include<iostream>
using namespace std;
int main()
{
    int n,biti=0,a;
    cout<<"n=";cin>>n;
    a=n;
    if(n==0)
    {
        biti=1;
        return 0;
    }
    if(n>=0)
    {
        while(n>0)
        {
            n=n>>1;
            biti++;
        }
    }
    else
        if(n==-1)
        {
            biti=1;
            return 0;
        }
        else
            while(n<-1)
        {
            n=n>>1;
            biti++;
        }
        if(a<0)
            a=-a;
        for(int i=1;i<=biti;i++)
        {
            n=a;
            n=n<<(32-i);
            n=n>>31;
            if(n==-1)
                n=1;
            cout<<n<<endl;
        }
}
