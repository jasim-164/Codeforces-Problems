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
       lli l,r;
       lli cnt=0;
       cin>>l>>r;
       lli p=1;
       while(p<=r)
       {
           p*=2;
           if(p>l && p<=r)
           {
               cnt++;
           }
       }
          cout<<cnt<<endl;
    }

    return 0;
}


