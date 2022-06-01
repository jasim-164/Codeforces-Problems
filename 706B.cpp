#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    lli n;
    cin>>n;
    vector<lli>v;
    for(int i=0;i<n;i++)
    {
        lli val;
        cin>>val;
        v.push_back(val);
    }
    sort(v.begin(),v.end());
    lli q;
    cin>>q;
    while(q--)
    {
        lli k;
        cin>>k;
        cout<<upper_bound(v.begin(),v.end(),k)-v.begin()<<endl;
    }

    return 0;
}
