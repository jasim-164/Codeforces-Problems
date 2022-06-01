

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,a,b) for(lli i=a;i<=b;i++)
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
        int r=0,c=0;
       // f(i,1,31700)
      /* for(lli i=1;i<=40700;i++)
        {
           lli val=i*i;
           if(val >=n && (val-i+1)<=n)
           {
               r=i;
               c=val-n;
               break;
           }
        }*/
           for(lli i=1;i<=31700;i++)
           {
            lli val=i*i;
            lli low_val=val-i+1;
            lli c_val=low_val-i+1;
           if(val >=n && (val-i+1)<=n)
           {
               r=i;
               c=val-n+1;
               break;
           }
           else if(c_val<=n && (val-i)>=n)
           {
               c=i;
               r=n-c_val+1;
               break;
           }
           }

        cout<<r<<" "<<c<<endl;
    }
    return 0;
}


