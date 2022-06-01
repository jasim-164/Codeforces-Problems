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
    int n,q;
    cin>>n>>q;
    int ara[n+1];
    int one=0,zero=0;
    f(i,n)
    {
        cin>>ara[i];
        if(ara[i]==1)
            one++;
        else
            zero++;

    }
    int t[q+1],x[q+1];
    f(i,q)
    {
        cin>>t[i]>>x[i];
    }
    f(i,q)
    {
        if(t[i]==2)
        {
            if(x[i]<=one)
            {
                cout<<"1"<<endl;
            }
            else if(x[i]<=one+zero)
            {
                cout<<"0"<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
        if(t[i]==1)
        {
            ara[x[i]-1]=1-ara[x[i]-1];
            if(ara[x[i]-1]==1)
            {
                one++;
                zero--;
            }
            else
            {
                one--;
                zero++;
            }
        }
    }
    return 0;
}
