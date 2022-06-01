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
    //char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cin>>t;
    while(t--)
    {
        int n,m,r,c;
        cin>>n>>m>>r>>c;
        string s[n+1];
        f(i,0,n-1)
        {
            cin>>s[i];
        }
        bool test=false;
        bool isokay=false;
        int white=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i][j]=='W')
                    white++;
                if(s[i][j]=='B' and (i+1==r or j+1==c))
                {
                    test=true;
                }
                  if(s[i][j]=='B' and (i+1==r and j+1==c))
                {
                    isokay=true;
                }
            }
        }
        if(white==(n*m))
        {
            cout<<"-1"<<endl;
        }
        else if(isokay)
        {
            cout<<"0"<<endl;
        }
        else if(test)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
    }
    return 0;
}


