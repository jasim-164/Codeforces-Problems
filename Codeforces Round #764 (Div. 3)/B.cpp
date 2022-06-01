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
        int a,b,c;
        cin>>a>>b>>c;
        if((2*b-c)>0 and (2*b-c)%a==0)
        {
            cout<<"YES"<<endl;
        }
        else if((a+c)%(2*b)==0)
        {
            cout<<"YES"<<endl;
        }
        else if((2*b-a)>0 and ((2*b-a)%c==0))
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


