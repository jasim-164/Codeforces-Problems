#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=0;i<n;i++)
const lli maxn=1000005;
map<lli,lli>mp;

/*lli power(lli i)
{
    return i*i*i;
}*/
void fnc()
{
    for(lli j=1;j<=10000;j++)
    {
       lli q=j*j*j;
       mp[q]=1;
    }
    return;
}

int main()
{
   lli t,n;
   cin>>t;
   fnc();
   while(t--)
   {
       cin>>n;
       lli t=0,p,q;
       for(lli i=1;(i*i*i)<n;i++)
       {
         p=i*i*i;
         lli s=n-p;
         if(mp[s]==1)
         {
              cout<<"YES"<<endl;
                t=1;
                break;
         }
       }
       if(t!=1)cout<<"NO"<<endl;
   }

    return 0;
}

