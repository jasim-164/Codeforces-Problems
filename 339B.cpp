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
        int n,m;
        cin>>n>>m;
        lli ara[m+1];
        f(i,m)
        {
            cin>>ara[i];
        }
        lli dis=ara[0]-1;
        for(int i=1;i<m;i++)
        {
            if(ara[i]>=ara[i-1])
            {
                dis+=ara[i]-ara[i-1];
            }
            else{
                dis+=(n-ara[i-1])+ara[i];
            }
        }
        cout<<dis<<endl;

    return 0;
}

