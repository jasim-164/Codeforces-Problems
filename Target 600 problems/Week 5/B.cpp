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
    cin>>n;
    string s[n+1];
    f(i,0,n-1)
    {
        cin>>s[i];
    }
    char c=s[0][0];
    bool b=true;
     f(i,1,n-1)
    {
       if(s[i][i]!=c)
       {
        b=false;
        break;
       }

    }
    if(!b)
    {
        cout<<"NO"<<endl;
        return 0;
    }
      f(i,0,n-1)
    {
       if(s[i][n-i-1]!=c)
       {
        b=false;
        break;
       }

    }
      if(!b)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    char ch=s[0][1];
    f(i,0,n-1)
    {
        f(j,0,n-1)
        {
            if(i!=j && i!=n-1-j)
            {
                if(s[i][j]==c)
                {
                    b=false;
                    break;
                }
                if(s[i][j]!=ch)
                {
                    b=false;
                    break;
                }

            }
            else
                continue;

        }
        if(!b)
                break;
    }
      if(!b)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        cout<<"YES"<<endl;
    }

    return 0;
}


