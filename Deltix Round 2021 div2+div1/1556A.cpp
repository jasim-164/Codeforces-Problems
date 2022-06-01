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
        lli c,d;
        cin>>c>>d;
        if(c==0 && d==0)
            cout<<"0"<<endl;
        else if(c==d)
        {
            cout<<"1"<<endl;
        }
        else
        {
            c%=2;
            d%=2;
            if(c==d)
                cout<<"2"<<endl;
            else
                cout<<"-1"<<endl;
        }
    }
    return 0;
}


