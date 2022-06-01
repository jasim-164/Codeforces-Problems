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
      /*if(n%2)
      {
       cout<<"NO"<<endl;
       continue;
      }*/

      lli cntA=0,cntB=0,cntC=0;
      f(i,0,n-1)
      {
          if(s[i]=='A')cntA++;
          else if(s[i]=='B')cntB++;
          else cntC++;
      }
      if(cntB==(cntA+cntC))
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }

    }
    return 0;
}


