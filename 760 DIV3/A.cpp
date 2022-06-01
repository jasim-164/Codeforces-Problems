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
int main()
{
    int t,n;

    cin>>t;
    while(t--)
    {

        lli ara[7];
        lli n=7;
        f(i,0,n-1)
        {
            cin>>ara[i];
        }
        lli val=ara[n-1]-(ara[0]+ara[1]);
        cout<<ara[0]<<" "<<ara[1]<<" "<<val<<endl;;

    }
    return 0;
}


