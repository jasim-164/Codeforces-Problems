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
        int x,y;
        cin>>x>>y;
        double rslt =(x*x+y*y)*1.0;
        rslt=sqrt(rslt);
       // cout<<rslt<<endl;
        if(x==0 && y==0)
        {
            cout<<"0"<<endl;
        }
        else if(ceil(rslt)==floor(rslt))
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


