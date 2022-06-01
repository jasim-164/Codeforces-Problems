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
        int t=1;
        f(i,0,n-1)
        {
            string s="";
            bool b=true;
            lli val=ara[i];
            for(int j=0;j<n;j++)
            {

                if(ara[j]%val==0)
                {
                    s+='R';
                }
                else
                {
                    s+='B';
                }
            }
            lli p=s.size()-1;
            for(int i=0;i<p;i++)
            {
                if(s[i]==s[i+1])
                {
                    b=false;
                    break;
                }
            }
            if(b)
            {
                cout<<val<<endl;
                t=0;
                break;
            }

        }
        if(t)
        {
            cout<<"0"<<endl;
        }
    }
    return 0;
}


