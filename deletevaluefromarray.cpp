#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[100],n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>ara[i];
    }
        for(int i=1;i<=n;i++)
        {
            for(int k=i+1;k<=n;k++)
            {
                if(ara[i]==ara[k])
                {
                    for(int j=k;j<=n-1;j++)
                    {
                        ara[j]=ara[j+1];
                    }
                    n--;
                }
            }

        }

    for(int i=1; i<=n; ++i)
        cout<<ara[i]<<" ";

 return 0;
}
