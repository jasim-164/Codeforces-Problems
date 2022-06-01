#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<lli,lli>mp;
        int ara[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            mp[ara[i]-i]++;  //count frequency
        }
        lli  pair_=0;
        for(auto itr:mp)
        {
            pair_+=(itr.second)*(itr.second-1)/2; // nCr
                                                  //ncr=(n.n-1.n-2.......n-r+1)/r!
        }
        cout<<pair_<<endl;
    }
    return 0;
}
