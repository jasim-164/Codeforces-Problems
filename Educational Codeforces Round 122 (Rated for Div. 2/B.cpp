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
   // char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cin>>t;
    while(t--)
    {
     string s;
     cin>>s;
     int len=s.size();
     int one=0,zero=0;
     for(int i=0;i<len;i++)
     {
         if(s[i]=='0')
            zero++;
         else
            one++;
     }
     if(zero==len or one ==len)
     {
         cout<<"0"<<endl;
     }
     else if(one !=zero)
     {
         cout<<min(one,zero)<<endl;
     }
     else
     {
         cout<<one-1<<endl;
     }

    }
    return 0;
}


