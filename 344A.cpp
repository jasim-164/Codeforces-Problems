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
    int i=0;
    vector<string>v;
    while(t--)
    {
      string s;
      cin>>s;
      v.push_back(s);
    }
    int cnt=1;
    for(i=0;i<v.size()-1;i++)
    {
        if(v[i]!=v[i+1])
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

