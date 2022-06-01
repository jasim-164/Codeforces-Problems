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
        lli a,b,c;
        cin>>a>>b>>c;

        if(abs(a-b)==1)
        {
            cout<<"-1"<<endl;
            continue;
        }
        else
        {
            lli max_=max(a,b);

            lli val = abs(a-b);
            if(max_>val*2)
            {
                cout<<"-1"<<endl;
                continue;
            }
            if(c<=val*2)
            {
                if(c+val>=1 &&c+val<=val*2)
                {
                    cout<<c+val<<endl;
                    continue;
                }
                else
                {
                    cout<<c-val<<endl;
                    continue;
                }
            }
            else
            {
                cout<<"-1"<<endl;
                continue;
            }


        }
    }
    return 0;
}


