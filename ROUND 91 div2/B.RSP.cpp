#include<bits/stdc++.h>
#include<cmath>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    vector<pair<int ,char>>a(3);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='R')
            a[1].first++;
        if(s[i]=='P')
            a[2].first++;

        if(s[i]=='S')
            a[0].first++;

    }
    a[0].second='R';
    a[1].second='P';
    a[2].second='S';
    sort(a.begin(),a.end(),greater<>());
    for(int i=0;i<n;i++)
    {
        cout<<a[0].second<<endl;
    }

}
int nain()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
