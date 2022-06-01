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
        lli ara[n+1];

        f(i,0,n-1)
        {
            cin>>ara[i];

        }
        if(n%2==0)
        {
            cout<<"YES"<<endl;
        }
        else{

        int temp=0;
        for(int i=0;i<n-1;i++)//5373828284
        {

            if(ara[i]>=ara[i+1])
            {
              temp=1;
              break;
            }

        }

        if(temp==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        }
    }
    return 0;
}


