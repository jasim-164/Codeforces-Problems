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
        int b[101];
        memset(b,0,sizeof(b));
        lli ara[n+1];
        f(i,n)
        {
            cin>>ara[i];
            b[ara[i]]++;
        }
        //sort(ara,ara+n);
       int t=0;
        f(i,102)
        {
            if(b[i]==1)
            {
                f(j,n)
                {
                    if(ara[j]==i)
                    {
                        cout<<j+1<<endl;
                        t=1;
                        break;
                    }
                }
            }
            if(t==1)
                break;

        }

    }
    return 0;
}

