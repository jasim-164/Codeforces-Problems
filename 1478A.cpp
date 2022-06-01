#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<lli,lli>mp;
        lli p,m=0;
        for(int i=0;i<n;i++)
        {
            cin>>p;
            mp[p]++;
            m=max(m,mp[p]);
        }
        cout<<m<<endl;

    }
}
