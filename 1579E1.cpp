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

        cin>>n;

        lli ara[n+1];
        f(i,0,n-1)
        {
            cin>>ara[i];
        }
        deque<lli>dq;
        dq.push_back(ara[0]);
        int front_=0,back_=0;
        f(i,1,n-1)
        {
           if(ara[i]<dq[front_])
           {
               dq.push_front(ara[i]);
           }
           else{
             dq.push_back(ara[i]);
           }
        }
        for(auto itr: dq)
        {
            cout<<itr<<" ";
        }
        cout<<endl;
    }
    return 0;
}


