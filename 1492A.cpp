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
 lli t;
 cin>>t;

 while(t--)
 {
     lli y,p;
     cin>>p;
     lli  ans=1000000000000000000;
     for(int i=0;i<3;i++)
     {

         cin>>y;
         lli x=p%y;
         if(x!=0)
         x=(y-x);

         ans=min(ans,x);
     }
     //sort(ans,ans+4);
     cout<<ans<<endl;

 }

    return 0;
}
