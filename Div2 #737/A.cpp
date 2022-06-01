#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,a,b) for(int i=a;i<=b;i++)
const lli maxn=1000005;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli ara[n+1];
        double s=0.0;
        f(i,0,n-1)
        {
            cin>>ara[i];
            s+=ara[i]*1.0;
        }
        sort(ara,ara+n);
        double sum=0.0;
        sum+=(ara[n-1]*1.0);
        s-=ara[n-1];
        s=s*1.0/(n-1);
        sum+=s;
        cout<<std:: setprecision(12)<<sum<<endl;



    }
    return 0;
}


