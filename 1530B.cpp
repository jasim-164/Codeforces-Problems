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
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int ara[n+1][m+1];
        memset(ara,0,sizeof(ara));
        int flag=1;
       //1st row
        for(int i=1;i<=m;i++)
        {
            ara[1][i]=flag;
            flag=1-flag;
        }
         //last row
        flag=1;
        for(int i=1;i<=m;i++)
        {
            ara[n][i]=flag;
            flag=1-flag;
        }
        flag=1;
        for(int i=3;i<=n-2;i++)
        {
            ara[i][1]=flag;
            flag=1-flag;
        }
        flag=1;
        for(int i=3;i<=n-2;i++)
        {
            ara[i][m]=flag;
            flag=1-flag;
        }
           for(int i=1;i<=n;i++)
           {
               for(int j=1;j<=m;j++)
               {
                   cout<<ara[i][j];
               }
               cout<<endl;
           }
           cout<<endl;
    }
    return 0;
}

