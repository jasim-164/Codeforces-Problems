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
        string s;
        cin>>s;
        int siz=s.size();
        n=stoi(s);
        if(n%2==0)
            cout<<"0"<<endl;
        else
        {
            int p=s[siz-1]-'0';
            if(p%2)
            {
                int val=s[0]-'0';
                if(val%2==0)
                {
                    cout<<"1"<<endl;
                }
                else
                {
                bool b=false;
                for(int i=1;i<siz;i++)
                {
                   int val=s[i]-'0';
                    if(val%2==0)
                    {
                        b=true;
                        break;
                    }
                }
                 if(b)
                    cout<<"2"<<endl;
                else
                    cout<<"-1"<<endl;
                }
            }
        }
    }
    return 0;
}



