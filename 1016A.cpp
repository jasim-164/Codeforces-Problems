#include<bits/stdc++.h>
typedef long long int lli;
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
    lli n,m;
    cin>>n>>m;
    lli ara[n+1];
    int rslt=0;
    f(i,n)
    {
       cin>>ara[i];
    }
    f(i,n)
    {
       cout<<(ara[i]+rslt)/m<<" ";
       rslt=(ara[i]+rslt)%m;
    }
    return 0;
}
