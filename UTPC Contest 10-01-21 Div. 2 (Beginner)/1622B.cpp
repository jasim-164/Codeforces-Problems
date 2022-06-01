#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
void solve()
{
    int n;
    cin>>n;
    int ara[n+1];
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        x--;
        ara[x]=i;
    }
    string s;
    cin>>s;
    int zero=1,one=1;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='0')zero++;
    }
    int ans[n+1];
     for(int i=0; i<n; i++)
     {
         if(s[ara[i]]=='0')
         {
             ans[ara[i]]=one;
             one++;
         }
         else
         {
             ans[ara[i]]=zero;
             zero++;
         }
     }
     for(int i=0; i<n; i++)
        cout<<ans[i]<<" ";
        cout<<endl;

}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}


