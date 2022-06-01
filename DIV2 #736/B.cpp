#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,a,b) for(int i=a;i<=b;i++)
const lli maxn=1000005;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s[2];
        f(i,0,1)
        {
            cin>>s[i];
        }
        bool b[n+1];
        lli cnt=0;
        memset(b,true,sizeof(b));
        f(i,0,n-1)
        {
            if(s[1][i]=='1')
            {
                if(s[0][i]=='0' and b[i]==true)
                {
                    cnt++;
                    b[i]=false;
                }
                else if(s[0][i-1]=='1' and b[i-1]==true and i!=0)
                {
                    cnt++;
                    b[i-1]=false;
                }
                  else if(s[0][i+1]=='1' and b[i+1]==true and i!=n-1)
                {
                    cnt++;
                    b[i+1]=false;
                }

            }
        }

        cout<<cnt<<endl;
    }
    return 0;
}


