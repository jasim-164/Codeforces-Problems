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
    lli t,n;

   cin>>n;
   if(n%2==0)
        cout<<n/2<<endl;
   else
        cout<<(-n-1)/2<<endl;


    return 0;
}

