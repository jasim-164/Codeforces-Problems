#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,ans,t;
    cin>>t;
    while(t--)
    {
    cin>>n>>k;
    ans=k/(n-1);
    int r=k%(n-1);
    if(r==0)
        cout<<k+ans-1<<endl;
    else
        cout<<k+ans<<endl;
     }
    return 0;
}
