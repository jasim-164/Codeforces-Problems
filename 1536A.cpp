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
        int pos=0;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]<0)
                pos=-1;
        }
        if(pos==-1)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<"101"<<endl;
            for(int i=0;i<101;i++)
                cout<<i<<" ";
            cout<<endl;
        }
    }

    return 0;
}
