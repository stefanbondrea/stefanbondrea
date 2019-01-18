#include<iostream>
using namespace std;
int n,v[100],j,i;
int main ()
{
    int k,maxim=-10000000;
    cout<<"n=";cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    cout<<"Initial\n";
    for(i=n-1;i>=0;i--)
    {
        cout<<v[i]<<' ';
    }
    for(i=0;i<n;i++)
    {
        maxim=-10000000;
        for(j=1;j<n;j++)
        {
            if(maxim<v[j])
            {
                maxim=v[j];
                k=j;
            }
        }
        swap(v[i],v[k]);
    }
    cout<<"\nSortat\n";
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<' ';
    }
}
