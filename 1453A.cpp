#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,t;
    int ara[101],ara1[101];
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
         for(int i=0;i<m;i++)
        {
            cin>>ara1[i];
        }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(ara[i]==ara1[j])
                    {
                        count++;
                    }
                }
            }
            cout<<count<<endl;

    }
    return 0;
}
