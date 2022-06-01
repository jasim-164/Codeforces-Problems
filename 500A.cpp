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
        int t,n;

        cin>>n>>t;
        lli ara[n+1];
        vector<int>v;
        for(int i=1;i<n;i++)
        {
            cin>>ara[i];
        }
           for(int i=1;i<n;i++)
           {
               if(ara[i]>=1&&ara[i]<=n-i)
               {
                   //v.push_back(i);
                   i=(i+ara[i]);
                   if(i==t)
                   {
                       cout<<"YES"<<endl;
                       return 0;
                   }
                   i--;
               }
           }
           cout<<"NO"<<endl;

    return 0;
}

