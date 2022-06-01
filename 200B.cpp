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
        cin>>n;
        lli ara[n+1];
        double sum=0;
        f(i,n)
        {
            cin>>ara[i];
            sum+=(ara[i]*1.0/100);
        }
        double rslt=sum*100.0/n;
        cout<<rslt<<endl;
    return 0;
}

