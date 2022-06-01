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
        int ara[n+1][n+1];
        if(n==2)
            cout<<"-1"<<endl;
        else
        {
            int cnt=0;
            int j=0;
            for(int i=1;i<=n*n;i=i+2)
            {
                cnt++;j++;
                cout<<i<<" ";
                if(j==n)
                {
                 cout<<endl;
                 j=0;
                }
                if(cnt==n*n)
                {
                    break;
                }
            }
            for(int i=2;i<=n*n;i=i+2)
            {
                cnt++;
                j++;
                cout<<i<<" ";
                 if(j==n)
                {
                 cout<<endl;
                 j=0;
                }
                if(cnt==n*n)
                {
                    break;
                }
            }
        }
    }
    return 0;
}
