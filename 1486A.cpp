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
        lli ara[n+1];
        f(i,n)
        {
            cin>>ara[i];
        }
        lli t=1;
        for(int i=0;i<n-1;i++)
        {
            /*if(ara[i]!=0)
            {
                if(ara[i]>=ara[i+1])
                {
                    while(ara[i]>ara[i+1])
                    {
                        ara[i]=ara[i]-1;
                        ara[i+1]=ara[i+1]+1;
                    }
                   if(ara[i]<0)
                   {
                       cout<<"NO"<<endl;
                       t=0;
                       break;
                   }
                }
            }*/

            else if(ara[i]==0&&ara[i+1]==0)
            {
               cout<<"NO"<<endl;
               t=0;
               break;
            }
        }
        if(t==1)
            cout<<"YES"<<endl;
    }

    return 0;
}
