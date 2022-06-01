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
      cin>>n;
      string s;
      cin>>s;
        f(i,0,n-1)
        {
           if(s[i]=='U')
           {
               s[i]='D';
               continue;
           }
            if(s[i]=='D')
           {
               s[i]='U';
               continue;
           }
        }
        cout<<s<<endl;
    }
    return 0;
}


