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
      string s;
      cin>>s;
      lli n=s.size();
      lli cnt=0;
      for(int i=0;i<n;i++)
      {
          if(s[i]=='N')
            cnt++;
      }
      if(cnt==1)
      {

              cout<<"NO"<<endl;

      }
      else
      {
          cout<<"YES"<<endl;
      }
    }
    return 0;
}


