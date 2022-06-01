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
    int t,n,m;
    char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        vector<string>s(n);
        for(int i=0; i<n; i++)
        {
            cin>>s[i];

        }
        int rslt=1e9;
        for(int i=0; i<n; i++)
        {

            for(int j=0; j<n; j++)
            {
                if(i!=j)
                {
                    int sum=0;
                    for(int k=0; k<m; k++)
                    {

                        if(s[i][k]!=s[j][k])
                        {
                            //cout<<s[i][k]<<endl;
                            //cout<<s[j][k]<<endl;
                            sum+=abs(s[i][k]-s[j][k]);

                        }

                    }
                    rslt=min(rslt,sum);
                }





            }

        }
        cout<<rslt<<endl;

    }
    return 0;
}


