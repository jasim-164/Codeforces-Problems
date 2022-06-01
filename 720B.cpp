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
        lli ara[n+1];
        lli m = INT_MAX;
        lli r=10e9+7;
        lli pos=-1;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]<m)
            {
                m=ara[i];
                pos=i;
            }
        }
       lli start =-1;
        int ops=0;
        if(pos%2==0)
        {
            start=1;
            ops=n/2;
        }
        else
        {
            start=0;
            ops=(n+1)/2;
        }
        cout<<ops<<endl;
        for(int i=0;i<ops;i++)
        {
            cout<<pos+1<<" "<<start+1<<" "<<ara[pos]<<" "<<r<<endl;
           start+=2;
        }


    }
    return 0;
}
