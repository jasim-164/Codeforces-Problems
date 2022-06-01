#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>v;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            v.push_back({a[i],b[i]});
        }
        sort(v.begin(),v.end());
        int ans=k;
        for(int i=0;i<n;i++)
        {
            if(ans>=v[i].first)
            {
                //k+=v[i].first;
                ans+=v[i].second;
            }
            else
            {
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
