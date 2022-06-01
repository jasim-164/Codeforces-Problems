#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=1;i<=n;i++)
const lli maxn=1000005;
int main()
{
        int t,n;
        cin>>n;
        lli ara[n+1];
        f(i,n)
        {
            cin>>t;
            ara[t]=i;
        }
        /*bool test[n+1];
        memset(test,1,sizeof(test));
      f(i,n)
        {
            if(test[i]==1&&test[test[i]]==1)
            {
               swap(ara[i],ara[ara[i]]);
               test[i]=0;
               test[test[i]]=0;
            }
        }*/


         f(i,n)
        {
            cout<<ara[i]<<" ";
        }
    return 0;
}

