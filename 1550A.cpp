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
        lli n,a,b;
        cin>>n;
        lli cnt=0,sum=0;
        for(lli i=1 ;; i+=2)
        {
            sum+=i;
            cnt++;
            if(sum>=n)
                break;

        }
        cout<<cnt<<endl;
    }
    return 0;
}

