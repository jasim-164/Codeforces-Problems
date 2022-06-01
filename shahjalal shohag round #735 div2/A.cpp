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
    lli t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli ara[n+1];
        //lli max_=INT_MAX;
        lli min_=INT_MIN;
         for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if(ara[i]*ara[i+1]>=min_)
            {
                min_=ara[i]*ara[i+1];
            }

        }
        cout<<min_<<endl;
    }
    return 0;
}

