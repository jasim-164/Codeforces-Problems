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
   lli t,n;
   cin>>t;
   while(t--)
   {
       cin>>n;
       lli ara[n+1];
       f(i,n)
       {
           cin>>ara[i];
       }
       lli cnt=0;
         for(int i=0;i<n-1;i++)
       {
           lli m=max(ara[i],ara[i+1]);
           lli n=min(ara[i],ara[i+1]);
           double p=(m*1.0)/n;
           if(p>2.0)
           {
               //cout<<"i"<<i<<endl;
               while((m*1.0)/n>2.0)
               {
                   if(m%2==0)
                   {
                   m=m/2;
                   cnt++;
                   }
                   else
                   {
                   m=m/2+1;
                   cnt++;
                   }
               }
           }
       }
       cout<<cnt<<endl;
   }
    return 0;
}
