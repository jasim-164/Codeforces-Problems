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
        string s;
        cin>>s;
        int l,r;
        int test=0;
        f(i,0,n-2)
        {
            l=-1,r=-1;
            int cnta=0;
            int cntb=0;
            if(s[i]=='a')
                cnta++;
            if(s[i]=='b')
                cntb++;
            for(int j=i+1; j<n; j++)
            {
                if(s[j]=='a')
                {
                    cnta++;
                }
                if(s[j]=='b')
                {
                    cntb++;
                }
                if(cnta==cntb)
                {
                    l=i+1;
                    r=j+1;
                    break;
                }
            }
            if(l!=-1)
            {
                cout<<l<<" "<<r<<endl;
                test=1;
                break;
            }
        }
        if(!test)
        {
            cout<<"-1"<<" "<<"-1"<<endl;
        }

    }
    return 0;
}


