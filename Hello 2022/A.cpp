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
    int t,n,k;
    char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int val=(n+1)/2;
        char s[n][n];
        memset(s,'.',sizeof(s));
        if(val<k)
        {
            cout<<"-1"<<endl;
            continue;
        }

        else
        {

            int d=0;

            for(int i=0;i<n;i++)
            {
                bool b=true;
                for(int j=0;j<n;j++)
            {

                if(i%2==0 && j%2==0 && b==true && k!=0)
                {
                   s[i][j+d]='R';
                   d+=2;
                   b=false;
                   k--;

                }
                else
                {
                    if(s[i][j]!='R')
                    s[i][j]='.';
                }

            }
            }
        }
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
        {
            cout<<s[i][j];
        }
        cout<<endl;
        }
      //  cout<<endl;
        //cout<<s<<endl;
    }
    return 0;
}


