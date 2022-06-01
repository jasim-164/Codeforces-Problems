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
        //cin>>n;
        int n=3;
        lli ara[n+1];
        lli max_=INT_MIN;
        lli min_=INT_MAX;
        lli b[4];
        f(i,0,n-1)
        {
            cin>>ara[i];
            b[i]=ara[i];
            if(ara[i]>max_)
                max_=ara[i];
            if(ara[i]<min_)
                min_=ara[i];
        }
        sort(ara,ara+n);
        bool bo=false;
        int val;
          f(i,0,1)
        {
            if(ara[i]==ara[i+1])
            {
                bo=true;
                val=ara[i];
            }
        }
        if(val==max_)
        {
            f(i,0,n-1)
            {
               // if(max_==b[i])
                cout<<max_-b[i]+1<<" ";
            }
            cout<<endl;
        }
        else
        {
            f(i,0,n-1)
            {
                if(max_==b[i])
                cout<<0<<" ";
                else
                {
                    cout<<max_-b[i]+1<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}


