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
        if(k==0)
        {
            for(int i=1;i<=n;i++)
            cout<<i<<" ";
            cout<<"\n";
            continue;
        }
        if(k>((n+1)/2)-1)
        {
            cout<<"-1"<<endl;
            continue;
        }
        else
        {
            cout<<1<<" ";
            int j=2,i=3,cnt=0;
            while(k!=cnt)
            {

                cout<<i<<" ";
                i+=2;

                cout<<j<<" ";
                j+=2;
            cnt++;
            }
            for(int i=j;i<=n;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;

        }
    }
    return 0;
}
