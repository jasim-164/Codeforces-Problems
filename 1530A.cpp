
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
        lli m=INT_MIN;
        while(n!=0)
        {
            m=max(m,n%10);
            n/=10;
        }
        cout<<m<<endl;
    }
    return 0;
}
