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
    int t,k;
    cin>>t;
    while(t--)
    {
        cin>>k;
        int a;
        int b;
        a=k;
        b=100;
        int g=__gcd(a,b);//greatest common divisor
        //25=5*5;=5^2
        //100=5*5*4=5^2*4^1
        //gcd(25,100)=5^min(2,2)=25
        a=a/g;
        b=b/g;
        cout<<b<<endl;
        //1L pour 1 operation
        //e/e+w
        //w/e+w
        //e+w>0


    }
    return 0;
}

