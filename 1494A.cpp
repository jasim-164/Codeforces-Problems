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
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        lli ara[n+1];
       char c=s[0];
       int cnt=1;
       if(s[0]==s[n-1])
       {
           cout<<"NO"<<endl;
           continue;
       }
       else{
       for(int i=1;i<n;i++)
       {
           if(s[i]==c)
            cnt++;
       }
       if(cnt>n/2)
        cout<<"NO"<<endl;
       else if(cnt==n/2)
        cout<<"YES"<<endl;
       else{
         cout<<"YES"<<endl;
       }
       }
    }
    return 0;
}
