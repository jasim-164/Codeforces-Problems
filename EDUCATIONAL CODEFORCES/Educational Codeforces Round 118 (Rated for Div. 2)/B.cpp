#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,a,b) for(int i=a;i<=b;i++)
#define mod 1000000007
#define inf 1e18
const lli maxn=1000005;
lli a[1000002];
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli ara[n+1];

        f(i,0,n-1)
        {
            cin>>ara[i];
            a[ara[i]]=i+1;

        }

        sort(ara,ara+n);
        for(int i=0;i<n/2;i++)
        {
         cout<<ara[i+1]<<" "<<ara[0]<<endl;
        }
    }
    return 0;
}



