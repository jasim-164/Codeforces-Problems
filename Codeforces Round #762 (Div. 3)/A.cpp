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
       n=s.size();

       if(n==1)
       cout<<"NO"<<endl;
       else if(n%2)
        cout<<"NO"<<endl;
       else
       {
           bool b=true;
           for(int i=0;i<n/2;i++)
           {
               if(s[i]!=s[n/2+i])
               {
                   b=false;
                   break;
               }
           }
           if(b)
            cout<<"YES"<<endl;
           else
            cout<<"NO"<<endl;
       }
    }
    return 0;
}


