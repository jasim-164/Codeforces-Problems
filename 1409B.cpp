#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=0;i<n;i++)
const lli maxn=1000005;
lli func(lli a,lli b,lli x,lli y,lli n)
{
     lli rslt=min(a-x,n);
     a-=rslt;
     n-=rslt;
     rslt=min(b-y,n);
     b-=rslt;
     n-=rslt;
     return a*b;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
     lli a,b,x,y,n;
     cin>>a>>b>>x>>y>>n;
     lli r1=func( a, b, x, y, n);
     lli r2=func( b, a, y, x, n);
     cout<<min(r1,r2)<<endl;

    }
    return 0;
}

