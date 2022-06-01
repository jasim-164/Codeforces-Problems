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
        int n,l,r,k;

        cin>>n>>l>>r>>k;
        lli ara[n+1];
        f(i,0,n-1)
        {
            cin>>ara[i];
        }
        sort(ara,ara+n);
        int cnt=0,sum=0;
        f(i,0,n-1)
        {
            if(ara[i]<l)
                continue;
            else if(ara[i]>r)
                break;
            else
            {
                if(sum+ara[i]<=k)
                {
                    sum+=ara[i];
                    cnt++;
                }
                else
                {
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}


