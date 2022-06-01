#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,xi,yi;
    cin>>s>>n;
    pair<int,int>v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v,v+n);
    int t=1;
    for(int i=0;i<n;i++)
    {
        if(s>v[i].first)
        {
            s=s+v[i].second;
        }
        else
        {
            cout<<"NO"<<endl;
            t=0;
            break;
        }
    }
    if(t==1)
        cout<<"YES"<<endl;

    return 0;
}
