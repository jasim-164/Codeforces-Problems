
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,a,b) for(int i=a;i<=b;i++)
#define mod 1000000007
#define inf 1e18
const lli maxn=1000000000;
int main()
{
    int t,n;
    char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cin>>t;
    while(t--)
    {
        cin>>n;
        int val=1;
        int cnt=1;
        if(n>19)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        for(int i=1;i<=n;i++)
        {

            cout<<val<<" ";
            val*=3;
           /* if(val>maxn){


                break;
            }
            cnt++;*/
        }
    }
    }
    return 0;
}

