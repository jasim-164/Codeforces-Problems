#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,a,b) for(int i=a;i<=b;i++)
const lli maxn=1000005;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        lli ara[n+1];
        map<lli,lli>mp;
        f(i,0,n-1)
        {
            cin>>ara[i];
            mp[ara[i]]=i;
        }
        sort(ara,ara+n);


        lli subarray=1;
        f(i,1,n-1)
        {
            if(mp[ara[i]]-mp[ara[i-1]]!=1)
            {
                subarray++;
            }
        }
        if(subarray<=k)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}


