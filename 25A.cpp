#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int n,odd=0,even=0;
    cin>>n;
    int ara[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>ara[i];
        if(ara[i]%2==1)
            even++;
        else
            odd++;
    }
    if(even>odd)
    {
     for(int i=1;i<=n;i++)
    {

        if(ara[i]%2!=1)
        {
            cout<<i<<endl;
            break;
        }

    }
    }
    else
    {
        for(int i=1;i<=n;i++)
    {

        if(ara[i]%2==1)
        {
            cout<<i<<endl;
            break;
        }

    }
    }
    return 0;
}
