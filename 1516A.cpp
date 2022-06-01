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
        int ara[n+1];
        for(int i=0;i<n;i++)cin>>ara[i];
        int i=0;
        int j=n-1;
        while(k)
        {
            if(i==n-1)break;
            if(ara[i]>0)
            {
                ara[i]--;
                ara[j]++;
                k--;
            }
            else
             i++;
        }
        for(int i=0;i<n;i++)
            cout<<ara[i]<<" ";
        cout<<endl;

    }
}
