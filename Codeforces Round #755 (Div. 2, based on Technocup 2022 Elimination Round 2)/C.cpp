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
    char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cin>>t;
    while(t--)
    {
        cin>>n;
        lli ara[n+1],ara2[n+1];
        f(i,0,n-1)
        {
            cin>>ara[i];
        }
        sort(ara,ara+n);
        lli mx=-300;
        f(i,0,n-1)
        {
            cin>>ara2[i];
            mx=max(ara2[i],mx);
        }
        sort(ara2,ara2+n);
        bool b=true;
         f(i,0,n-1)
        {
            //cin>>ara[i];
            if((ara2[i]-ara[i])==1 or (ara2[i]-ara[i])==0)
            {
                b=true;
            }
            else
            {
                b=false;
                break;
            }
        }
        if(b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }




    }
    return 0;
}


