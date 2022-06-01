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
        cin>>n;
        int rslt=(360%(180-n));
        if(rslt)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}

