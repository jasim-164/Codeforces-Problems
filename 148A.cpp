#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int ara[d+1];
    for(int i=1;i<=d;i++)ara[i]=0;
    for(int i=k;i<=d;i+=k)
    {
        if(ara[i]==0)
        ara[i]=1;
    }
     for(int i=l;i<=d;i+=l)
    {
        if(ara[i]==0)
        ara[i]=1;
    }

     for(int i=m;i<=d;i+=m)
    {
        if(ara[i]==0)
        ara[i]=1;
    }
     for(int i=n;i<=d;i+=n)
    {
        if(ara[i]==0)
        ara[i]=1;
    }
    int cnt=0;
    for(int i=1;i<=d;i++)
    {
        if(ara[i])cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
