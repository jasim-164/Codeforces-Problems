#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ara[n+1];
        for(int i=0;i<n;i++)
        {
            ara[i]=rand()/1000;
            cout<<ara[i]<<" ";
        }

    }
}
