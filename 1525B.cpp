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
        lli ara[n+1];
        bool b=true;
        f(i,n)
        {
            cin>>ara[i];
            if(i+1!=ara[i])
               {
                   b=false;
               }
        }
        if(b)
        {
            cout<<"0"<<endl;
        }
        else if(ara[0]==1 || ara[n-1]==n)
        {
            cout<<"1"<<endl;
        }
         else if(ara[0]==n && ara[n-1]==1)
        {
            cout<<"3"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
    }
    return 0;
}

