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
        int a,b;
        cin>>a>>b;
        int m=min(a,b);
        int val=(a+b)/4;
        if(m-val>=0)
            cout<<val<<endl;
        else
        {
            cout<<m<<endl;
        }


    }
    return 0;
}



