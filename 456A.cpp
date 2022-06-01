#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],b[n+1];
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        v.push_back(make_pair(a[i],b[i]));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
    {
     if(v[i].first<v[i+1].first && v[i].second>v[i+1].second)
     {
             cout<<"Happy Alex"<<endl;
             return 0;
     }

    }
    cout<<"Poor Alex"<<endl;
    return 0;
}
