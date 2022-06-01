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
    lli t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli ara[n+1];
        f(i,n)
        {
         cin>>ara[i];
        }
        sort(ara,ara+n);

        lli cnt=0,m=0,max_=INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            if(ara[i+1]>ara[i])
            {
                cnt++;
                ara[i+1]=ara[i+1]+1;
            }
            else if(ara[i+1]<ara[i])
            {
                cnt++;
                ara[i+1]=ara[i]+1;
            }
        }
        cout<<cnt<<endl;
        /*f(i,n)
        {
            m=ara[i];
            lli cnt=0;
            f(j,n)
            {
                if(i!=j)
                {
               if(m!=ara[j])
               {
                   m=max(m,ara[j]);
                   m++;
                   cnt++;
               }
                }
            }
            max_=max(cnt,max_);
        }
        cout<<max_<<endl;*/
    }

    return 0;
}
