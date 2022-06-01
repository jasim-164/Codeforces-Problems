#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define f(i,n) for(int i=0;i<n;i++)
const lli maxn=1000005;
vector<lli>v;
int main()
{
    lli t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        lli ara[n+1][m+1];
        lli cnt=0,sum=0,min_=INT_MAX;
        f(i,n)
        {
            f(j,m)
            {
                cin>>ara[i][j];
                if(ara[i][j]<0)cnt++;
                sum+=abs(ara[i][j]);
                min_=min(min_,abs(ara[i][j]));
            }
        }
        if(cnt%2==0)cout<<sum<<endl;
        else cout<<sum-2*min_<<endl;
    }
}
