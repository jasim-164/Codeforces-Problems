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
        char c[n+1][n+1];

        lli cnt1=0,cnt2=0;
        f(i,0,n-1)
        {
            if(s[i]=='1')
                cnt1++;
            else
                cnt2++;
        }
        if(cnt2==1 or cnt2==2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                int temp=0;
                for(int j=i;j<n;j++)
                {

                    if(i==j)
                    {
                        c[i][j]='X';
                    }
                    else if(s[i]=='1')
                    {
                        c[i][j]='=';
                        c[j][i]='=';
                    }

                    else if(s[j]=='2' && temp!=1 )
                    {
                        c[i][j]='+';
                        c[j][i]='-';
                        temp=1;
                    }
                    else
                    {
                        c[i][j]='-';
                        c[j][i]='+';
                    }
                }
            }
        }
        cout<<"YES"<<endl;
          for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<c[i][j];
                }
                cout<<endl;
            }

    }
    return 0;
}


