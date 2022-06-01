#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define f(i,n) for(int i=0;i<n;i++)
const lli maxn=1000005;
vector<lli>v;
int main()
{
   lli t,m,n;
   cin>>t;
   while(t--)
   {
       cin>>n;
       lli ara[n+1];
       lli ans=0,max_=0,max_2=0,cur=0;
       f(i,n)
       {
           cin>>ara[i];
           cur+=ara[i];
           max_=max(max_,cur);
       }
       cin>>m;
       lli ara1[m+1];
       cur=0;
       f(i,m)
       {
           cin>>ara1[i];
           cur+=ara1[i];
           max_2=max(max_2,cur);
       }
       ans=max_+max_2;
       cout<<ans<<endl;
   }
    return 0;
}
