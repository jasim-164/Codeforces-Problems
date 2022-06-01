#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        lli ara[n+1],sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
        }
        if(sum%n==0)
        {
            cout<<0<<endl;
        }
        else
        {
            int r=sum%n;
            cout<<r*(n-r)<<endl;
        }
    }
    return 0;
}
