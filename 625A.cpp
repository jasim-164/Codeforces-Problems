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
    lli n,a,b,c;
    cin>>n>>a>>b>>c;
    lli rslt=0;
    if(b-c>=a)
    {
      rslt=n/a;
      cout<<rslt<<endl;
    }
    else{
        rslt=(n-c)/(b-c)+1;
    }
    cout<<rslt<<endl;
    return 0;
}
