#include<bits/stdc++.h>
using namespace std;
bool sign(int num)
{
    return num>0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ara[n+1];
        for(int i=0;i<n;++i)
        {
            cin>>ara[i];
        }

        long long int rslt=0;
        for(int i=0;i<n;++i)
        {
           int j=i;
           int mx=ara[i];
           //cout<<sign(ara[i])<<endl;
           while(j<n && (sign(ara[i])==sign(ara[j])))
                 {
                   mx=max(ara[j],mx);
                   j++;
                 }
           i=j-1;
           rslt+=mx;
        }
        cout<<rslt<<endl;

    }
    return 0;
}
