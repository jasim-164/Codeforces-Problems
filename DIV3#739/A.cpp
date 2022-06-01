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
  int t,k;
  int ara[10000];
  int j=1;
  for(int i=1;i<10000;i++)
  {
     if(i%3!=0)
     {
        int r=i%10;
         if(r!=3)
         {
             ara[j]=i;
             j++;
         }
     }
  }
    cin>>t;
    while(t--)
    {
        cin>>k;
        cout<<ara[k]<<endl;
    }
    return 0;
}


