#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n+1];
    int cnt=0,sum=0;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
       cin>>ara[i];
       if(ara[i]<0)
       {

           v.push_back(ara[i]);
       }
       else
       {
           sum+=ara[i];
           cnt++;
       }
    }
    int siz=v.size();
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
    int p=0;
    for(int i=siz-1;i>=0;i--)
    {
        sum-=v[i];
        if(sum<0)
        {
            break;
        }
        p++;
    }
    cout<<p+cnt<<endl;

    return 0;
}
