#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int ara[n+1],t[q+1];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        mp[ara[i]]=i+1;
    }
    int visit[q+1];
    memset(visit,1,sizeof(visit));
       for(int i=0;i<q;i++)
    {

        cin>>t[i];
        cout<<mp[t[i]]<<" ";
        for(int j=0;j<=52;j++)
        {
            if(mp[j]<mp[t[i]])mp[j]++;
        }
        mp[t[i]]=1;
    }
    return 0;
}

