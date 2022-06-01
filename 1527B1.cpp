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
        string s;
        cin>>s;
        int zero=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')zero++;
        }
        if(zero==1)
        {
            cout<<"BOB"<<endl;
        }
        else if(zero%2==0)
        {
            cout<<"BOB"<<endl;
        }
        else
        {
            cout<<"ALICE"<<endl;
        }


    }
    return 0;
}

