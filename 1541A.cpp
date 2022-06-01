#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=0;i<n;i++)
const lli maxn=1000005;
int ara[105];
int main()
{
    int t,n;
    cin>>t;
    //memset(ara,0)
    while(t--)
    {
        cin>>n;
       for(int i=1;i<=100;++i)
       {
        ara[i]=i;
       }
        if(n%2==0)
        {
        for(int i=1;i<=n;i+=2)
        {
            swap(ara[i],ara[i+1]);
        }
        for(int i=1;i<=n;i++)
            cout<<ara[i]<<" ";
        cout<<endl;
        }
        else{
                int i;
        for( i=1;i<=n;i+=2)
        {
            if(i==n)break;
            swap(ara[i],ara[i+1]);
        }
        swap(ara[i],ara[i-1]);
         for(int i=1;i<=n;i++)
            cout<<ara[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}

