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
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli ara[n+1];
        f(i,n)
        {
            cin>>ara[i];
        }
        int cnt=0;
        f(i,n)
        {
            for(int j=ara[i]-i;j<=n;j+=ara[i])
            {
                if(j>0)
                {
                if((i+j)==(ara[i]*ara[j])&& (i<j))
                {
                    cnt++;
                }
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

