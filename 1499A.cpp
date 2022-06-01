#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=0;i<n;i++)
const lli maxn=1000005;
int main()
{
    int t,n,k1,k2;
    cin>>t;
    while(t--)
    {
        cin>>n>>k1>>k2;
        int w,b;
        cin>>w>>b;
        int rslt=k1+k2;
        int black=2*n-rslt;
        int white=rslt;
        if(white/2>=w&&black/2>=b)
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

