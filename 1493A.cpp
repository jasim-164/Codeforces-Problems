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
 cin>>t;
 while(t--)
 {
        cin>>n>>k;

        for(int i=1;i<=n;i++)
        {
            int sum=0;
            for(int j=1;j<=n;j++)
            {
                sum+=j;
                if(sum==k)
                {

                }
            }
        }
 }

    return 0;
}

