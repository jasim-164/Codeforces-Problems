#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
   lli n,k,x,cnt=0;
   cin>>n>>k>>x;
   lli ara[n+1];
   for(int i=0;i<n;i++)
   {
       cin>>ara[i];
   }
   sort(ara,ara+n);
   vector<lli>v;
   for(int i=1;i<n;i++)
   {
       if(ara[i]-ara[i-1]>x)
       {
           cnt++;
           v.push_back(ara[i]-ara[i-1]-1);
       }
   }
   //cout<<cnt<<endl;
   int len=v.size();
   sort(v.begin(),v.end());
   for(int i=0;i<len;i++)
   {
       if(k>0 && v[i]/x<=k)
       {
           k-=(v[i]/x);
           cnt--;
       }
       else
        break;
   }
   cout<<cnt+1<<endl;

    return 0;
}
