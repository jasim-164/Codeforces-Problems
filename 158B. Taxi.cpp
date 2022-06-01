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
        lli sum=0;
        int cnt[5];
        memset(cnt,0,sizeof(cnt));
      f(i,n)
        {
            cin>>ara[i];
            cnt[ara[i]]++;
        }
        //sort(cnt,cnt+5);
        //cout<<cnt[1];
        sum+=cnt[4];
        sum+=cnt[3];
        sum+=cnt[2]/2;

        cnt[1]=max(0,(cnt[1]-cnt[3]));
        cnt[2]=cnt[2]%2;
        if(cnt[2]>0)
        {
         sum++;
         cnt[1]=max(0,cnt[1]-2);
        }
        sum+=cnt[1]/4;
        if(cnt[1]%4!=0)
            sum++;
        cout<<sum<<endl;
    return 0;
}

