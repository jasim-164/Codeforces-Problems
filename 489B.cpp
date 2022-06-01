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
        cin>>n;
        lli a[n+1];
        f(i,n)
        {
            cin>>a[i];
        }
        cin>>m;
        int b[m+1];
        int dp[m+1];
           f(i,m)
        {
            cin>>b[i];
            dp[i]=1;
        }
        int cnt=0;
        sort(a,a+n);//onner hok mere daoyar jonne sort use korsi
        sort(b,b+m);//onner hok mere daoyar jonne sort use korsi
        f(i,n)
        {
            f(j,m)
            {
                if(dp[j])
                {
                if(abs(a[i]-b[j])<=1)
                {
                    cnt++;
                    dp[j]=0;
                    a[i]=-1;
                }
                }
                if(a[i]==-1)
                {
                    break;
                }

            }
        }
        cout<<cnt<<endl;




    return 0;
}
