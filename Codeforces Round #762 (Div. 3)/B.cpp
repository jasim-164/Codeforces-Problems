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
    lli t,n;

    cin>>t;
    while(t--)
    {
        cin>>n;
       lli val=1;
       lli  cnt=0;
       set<lli>s;
        lli i=1;
      while(i*i<=n)
      {
          lli val=i*i;
        s.insert(val);
         i++;
      }
       i=1;
        while(i*i*i<=n)
      {
         lli val=i*i*i;
         s.insert(val);
         i++;
      }
      cout<<s.size()<<endl;
    }
    return 0;
}


