#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ara[n+1];
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            mp[ara[i]]++;
        }
        int cnt=0;
        for(auto itr : mp)
        {
            if(itr.first==1)
                cnt+=itr.second;
            if(itr.first==3)
                cnt+=itr.second;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
