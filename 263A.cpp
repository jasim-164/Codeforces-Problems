#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[6][6];
    int i=0,j=0,t=25;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
    {
        cin>>ara[i][j];
    }
    }
    int m,n;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(ara[i][j]==1)
            {
                m=i;
                n=j;
                break;
            }
        }
    }
    int ans=abs(2-m)+abs(2-n);
    cout<<ans<<endl;

    return 0;
}
