#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,a,b) for(int i=a;i<=b;i++)
#define mod_ 1000000007
#define inf 1e18
const lli maxn=1000005;
int main()
{
    int t,n;

    cin>>t;
    while(t--)
    {
        lli l,r;
        cin>>l>>r;
        if(l==r)
        {
            cout<<"0"<<endl;
        }
        else
        {
            lli mod=((r+1)/2);
            if(l>mod)
            {
                cout<<r%l<<endl;
            }
            else{
                if(r%2!=0)
                cout<<r%(mod)<<endl;
                else
                    cout<<r%(mod+1)<<endl;
            }
        }

    }
    return 0;
}


